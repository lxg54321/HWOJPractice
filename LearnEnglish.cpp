/*
—ß”¢”Ô
*/
#include <iostream>  
#include <string>  
using namespace std;

string N1[20] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"
, "eleven", "twelve", "thirteen", "fourteen", "fifteen"
, "sixteen", "seventeen", "eighteen", "nineteen" };

string N10[10] = { "zero", "ten", "twenty", "thirty", "forty", "fifty"
, "sixty", "seventy", "eighty", "ninety" };

string AND = "and";
string N100 = "hundred";
string Nk = "thousand";
string Nm = "million";
string Nb = "billion";

int K = 1000;
int M = 1000000;
int B = 1000000000;

string getUnderK(int num) {
	string exp = "";
	if (num >= 100)
	{
		int h = num / 100;
		exp += N1[h] + " " + N100;
		num = num % 100;
		if (num == 0)
		{
			return exp;
		}
		exp += " " + AND + " ";
	}

	if (num < 20)
	{
		exp += N1[num];
		return exp;
	}

	int t = num / 10;
	exp += N10[t];

	num = num % 10;
	if (num == 0)
	{
		return exp;
	}
	exp += " " + N1[num];

	return exp;
}

int mainLearnEnglish() {
	long num;
	cin >> num;
	string exp = "";

	if (num >= B)
	{
		exp += getUnderK(num / B) + " " + Nb;
		num = num % B;
		if (num == 0)
		{
			cout << exp << endl;
			return 0;
		}
		exp += " ";
	}

	if (num >= M)
	{
		exp += getUnderK(num / M) + " " + Nm;
		num = num % M;
		if (num == 0)
		{
			cout << exp << endl;
			return 0;
		}
		exp += " ";
	}

	if (num >= K)
	{
		exp += getUnderK(num / K) + " " + Nk;
		num = num % K;
		if (num == 0)
		{
			cout << exp << endl;
			return 0;
		}
		exp += " ";
	}

	exp += getUnderK(num);

	cout << exp << endl;

	return 0;
}