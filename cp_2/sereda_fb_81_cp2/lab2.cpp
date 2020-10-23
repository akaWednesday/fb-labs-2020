#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main (void)
{
    //считываем текст и переводим его в одну строку
    setlocale(LC_ALL,"Russian"); //что бы не біло абра кадабры вместо букв (хотя возможно єто и не надо и кодировка сама все исправила)
    string line;
    string fullstring;
    ifstream in2("C:\\Users\\User\\Desktop\\Учеба 5 семестр\\Криптография\\ЛР\\fb-labs-2020\\cp_2\\sereda_fb_81_cp2\\text.txt");
    while (getline(in2, line))
    {
        fullstring = fullstring + line;
    }
    in2.close();


    //редактируем текст убираем знаки препинания
    for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]=='1' || fullstring[i]=='*' || fullstring[i]=='"' || fullstring[i]=='`' || fullstring[i]=='2' || fullstring[i]=='3' || fullstring[i]=='4' || fullstring[i]=='5' || fullstring[i]=='6' || fullstring[i]=='7' || fullstring[i]=='8' || fullstring[i]=='9' || fullstring[i]=='0' || fullstring[i]=='.' || fullstring[i]==',' || fullstring[i]=='–' || fullstring[i]=='?' || fullstring[i]=='!' || fullstring[i]==')' || fullstring[i]=='(' || fullstring[i]=='-' || fullstring[i]=='"' || fullstring[i]==':')
        {
            fullstring[i]=' ';
        }
    }


    //редактируем текст убираем двойные пробелы
    //флаг для того что бы если мы вдруг не стерли ничего при последней попытке, то и дальше прогонять нет смысла
    int flag = 1;
    while (flag == 1)
    {
        flag = 0;
        for (int i = 0; i <= fullstring.length(); i++)
        {
            if (fullstring[i]==' ' && fullstring[i+1]==' ')
            {
                fullstring.erase(i,1);
                flag = 1;
                break;
            }
        }
    }


    //редактируем текст превращаем большие буквы в маленькие
    for (int i = 0; i <= fullstring.length(); i++)
    {
        switch (fullstring[i])
        {
        case 'А':
            fullstring[i] = 'а';
            break;
        case 'Б':
            fullstring[i] = 'б';
            break;
        case 'В':
            fullstring[i] = 'в';
            break;
        case 'Г':
            fullstring[i] = 'г';
            break;
        case 'Д':
            fullstring[i] = 'д';
            break;
        case 'Е':
            fullstring[i] = 'е';
            break;
        case 'Ё':
            fullstring[i] = 'е';
            break;
        case 'Ж':
            fullstring[i] = 'ж';
            break;
        case 'З':
            fullstring[i] = 'з';
            break;
        case 'И':
            fullstring[i] = 'и';
            break;
        case 'Й':
            fullstring[i] = 'й';
            break;
        case 'К':
            fullstring[i] = 'к';
            break;
        case 'Л':
            fullstring[i] = 'л';
            break;
        case 'М':
            fullstring[i] = 'м';
            break;
        case 'Н':
            fullstring[i] = 'н';
            break;
        case 'О':
            fullstring[i] = 'о';
            break;
        case 'П':
            fullstring[i] = 'п';
            break;
        case 'Р':
            fullstring[i] = 'р';
            break;
        case 'С':
            fullstring[i] = 'с';
            break;
        case 'Т':
            fullstring[i] = 'т';
            break;
        case 'У':
            fullstring[i] = 'у';
            break;
        case 'Ф':
            fullstring[i] = 'ф';
            break;
        case 'Х':
            fullstring[i] = 'х';
            break;
        case 'Ц':
            fullstring[i] = 'ц';
            break;
        case 'Ч':
            fullstring[i] = 'ч';
            break;
        case 'Ш':
            fullstring[i] = 'ш';
            break;
        case 'Щ':
            fullstring[i] = 'щ';
            break;
        case 'Ъ':
            fullstring[i] = 'ъ';
            break;
        case 'Ы':
            fullstring[i] = 'ы';
            break;
        case 'Ь':
            fullstring[i] = 'ь';
            break;
        case 'Э':
            fullstring[i] = 'э';
            break;
        case 'Ю':
            fullstring[i] = 'ю';
            break;
        case 'Я':
            fullstring[i] = 'я';
            break;
        case 'ё':
            fullstring[i] = 'е';
            break;
        default:
            break;
        }
    }

    // пришло время убрать пробелы
     for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]== ' ')
        {
            fullstring.erase(i,1);
        }
    }

    cout << fullstring << endl;

    //шифруем шифром вижинера
    string key1 = "ра";
    char cyphertext1[fullstring.length()];
    cout << endl << "Ключ: " << key1 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext1[i]=(char)(((((int)fullstring[i] + 32) + ((int)key1[i%2] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext1[i];
    }
    cout << endl;

    string key2 = "сет";
    char cyphertext2[fullstring.length()];
    cout << endl << "Ключ: " << key2 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext2[i]=(char)(((((int)fullstring[i] + 32) + ((int)key2[i%3] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext2[i];
    }
    cout << endl;

    string key3 = "один";
    char cyphertext3[fullstring.length()];
    cout << endl << "Ключ: " << key3 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext3[i]=(char)(((((int)fullstring[i] + 32) + ((int)key3[i%4] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext3[i];
    }
    cout << endl;

    string key4 = "вишну";
    char cyphertext4[fullstring.length()];
    cout << endl << "Ключ: " << key4 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext4[i]=(char)(((((int)fullstring[i] + 32) + ((int)key4[i%5] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext4[i];
    }
    cout << endl;

    string key5 = "анубис";
    char cyphertext5[fullstring.length()];
    cout << endl << "Ключ: " << key5 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext5[i]=(char)(((((int)fullstring[i] + 32) + ((int)key5[i%6] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext5[i];
    }
    cout << endl;

    string key6 = "цукуёми";
    char cyphertext6[fullstring.length()];
    cout << endl << "Ключ: " << key6 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext6[i]=(char)(((((int)fullstring[i] + 32) + ((int)key6[i%7] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext6[i];
    }
    cout << endl;

    string key7 = "кагуцути";
    char cyphertext7[fullstring.length()];
    cout << endl << "Ключ: " << key7 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext7[i]=(char)(((((int)fullstring[i] + 32) + ((int)key7[i%8] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext7[i];
    }
    cout << endl;

    string key8 = "аматэрасу";
    char cyphertext8[fullstring.length()];
    cout << endl << "Ключ: " << key8 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext8[i]=(char)(((((int)fullstring[i] + 32) + ((int)key8[i%9] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext8[i];
    }
    cout << endl;

    string key9 = "агорафобия";
    char cyphertext9[fullstring.length()];
    cout << endl << "Ключ: " << key9 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext9[i]=(char)(((((int)fullstring[i] + 32) + ((int)key9[i%10] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext9[i];
    }
    cout << endl;

    string key10 = "филадельфия";
    char cyphertext10[fullstring.length()];
    cout << endl << "Ключ: " << key10 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext10[i]=(char)(((((int)fullstring[i] + 32) + ((int)key10[i%11] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext10[i];
    }
    cout << endl;

    string key11 = "антананариву";
    char cyphertext11[fullstring.length()];
    cout << endl << "Ключ: " << key11 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext11[i]=(char)(((((int)fullstring[i] + 32) + ((int)key11[i%12] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext11[i];
    }
    cout << endl;

    string key12 = "кетцалькоатль";
    char cyphertext12[fullstring.length()];
    cout << endl << "Ключ: " << key12 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext12[i]=(char)(((((int)fullstring[i] + 32) + ((int)key12[i%13] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext12[i];
    }
    cout << endl;

    string key13 = "пирвовремячумы";
    char cyphertext13[fullstring.length()];
    cout << endl << "Ключ: " << key13 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext13[i]=(char)(((((int)fullstring[i] + 32) + ((int)key13[i%14] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext13[i];
    }
    cout << endl;

    string key14 = "мненадоелодумат";
    char cyphertext14[fullstring.length()];
    cout << endl << "Ключ: " << key14 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext14[i]=(char)(((((int)fullstring[i] + 32) + ((int)key14[i%15] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext14[i];
    }
    cout << endl;

    //считаем индекс соответствия
    int minor_counter = 0;
    int major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)fullstring[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для открытого текста: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext1[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №1: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext2[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №2: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext3[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №3: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext4[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №4: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext5[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №5: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext6[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №6: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext7[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №7: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext8[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №8: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext9[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №9: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext10[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №10: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext11[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №11: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext12[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №12: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext13[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №13: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    minor_counter = 0;
    major_counter = 0;
    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext14[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "Индекс соответственности для шифротекста №14: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    return 0;
}
