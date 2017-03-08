/*
查找输入整数二进制中1的个数
*/
#include<iostream>  
using namespace std;

int mainCountOne() {
	unsigned int n;
	cin >> n;
	int count = 0;

	while (n > 0)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}

	cout << count << endl;

	system("pause");
	return 0;
}