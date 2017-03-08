/*
输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数
*/
#include<iostream>  
#include<string>  
using namespace std;

int mainCharStatistic() {
	string input;
	getline(cin, input);
	const char* cinput = input.c_str();
	int eng = 0;
	int space = 0;
	int num = 0;
	int other = 0;

	for (int i = 0; i < input.length(); i++)
	{
		char c = cinput[i];
		if (c >= '0' && c <= '9')
		{
			num++;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			eng++;
		}
		else if (c == ' ') {
			space++;
		}
		else {
			other++;
		}
	}

	cout << eng << '\n' << space << '\n' << num << '\n' << other << '\n';

	//system("pause");  
	return 0;
}