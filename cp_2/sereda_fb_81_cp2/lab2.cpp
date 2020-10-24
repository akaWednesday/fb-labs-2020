#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;


void get_cyphertext(string key, string fullstring, char mas[])
{
    cout << endl << "����: " << key << endl;
    for (int i = 0; i <= fullstring.length(); i++)
    {
        mas[i]=(char)(((((int)fullstring[i] + 32) + ((int)key[i%key.length()] + 32))%32)-32);
    }
    for (int i = 0; i<=fullstring.length()-1; i++)
    {
        cout << mas[i];
    }
    cout << endl;
}

void index_sootvetstvia(string fullstring, char cyphertext[], int num)
{
    int minor_counter = 0;
    int major_counter = 0;

    for(int i = 0; i<32; i++)
    {
        minor_counter = 0;
        for (int j = 0; j<=fullstring.length(); j++)
        {
            if ((int)cyphertext[j]==(-32+i))
            {
                minor_counter = minor_counter + 1;
            }
        }
        major_counter = major_counter + (minor_counter*(minor_counter-1));
    }

    cout << endl << "������ ����������������� ��� ����������� �" << num << " = " << (double)major_counter/(((double)fullstring.length()-1.0)*((double)fullstring.length()-2.0)) << endl;
}


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

    //�������
    char cyphertext1[fullstring.length()];
    char cyphertext2[fullstring.length()];
    char cyphertext3[fullstring.length()];
    char cyphertext4[fullstring.length()];
    char cyphertext5[fullstring.length()];
    char cyphertext6[fullstring.length()];
    char cyphertext7[fullstring.length()];
    char cyphertext8[fullstring.length()];
    char cyphertext9[fullstring.length()];
    char cyphertext10[fullstring.length()];
    char cyphertext11[fullstring.length()];
    char cyphertext12[fullstring.length()];
    char cyphertext13[fullstring.length()];
    char cyphertext14[fullstring.length()];
    get_cyphertext("��", fullstring, cyphertext1);
    get_cyphertext("���", fullstring, cyphertext2);
    get_cyphertext("����", fullstring, cyphertext3);
    get_cyphertext("�����", fullstring, cyphertext4);
    get_cyphertext("������", fullstring, cyphertext5);
    get_cyphertext("�������", fullstring, cyphertext6);
    get_cyphertext("��������", fullstring, cyphertext7);
    get_cyphertext("���������", fullstring, cyphertext8);
    get_cyphertext("����������", fullstring, cyphertext9);
    get_cyphertext("�����������", fullstring, cyphertext10);
    get_cyphertext("������������", fullstring, cyphertext11);
    get_cyphertext("�������������", fullstring, cyphertext12);
    get_cyphertext("��������������", fullstring, cyphertext13);
    get_cyphertext("���������������", fullstring, cyphertext14);


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

    index_sootvetstvia(fullstring, cyphertext1, 1);
    index_sootvetstvia(fullstring, cyphertext2, 2);
    index_sootvetstvia(fullstring, cyphertext3, 3);
    index_sootvetstvia(fullstring, cyphertext4, 4);
    index_sootvetstvia(fullstring, cyphertext5, 5);
    index_sootvetstvia(fullstring, cyphertext6, 6);
    index_sootvetstvia(fullstring, cyphertext7, 7);
    index_sootvetstvia(fullstring, cyphertext8, 8);
    index_sootvetstvia(fullstring, cyphertext9, 9);
    index_sootvetstvia(fullstring, cyphertext10, 10);
    index_sootvetstvia(fullstring, cyphertext11, 11);
    index_sootvetstvia(fullstring, cyphertext12, 12);
    index_sootvetstvia(fullstring, cyphertext13, 13);
    index_sootvetstvia(fullstring, cyphertext14, 14);

    //�������� �������������� �����
    //��������� ����� � ��������� ��� � ���� ������
    string line2;
    string encryptedstring;
    ifstream in3("C:\\Users\\User\\Desktop\\����� 5 �������\\������������\\��\\fb-labs-2020\\cp_2\\sereda_fb_81_cp2\\encryptedtext.txt");
    while (getline(in3, line2))
    {
        encryptedstring = encryptedstring + line2;
    }
    in3.close();

    cout << endl << encryptedstring << endl;
    cout << encryptedstring.length() << endl;

    minor_counter = 0;
    major_counter = 0;
    double super_major_counter = 0;
    int letter_counter = 0;
    for (int r = 2; r <=30; r++)
    {
        super_major_counter = 0;
        cout << endl << "�������� ��� r = " << r << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < 32; j++)
            {
                minor_counter = 0;
                for (int l = i; l<=encryptedstring.length(); l=l+r)
                {
                    if ((int)encryptedstring[l]==(-32+j))
                    {
                        letter_counter = letter_counter + 1;
                        minor_counter = minor_counter + 1;
                    }
                }
                major_counter = major_counter + (minor_counter*(minor_counter-1));
            }
            cout << "     I(Y)" << i << " = " <<  (double)major_counter/((double)letter_counter *((double)letter_counter - 1.0)) << endl;
            super_major_counter = super_major_counter + (double)major_counter/((double)letter_counter *((double)letter_counter - 1.0));
            major_counter = 0;
            letter_counter = 0;
        }
        cout <<  "     ������� I(Y) = " << super_major_counter/r << endl;
    }


    // �������� ��������� ������ ��� r = 15
    cout << endl << "���� �� �����, ������ ����� = 15" << endl << endl;
    int letters_mas [32];

    int r  = 15;
    int max_letter = 0;
    int max_index = 0;
    for (int i = 0; i < r; i++)
    {
        for (int p = 0; p <= 32; p++)
        {
            letters_mas[p] = 0;
        }

        for (int j = 0; j < 32; j++)
        {
            for (int l = i; l<=encryptedstring.length(); l=l+r)
            {
                if ((int)encryptedstring[l]==(-32+j))
                {
                    letters_mas[j]= letters_mas[j] + 1;
                }
            }
        }
        cout << endl << "����������� ���� � Y" << i << endl;
        for (int k = 0; k <= 31; k++)
        {
            cout << "     " << (char)(-32 + k) << " " << letters_mas[k] << endl;
        }


        cout << "5 ����� ������ ����� � Y" << i << " � ��������������� �� ����� �����";
        for (int f = 0; f <= 4; f++)
        {
            max_letter = 0;
            max_index = 0;
            for (int h = 0; h <= 31; h++)
            {
                if (letters_mas[h]>max_letter)
                {
                    max_letter = letters_mas[h];
                    max_index = h;
                }
            }
            cout << endl << "     " << (char)(-32 + max_index) << " " << max_letter << "   " << (max_index - (int)'�')%32 << " " << (char)(-32 + ((max_index - (int)'�')%32));
            letters_mas[max_index] = 0;
        }
        cout << endl;
    }

    cout << endl << " ���� ������ ����� ����� �������� ���� <<���������������>>, ������� �� ������ ������� ������������� �����������, � ������ � ������ ��� ������ ����� ���������� ���� <<���������������>>" << endl;

    //������������ �����
    cout << endl;
    string mainkey = "���������������";
    char plaintext[encryptedstring.length()];
    for (int i = 0; i <= encryptedstring.length(); i++)
    {
        plaintext[i]=(char)(((((int)encryptedstring[i] + 32) - ((int)mainkey[i%15] + 32))%32)-32);
    }
    for (int i = 0; i<=encryptedstring.length()-1; i++)
    {
        cout << plaintext[i];
    }
    cout << endl;

    return 0;
}
