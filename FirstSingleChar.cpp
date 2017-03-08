/*
找出字符串中第一个只出现一次的字符
*/
#include<iostream>  
#include<string>  
using namespace std;

int mainFirstSingleChar() {
	string s;
	cin >> s;
	const char* cs = s.c_str();
	int len = s.length();
	bool* bs = new bool[len];
	bool find = false;

	for (int i = 0; i < len; i++)
	{
		bs[i] = true;
	}

	for (int i = 0; i < len; i++)
	{
		if (!bs[i])
		{
			continue;
		}
		for (int j = i + 1; j < len; j++)
		{
			if (cs[j] == cs[i])
			{
				bs[i] = false;
				bs[j] = false;
			}
		}
		if (bs[i])
		{
			cout << cs[i] << endl;
			find = true;
			break;
		}
	}

	if (!find)
	{
		cout << '.' << endl;
	}

	system("pause");
	return 0;
}