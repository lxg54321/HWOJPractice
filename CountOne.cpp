/*
��������������������1�ĸ���
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