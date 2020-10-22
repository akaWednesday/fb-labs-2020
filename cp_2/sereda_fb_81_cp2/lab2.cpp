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
    string key1 = "ок";
    char cyphertext1[fullstring.length()];
    cout << endl << "Ключ: " << key1 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext1[i]=(char)(((((int)fullstring[i] + 32) + ((int)key1[i%2] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext1[i];
    }
    cout << endl;

    string key2 = "нет";
    char cyphertext2[fullstring.length()];
    cout << endl << "Ключ: " << key2 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext2[i]=(char)(((((int)fullstring[i] + 32) + ((int)key2[i%3] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext2[i];
    }
    cout << endl;

    string key3 = "день";
    char cyphertext3[fullstring.length()];
    cout << endl << "Ключ: " << key3 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext3[i]=(char)(((((int)fullstring[i] + 32) + ((int)key3[i%4] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext3[i];
    }
    cout << endl;

    string key4 = "альба";
    char cyphertext4[fullstring.length()];
    cout << endl << "Ключ: " << key4 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext4[i]=(char)(((((int)fullstring[i] + 32) + ((int)key4[i%5] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext4[i];
    }
    cout << endl;

    string key6 = "пирвовремячумы";
    char cyphertext6[fullstring.length()];
    cout << endl << "Ключ: " << key6 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext6[i]=(char)(((((int)fullstring[i] + 32) + ((int)key6[i%14] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext6[i];
    }
    cout << endl;


    return 0;
}
