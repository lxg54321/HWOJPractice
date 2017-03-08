/*
ºÏ³ª¶Ó
*/
#include <iostream>  
#include <string>  
using namespace std;

int calcLength(int* h, int left, int right, int baseline, bool rise) {

	// cout << left << " " << right << " " << baseline << " " << rise << endl;  

	int max = 0;
	if (left > right)
	{
		return 0;
	}
	if (left == right)
	{
		if (rise)
		{
			return (h[left] > baseline) ? 1 : 0;
		}
		else {
			return (h[left] < baseline) ? 1 : 0;
		}
	}

	if ((rise && h[left] <= baseline) || (!rise && h[left] >= baseline))
	{
		return calcLength(h, left + 1, right, baseline, rise);
	}

	for (int i = left + 1; i <= right; ++i)
	{
		int max_i = calcLength(h, i, right, h[left], rise) + 1;
		if (max_i > max)
		{
			max = max_i;
		}
	}
	return max;
}

int mainChoir() {
	int n;
	cin >> n;
	int h[1000] = {};
	const int MIN = -1;
	int MAX = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> h[i];
		if (h[i] > MAX)
		{
			MAX = h[i];
		}
	}
	MAX++;

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		int max_i = calcLength(h, 0, i, MIN, true) + calcLength(h, i, n - 1, MAX, false) - 1;
		if (max_i > max)
		{
			max = max_i;
		}
	}
	cout << n - max << endl;

	return 0;
}