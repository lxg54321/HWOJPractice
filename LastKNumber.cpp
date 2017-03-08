/*
输入n个整数，输出其中最小的k个
*/
#include<iostream>  
using namespace std;

#define MAX 1000000  

int mainLastKNumber() {
	int n, k;
	cin >> n >> k;
	int* num = new int[n];
	bool* valid = new bool[n];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		valid[i] = true;
	}

	for (int i = 0; i < k; i++)
	{
		int min = MAX;
		int minIndex = -1;
		for (int j = 0; j < n; j++)
		{
			if (num[j] < min && valid[j])
			{
				min = num[j];
				minIndex = j;
			}
		}
		valid[minIndex] = false;
		cout << num[minIndex];
		if (i != k - 1)
		{
			cout << " ";
		}
		else
		{
			cout << endl;
		}
	}

	system("pause");
	return 0;
}