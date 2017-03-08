/*
iNOC产品部--完全数计算
*/
#include<iostream>  
using namespace std;

int mainCompleteNumber() {
	int n;
	cin >> n;

	int count = 0;
	for (int num = 6; num <= n; num++)
	{
		int fSum = 1;   // 1 is one of factors  
		for (int f = 2; f < (num / 2) + 1; f++) {
			if (num % f == 0)
			{
				fSum += f;
			}
		}
		if (fSum == num)
		{
			count++;
		}
	}

	cout << count << endl;

	system("pause");
	return 0;
}