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
    for (int i = 0; i<=fullstring.length()-1; i++)
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
    for (int i = 0; i<=fullstring.length()-1; i++)
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
    for (int i = 0; i<=fullstring.length()-1; i++)
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
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext4[i];
    }
    cout << endl;

    string key5 = "������";
    char cyphertext5[fullstring.length()];
    cout << endl << "����: " << key5 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext5[i]=(char)(((((int)fullstring[i] + 32) + ((int)key5[i%6] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext5[i];
    }
    cout << endl;

    string key6 = "������";
    char cyphertext6[fullstring.length()];
    cout << endl << "����: " << key6 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext6[i]=(char)(((((int)fullstring[i] + 32) + ((int)key6[i%7] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext6[i];
    }
    cout << endl;

    string key7 = "��������";
    char cyphertext7[fullstring.length()];
    cout << endl << "����: " << key7 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext7[i]=(char)(((((int)fullstring[i] + 32) + ((int)key7[i%8] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext7[i];
    }
    cout << endl;

    string key8 = "���������";
    char cyphertext8[fullstring.length()];
    cout << endl << "����: " << key8 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext8[i]=(char)(((((int)fullstring[i] + 32) + ((int)key8[i%9] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext8[i];
    }
    cout << endl;

    string key9 = "����������";
    char cyphertext9[fullstring.length()];
    cout << endl << "����: " << key9 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext9[i]=(char)(((((int)fullstring[i] + 32) + ((int)key9[i%10] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext9[i];
    }
    cout << endl;

    string key10 = "�����������";
    char cyphertext10[fullstring.length()];
    cout << endl << "����: " << key10 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext10[i]=(char)(((((int)fullstring[i] + 32) + ((int)key10[i%11] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext10[i];
    }
    cout << endl;

    string key11 = "������������";
    char cyphertext11[fullstring.length()];
    cout << endl << "����: " << key11 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext11[i]=(char)(((((int)fullstring[i] + 32) + ((int)key11[i%12] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext11[i];
    }
    cout << endl;

    string key12 = "�������������";
    char cyphertext12[fullstring.length()];
    cout << endl << "����: " << key12 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext12[i]=(char)(((((int)fullstring[i] + 32) + ((int)key12[i%13] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext12[i];
    }
    cout << endl;

    string key13 = "��������������";
    char cyphertext13[fullstring.length()];
    cout << endl << "����: " << key13 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext13[i]=(char)(((((int)fullstring[i] + 32) + ((int)key13[i%14] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext13[i];
    }
    cout << endl;

    string key14 = "���������������";
    char cyphertext14[fullstring.length()];
    cout << endl << "����: " << key14 << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        cyphertext14[i]=(char)(((((int)fullstring[i] + 32) + ((int)key14[i%15] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << cyphertext14[i];
    }
    cout << endl;

    //������� ������ ������������
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

    cout << endl << "������ ����������������� ��� ��������� ������: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �1: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �2: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �3: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �4: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �5: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �6: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �7: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �8: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �9: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �10: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �11: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �12: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �13: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

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

    cout << endl << "������ ����������������� ��� ����������� �14: " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;

    return 0;
}
