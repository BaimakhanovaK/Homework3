#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int n = 0;
start:
	cout << "������� ����� �������: ";
	cin >> n;

	if (n == 1)
	{
		//1.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 
		//� ������� ���� ��� ���������� �����

		int a, b, c, count = 0;

		for (int i = 100; i <= 999; i++)
		{
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if ((a == b || a == c|| b==c))
			{
				cout << " " << i << " ";
				count++;
			}
		}
	cout << "\n���������� ���� � ����������� ������� = " << count << endl << endl;
	}
	else if (n == 2)
	{
		//2.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 
		//� ������� ��� ����� ������
		int a, b, c, count = 0;

		for (int i = 100; i <= 999; i++)
		{
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if (a !=b && a !=c && b != c)
			{
				cout << " " << i << " ";
				count++;
			}
		}
		cout <<"\n���������� ���� � ������� ������� = " << count << endl << endl;
	}
	else if (n == 3)
	{
		//3.	������������ ������ ����� ����� �����. 
		//���������� �� ����� ������ ����� ������� ��� ����� 
		//3 � 6 � ������� ������� �� �����.
		int k = 0, a=0;
		cout << "������� ����� ����� �����: ";
		cin >> k;

		while (k > 0)
		{
			if (k % 10 != 3 && k % 10 != 6)
			{
				a =a*10;
				a =a+k % 10;
			}
			k=k/10;
		}
		cout << "����� �����: ";

		while (a > 0)
		{
			cout << a % 10;
			a =a/10;
		}
		cout << endl << endl;
	}
}