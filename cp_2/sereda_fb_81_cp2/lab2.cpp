#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main (void)
{
    //��������� ����� � ��������� ��� � ���� ������
    setlocale(LC_ALL,"Russian"); //��� �� �� ��� ���� ������� ������ ���� (���� �������� ��� � �� ���� � ��������� ���� ��� ���������)
    string line;
    string fullstring;
    ifstream in2("C:\\Users\\User\\Desktop\\����� 5 �������\\������������\\��\\fb-labs-2020\\cp_2\\sereda_fb_81_cp2\\text.txt");
    while (getline(in2, line))
    {
        fullstring = fullstring + line;
    }
    in2.close();


    //����������� ����� ������� ����� ����������
    for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]=='1' || fullstring[i]=='*' || fullstring[i]=='"' || fullstring[i]=='`' || fullstring[i]=='2' || fullstring[i]=='3' || fullstring[i]=='4' || fullstring[i]=='5' || fullstring[i]=='6' || fullstring[i]=='7' || fullstring[i]=='8' || fullstring[i]=='9' || fullstring[i]=='0' || fullstring[i]=='.' || fullstring[i]==',' || fullstring[i]=='�' || fullstring[i]=='?' || fullstring[i]=='!' || fullstring[i]==')' || fullstring[i]=='(' || fullstring[i]=='-' || fullstring[i]=='"' || fullstring[i]==':')
        {
            fullstring[i]=' ';
        }
    }


    //����������� ����� ������� ������� �������
    //���� ��� ���� ��� �� ���� �� ����� �� ������ ������ ��� ��������� �������, �� � ������ ��������� ��� ������
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


    //����������� ����� ���������� ������� ����� � ���������
    for (int i = 0; i <= fullstring.length(); i++)
    {
        switch (fullstring[i])
        {
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        default:
            break;
        }
    }

    // ������ ����� ������ �������
     for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]== ' ')
        {
            fullstring.erase(i,1);
        }
    }

    cout << fullstring << endl;

    //������� ������ ��������
    string key1 = "��";
    char cyphertext1[fullstring.length()];
    cout << endl << "����: " << key1 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext1[i]=(char)(((((int)fullstring[i] + 32) + ((int)key1[i%2] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext1[i];
    }
    cout << endl;

    string key2 = "���";
    char cyphertext2[fullstring.length()];
    cout << endl << "����: " << key2 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext2[i]=(char)(((((int)fullstring[i] + 32) + ((int)key2[i%3] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext2[i];
    }
    cout << endl;

    string key3 = "����";
    char cyphertext3[fullstring.length()];
    cout << endl << "����: " << key3 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext3[i]=(char)(((((int)fullstring[i] + 32) + ((int)key3[i%4] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext3[i];
    }
    cout << endl;

    string key4 = "�����";
    char cyphertext4[fullstring.length()];
    cout << endl << "����: " << key4 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext4[i]=(char)(((((int)fullstring[i] + 32) + ((int)key4[i%5] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length(); i++)
    {
        cout << cyphertext4[i];
    }
    cout << endl;

    string key6 = "��������������";
    char cyphertext6[fullstring.length()];
    cout << endl << "����: " << key6 << endl;
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
