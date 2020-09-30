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
    cout << fullstring << endl;


    //редактируем текс убираем знаки препинания
    for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]=='.' || fullstring[i]==',' || fullstring[i]=='?' || fullstring[i]=='!' || fullstring[i]=='"' || fullstring[i]==':')
        {
            fullstring[i]=' ';
        }
    }
    cout << fullstring << endl;


    //редактируем текс убираем двойные пробелы
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
    cout << fullstring << endl;


    //редактируем текс превращаем большие буквы в маленькие
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
            fullstring[i] = 'В';
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
            fullstring[i] = 'ё';
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
        default:
            break;
        }
    }
    cout << fullstring << endl;

    return 0;
}
