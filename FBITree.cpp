/* ID 2202
FBIÊ÷
*/
#include<iostream>
#include<string>

#define SIZE 5000

using namespace std;

void trav(int* tree, int index, int height) {
	int bottom = (1 << height) - 1;
	if (index < bottom)
	{
		trav(tree, 2 * index + 1, height);
		trav(tree, 2 * index + 2, height);
	}
	if (tree[index] == 0)
	{
		cout << "B";
	}
	else if (tree[index] == 1)
	{
		cout << "I";
	}
	else {
		cout << "F";
	}
}

int mainFBITree()
{
	int n;
	cin >> n;
	char comma;
	cin >> comma;
	string s;
	cin >> s;
	const char* cs = s.c_str();
	int length = s.length();

	int tree[SIZE] = {};	// 0: B, 1: I, 2: F
	int begin = (1 << n) - 1;
	for (int i = begin; i <= begin * 2; i++)
	{
		if (cs[i - begin] == '0')
		{
			tree[i] = 0;
		}
		else
		{
			tree[i] = 1;
		}
	}

	int move = n;
	while (move--) {
		int begin = (1 << move) - 1;
		for (int i = begin; i <= begin * 2; i++)
		{
			if (tree[2 * i + 1] == 0 && tree[2 * i + 2] == 0)
			{
				tree[i] = 0;
			}
			else if (tree[2 * i + 1] == 1 && tree[2 * i + 2] == 1)
			{
				tree[i] = 1;
			}
			else
			{
				tree[i] = 2;
			}
		}
	}

	trav(tree, 0, n);
	cout << endl;

	system("pause");

	return 0;
}