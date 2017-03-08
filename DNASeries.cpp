/*
DNA–Ú¡–
*/
#include<iostream>  
#include<string>  
using namespace std;

bool judge(const char* cs, int pos) {
	return cs[pos] == 'G' || cs[pos] == 'C';
}

int mainDNASeries() {
	string s;
	int w;
	cin >> s >> w;
	const char* cs = s.c_str();
	int len = s.length();
	int max = 0;
	int sum = 0;
	int maxIndex = 0;

	for (int i = 0; i < w && i < len; i++)
	{
		if (judge(cs, i))
		{
			sum++;
		}
	}
	max = sum;

	for (int i = 1; i + w <= len; i++)
	{
		if (judge(cs, i - 1) && sum > 0)
		{
			sum--;
		}
		if (judge(cs, i + w - 1))
		{
			sum++;
		}
		if (sum > max)
		{
			maxIndex = i;
			max = sum;
		}
	}

	for (int i = maxIndex; i < len && i < maxIndex + w; i++)
	{
		cout << cs[i];
	}
	cout << endl;

	system("pause");
	return 0;
}