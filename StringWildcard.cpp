#include <iostream>
#include <string>
using namespace std;

const char* pat;
const char* mat;
int pLen;
int mLen;

bool testMatch(int pi, int mi){

	// 当前pattern是最后一个字符
	if (pi == pLen-1)
	{
		if (pat[pi] == '*')
		{
			return true;
		}
		else if (mi == mLen-1){
			if (pat[pi] == '?')
			{
				return true;
			}
			else if (pat[pi] == mat[mi])
			{
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}

	// 当前字符相同，往下测试
	if (pat[pi] == mat[mi])
	{
		return testMatch(pi+1, mi+1);
	}

	// 当前为?，等同于当前字符相同
	if (pat[pi] == '?')
	{
		return testMatch(pi+1, mi+1);
	}

	// 当前为通配符
	if (pat[pi] == '*')
	{
		for (int i = mi; i < mLen; ++i)
		{
			if (testMatch(pi+1, i))
			{
				return true;
			}
		}
		return false;
	}

	return false;
}


int mainStringWildcard(){
	string ps, ms;
	cin >> ps >> ms;
	pat = ps.c_str();
	mat = ms.c_str();
	pLen = ps.length();
	mLen = ms.length();

	if(testMatch(0, 0)){
		cout << "true" << endl;
	} else{
		cout << "false" << endl;
	}

	return 0;
}