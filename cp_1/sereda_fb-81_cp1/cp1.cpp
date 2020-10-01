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
    ifstream in2("C:\\Users\\User\\Desktop\\Учеба 5 семестр\\Криптография\\ЛР\\fb-labs-2020\\cp_1\\sereda_fb-81_cp1\\text.txt");
    while (getline(in2, line))
    {
        fullstring = fullstring + line;
    }
    in2.close();


    //редактируем текст убираем знаки препинания
    for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]=='.' || fullstring[i]==',' || fullstring[i]=='?' || fullstring[i]=='!' || fullstring[i]=='-' || fullstring[i]=='"' || fullstring[i]==':')
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
    cout << "Текст" << endl;
    cout << fullstring << endl;


    //пора считать буквы
    int letters_with_space [33];
    for (int i = 0; i <= 32; i++)
    {
        letters_with_space[i] = 0;
    }
    for (int i = 0; i<= 31; i++)
    {
        for (int j = 0; j <= fullstring.length(); j++)
        {
            if ((int)fullstring[j]==(int)'а'+i)
            {
                letters_with_space[i]=letters_with_space[i]+1;
            }
        }
    }
    //отдельно считаем пробел
    for (int j = 0; j <= fullstring.length(); j++)
        {
            if ((int)fullstring[j]==32)
            {
                letters_with_space[32]=letters_with_space[32]+1;
            }
        }
    cout << endl;
    cout << "Колличество букв с пробелом" << endl;
    for (int i = 0; i <= 32; i++)
    {
        cout << (char)(-32+i) << " " << letters_with_space[i] << endl;
    }
    cout << endl << "Total symbols " << fullstring.length() << endl;


    //теперь считаем их частоты
    double chastota_bukv_probel[33];
    for (int i = 0; i <= 32; i++)
    {
        chastota_bukv_probel[i] = (double)letters_with_space[i]/(double)fullstring.length();
    }
    cout << endl;
    cout << "Частота букв с пробелом" << endl;
    for (int i = 0; i <= 32; i++)
    {
        cout << (char)(-32+i) << " " << chastota_bukv_probel[i] << endl;
    }
    cout << endl;


    //теперь без пробелов
    //тут все почти как с пробелами, но до самого пробела в массиве letters_with_space мы не доходим, и от общего колличества букв отнимаем колличество пробелов
    double chastota_bukv[32];
    for (int i = 0; i <= 31; i++)
    {
        chastota_bukv[i] = (double)letters_with_space[i]/(double)(fullstring.length()-letters_with_space[32]);
    }
    cout << endl;
    cout << "Частота букв без пробелом" << endl;
    for (int i = 0; i <= 31; i++)
    {
        cout << (char)(-32+i) << " " << chastota_bukv[i] << endl;
    }
    cout << endl;


    //теперь выведем эти же массивы, но в отсортированом виде
    //уже написав всё ето я вспомнил что можно выводить и в алфоыитном порядке, поетому решил это пока закоментить
    /*cout << "Частота букв с пробелом отсортирована" << endl;
    double max1=0.0;
    int max1_index=0;
    cout << (char)(32) << " " << chastota_bukv_probel[32] << endl;
    for (int j = 0; j<=31; j++)
    {
        for (int i = 0; i <= 31; i++)
        {
            if (chastota_bukv_probel[i] >= max1)
            {
                max1 = chastota_bukv_probel[i];
                max1_index = i;
            }
        }
        cout << (char)(-32+max1_index) << " " << max1 << endl;
        chastota_bukv_probel[max1_index]=-1.0;
        max1 = 0.0;
        max1_index = 0;
    }
    cout << endl;

    cout << "Частота букв без пробелом отсортирована" << endl;
    double max2=0.0;
    int max2_index=0;
    for (int j = 0; j<=31; j++)
    {
        for (int i = 0; i <= 31; i++)
        {
            if (chastota_bukv[i] >= max2)
            {
                max2 = chastota_bukv[i];
                max2_index = i;
            }
        }
        cout << (char)(-32+max2_index) << " " << max2 << endl;
        chastota_bukv[max2_index]=-1.0;
        max2 = 0.0;
        max2_index = 0;
    }
    cout << endl;*/


    //считаем биграммы
    //считаем аналогично унограммам, но проверяем по типу (int)mas[i] = ... && (int)mas[i+1] = ... если да то добавляем +1 в массив размером 33*33
    //для подсчета прийдеться делать 3ной цикл (первый для первой буквы, второй для второй, а третий для прохода по тексту)
    //надо еще обдумать вывод, но я думаю, чисто по номерам елемента в массиве, можно придумать схему

    return 0;
}
