//AUTOR: ANDREY POLUEKTOV VMK-22
#include <iostream>
#include <cassert>
#include <vector>
#include "calcNum.h"

using namespace std;

int main()
{
    int n, 		// ������� ��६����� ��� ����� ���ᨢ�
		x, 		// ��६����� ��� �롮� ᯮᮡ� ����� ����⮢
	absSum = 0; // ������� ��६����� ��� ࠡ��� � �㬬�� � ���㫥�
    vector<int> num(n); // �������� �����

    // ��६���� ��� ���஢��
    int test[] = { 1, 5, 4, 3, 2 };
    int test2[] = { 1, 5, 4 };
    int test3[] = { 1, 5, 4, 3, 2, 6, 2 };

    // �஢�ઠ
    assert(calculateAbsSum(vector<int>(test, test + 5)) == 15);
    assert(calculateAbsSum(vector<int>(test2, test2 + 3)) == 10);
    assert(calculateAbsSum(vector<int>(test3, test3 + 7)) == 23);

    cout << "�᫨ �� ��� ����� ���祭�� �� 䠩�� - ������ 1" << endl << "�᫨ �� ��� ���-�� �ᥫ � ��������� �� ��砩�묨 ���祭�ﬨ - ������ 0" << endl;
    cin >> x;
    switch (x) // �롮� ����� ���� � ���� ����⮬ 
    {
    case 0: // ��� ����� ���-�� �ᥫ ������ � �������� �� ࠭����묨 ���祭�ﬨ
    {
        cout << "������ ������⢮ �ᥫ: " << endl;
    	cin >> n;	
    	num.resize(n);	// �������� �������� ࠧ��� ���⥩���. ������ ���⥩��� ����� 㢥��稢����� ��� 㬥�������.
        for (int i = 0; i < n; i++)
        {
           	num[i] = rand(); // ������� �� 1 �� INT_MAX
            cout << "a" << i + 1 << " " << num[i] << endl; // �뢮��� �᫮
        }
		
        absSum = calculateAbsSum(num);

        cout << "" << endl;
        cout << "�㬬� ��� ����⮢ ���ᨢ� ��� ���㫥�: " << absSum << endl;
        cout << "" << endl;
        saveResultsToFile(num, absSum); // ���࠭塞 १����� � 䠩� 
        break;
     }
    case 1: //��� ����� �ᥫ �� 䠩��
    {
        const char* filename = "numbers.txt";
        vector<int> arr;

        if (numFromFile(filename, arr))
        {
            // �뢮��� ᮤ�ন��� ����� �� 䠩��
            cout << "����ন��� ����� �� 䠩��:" << endl;
            for (int i = 0; i < arr.size(); i++)
            {
                cout << "a" << i + 1 << " " << arr[i] << endl;
            }

            absSum = calculateAbsSum(arr);

            cout << "" << endl;
            cout << "�㬬� ��� ����⮢ ����� ��� ���㫥�: " << absSum << endl;
            cout << "" << endl;
            saveResultsToFile(num, absSum);
        }
        else
        {
            cout << "�ந��諠 �訡�� �� �⥭�� 䠩��." << endl;
        }
        break;
    }


    default:
        cout << "���ࠢ���� �롮�" << endl;
    }

    return 0;
}
