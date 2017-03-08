/*
 НјЖ¬ХыАн
*/
#include <iostream>  
using namespace std;

#define MAX_LEN 1025  

int mainArrangePicture() {
	char a[MAX_LEN] = {};
	int len = 0;
	cin.getline(a, MAX_LEN);
	for (int i = 0; i < MAX_LEN; ++i)
	{
		if (a[i] == '\0')
		{
			len = i;
			break;
		}
	}
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				char t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < len; ++i)
	{
		cout << a[i];
	}
	cout << endl;

	return 0;
}