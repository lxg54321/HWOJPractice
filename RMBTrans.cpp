#include<iostream>
#include<string>
using namespace std;

// ÉÐÎ´Í¨¹ý£¬wrong answer

#define CY 100000000
#define CW 10000

string M1[10] = { "Áã", "Ò¼", "·¡", "Èþ", "ËÁ", "Îé" , "Â½" , "Æâ" , "°Æ" , "¾Á" };
string M10 = "Ê°";
string M100 = "°Û";
string Mk = "Çª";
string Mw = "Íò";
string My = "ÒÚ";

void printShortNum(int a) {
	bool has1000 = false;
	bool has100 = false;
	bool has10 = false;
	if (a >= 1000)
	{
		int n = a / 1000;
		cout << M1[n] << Mk;
		a = a % 1000;
		has1000 = true;
	}

	if (a >= 100)
	{
		int n = a / 100;
		cout << M1[n] << M100;
		a = a % 100;
		has100 = true;
	}
	else if (a != 0)
	{
		if (has1000)
		{
			cout << M1[0];
		}
	}

	if (a >= 10)
	{
		int n = a / 10;
		if (n == 1 && !has1000 && !has100 && false)
		{
			cout << M10;
		}
		else
		{
			cout << M1[n] << M10;
		}
		a = a % 10;
		has10 = true;
	}
	else if (a != 0)
	{
		if (has100)
		{
			cout << M1[0];
		}
	}

	if (a != 0)
	{
		cout << M1[a];
	}
}

int mainRMBTrans() {
	int m;

	cin >> m;

	if (m == 0)
	{
		cout << M1[0];
	}

	if (m >= CY)
	{
		printShortNum(m / CY);
		cout << My;
		m = m % CY;
		if (m > 0 && m < (CY / 10))
		{
			cout << M1[0];
		}
	}

	if (m >= CW)
	{
		printShortNum(m / CW);
		cout << Mw;
		m = m % CW;
		if (m > 0 && m < (CW / 10))
		{
			cout << M1[0];
		}
	}
	printShortNum(m);
	cout << "Ôª" << endl;

	system("pause");
	return 0;
}