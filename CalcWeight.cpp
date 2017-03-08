/*
 ³ÆíÀÂë
*/
#include<iostream>  
#include<string>  
using namespace std;

#define SIZE 1000  

int mainCalcWeight() {
	int n;
	cin >> n;
	int w[20];
	int nums[20];

	// input  
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	// generate sum bool array  
	int maxSum = 0;
	for (int i = 0; i < n; i++)
	{
		maxSum += w[i] * nums[i];
	}
	int sum[SIZE];
	for (int i = 1; i < maxSum; i++)
	{
		sum[i] = 0;
	}
	sum[0] = 2;
	sum[maxSum] = 2;

	// main loop  
	for (int i = 0; i < n; i++) {
		for (int s = 0; s < maxSum; s++)
		{
			if (sum[s] == 2)
			{
				for (int j = 1; j <= nums[i]; j++) {
					sum[s + w[i] * j] = 1;
				}
			}
		}
		for (int s = 0; s < maxSum; s++)
		{
			if (sum[s] == 1)
			{
				sum[s] = 2;
			}
		}
	}

	// get result  
	int result = 0;
	for (int i = 0; i <= maxSum; i++)
	{
		if (sum[i])
		{
			result++;
		}
	}
	cout << result << endl;

	return 0;
}