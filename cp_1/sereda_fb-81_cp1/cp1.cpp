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
    ifstream in2("C:\\Users\\User\\Desktop\\����� 5 �������\\������������\\��\\fb-labs-2020\\cp_1\\sereda_fb-81_cp1\\text.txt");
    while (getline(in2, line))
    {
        fullstring = fullstring + line;
    }
    in2.close();


    //����������� ����� ������� ����� ����������
    for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]=='.' || fullstring[i]==',' || fullstring[i]=='?' || fullstring[i]=='!' || fullstring[i]=='-' || fullstring[i]=='"' || fullstring[i]==':')
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
    cout << "�����" << endl;
    cout << fullstring << endl;


    //���� ������� �����
    int letters_with_space [33];
    for (int i = 0; i <= 32; i++)
    {
        letters_with_space[i] = 0;
    }
    for (int i = 0; i<= 31; i++)
    {
        for (int j = 0; j <= fullstring.length(); j++)
        {
            if ((int)fullstring[j]==(int)'�'+i)
            {
                letters_with_space[i]=letters_with_space[i]+1;
            }
        }
    }
    //�������� ������� ������
    for (int j = 0; j <= fullstring.length(); j++)
        {
            if ((int)fullstring[j]==32)
            {
                letters_with_space[32]=letters_with_space[32]+1;
            }
        }
    cout << endl;
    cout << "����������� ���� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        cout << (char)(-32+i) << " " << letters_with_space[i] << endl;
    }
    cout << endl << "Total symbols " << fullstring.length() << endl;


    //������ ������� �� �������
    double chastota_bukv_probel[33];
    for (int i = 0; i <= 32; i++)
    {
        chastota_bukv_probel[i] = (double)letters_with_space[i]/(double)fullstring.length();
    }
    cout << endl;
    cout << "������� ���� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        cout << (char)(-32+i) << " " << chastota_bukv_probel[i] << endl;
    }
    cout << endl;


    //������ ��� ��������
    //��� ��� ����� ��� � ���������, �� �� ������ ������� � ������� letters_with_space �� �� �������, � �� ������ ����������� ���� �������� ����������� ��������
    double chastota_bukv[32];
    for (int i = 0; i <= 31; i++)
    {
        chastota_bukv[i] = (double)letters_with_space[i]/(double)(fullstring.length()-letters_with_space[32]);
    }
    cout << endl;
    cout << "������� ���� ��� ��������" << endl;
    for (int i = 0; i <= 31; i++)
    {
        cout << (char)(-32+i) << " " << chastota_bukv[i] << endl;
    }
    cout << endl;


    //������ ������� ��� �� �������, �� � �������������� ����
    //��� ������� �� ��� � �������� ��� ����� �������� � � ���������� �������, ������� ����� ��� ���� �����������
    /*cout << "������� ���� � �������� �������������" << endl;
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

    cout << "������� ���� ��� �������� �������������" << endl;
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


    //������� ��������
    //������� ���������� ����������, �� ��������� �� ���� (int)mas[i] = ... && (int)mas[i+1] = ... ���� �� �� ��������� +1 � ������ �������� 33*33
    //��� �������� ���������� ������ 3��� ���� (������ ��� ������ �����, ������ ��� ������, � ������ ��� ������� �� ������)
    //���� ��� �������� �����, �� � �����, ����� �� ������� �������� � �������, ����� ��������� �����

    return 0;
}
