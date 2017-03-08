/*
查找组成一个偶数最接近的两个素数
*/
#include<iostream>  
#include<math.h>  
using namespace std;

bool isPrime(int n) {
	int max = sqrt(n);
	for (int i = 2; i <= max; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int mainNearestPrime() {
	int even;
	cin >> even;
	int maxDiff = even;
	int first = 0;

	for (int i = 2; i <= even / 2; i++)
	{
		if (isPrime(i) && isPrime(even - i)) {
			int diff = abs(2 * i - even);
			if (diff < maxDiff)
			{
				maxDiff = diff;
				first = i;
			}
		}
	}
	cout << first << endl << even - first << endl;

	system("pause");
	return 0;
}