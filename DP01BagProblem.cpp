/* ID 2014
小强的暑假作业
01背包问题
*/
#include<iostream>  
#include<cstdlib>  

using namespace std;

int maxNum(int a, int b)
{
	return (a>b) ? a : b;
}

int maxVal(int **val, int *v, int *w, int bagnum, int weight)
{
	int i, j;
	for (i = 0; i <= bagnum; i++)
		val[i][0] = 0;
	for (i = 0; i <= weight; i++)
		val[0][i] = 0;

	for (i = 1; i <= bagnum; i++)
	{
		for (j = 1; j <= weight; j++)
		{
			if (j<w[i])
				val[i][j] = val[i - 1][j];
			else
				val[i][j] = maxNum(val[i - 1][j], val[i - 1][j - w[i]] + v[i]);
		}
	}

	return val[bagnum][weight];

}


int mainDP01BagProblem()
{
	int bagnum, weight;
	int i;
	cin >> bagnum;

	int *w = new int[bagnum + 1]();
	int *v = new int[bagnum + 1]();
	for (i = 1; i <= bagnum; i++) {
		cin >> w[i];
		cin >> v[i];
	}

	cin >> weight;

	int **val = new int *[bagnum + 1];                 //这样定义二维数组，是为了方便传入  
	val[0] = new int[(bagnum + 1)*(weight + 1)];
	for (i = 1; i <= bagnum; i++) {
		val[i] = val[i - 1] + weight + 1;
	}

	cout << maxVal(val, v, w, bagnum, weight) << endl;

	system("pause");

	return 0;
}