/*
24µ„”Œœ∑À„∑®
*/
#include<iostream>  
#include<math.h>  
using namespace std;

#define TYPE 6  

const float EPSINON = 0.000001f;
const float GOAL = 24.0f;

bool reachGoal(float f) {
	return abs(f - GOAL) < EPSINON;
}

void getCalc(float a, float b, float c[TYPE]) {
	c[0] = a + b;
	c[1] = a - b;
	c[2] = a * b;
	c[3] = a / b;
	c[4] = b - a;
	c[5] = b / a;
}

bool calc2(float a, float b) {
	float temp[TYPE];
	getCalc(a, b, temp);
	for (int i = 0; i < TYPE; i++)
	{
		if (reachGoal(temp[i]))
		{
			return true;
		}
	}
	return false;
}

bool calc3(float a, float b, float c) {
	float temp[TYPE];
	getCalc(a, b, temp);
	for (int i = 0; i < TYPE; i++)
	{
		if (calc2(temp[i], c))
		{
			return true;
		}
	}
	getCalc(b, c, temp);
	for (int i = 0; i < TYPE; i++)
	{
		if (calc2(temp[i], a))
		{
			return true;
		}
	}
	getCalc(a, c, temp);
	for (int i = 0; i < TYPE; i++)
	{
		if (calc2(temp[i], b))
		{
			return true;
		}
	}
	return false;
}

bool calc4(float a, float b, float c, float d) {
	float temp[TYPE];
	getCalc(a, b, temp);
	for (int i = 0; i < TYPE; i++)
	{
		if (calc3(temp[i], c, d))
		{
			return true;
		}
	}
	getCalc(a, c, temp);
	for (int i = 0; i < TYPE; i++)
	{
		if (calc3(temp[i], b, d))
		{
			return true;
		}
	}
	getCalc(a, d, temp);
	for (int i = 0; i < TYPE; i++)
	{
		if (calc3(temp[i], b, c))
		{
			return true;
		}
	}
	return false;
}

int mainGame24() {
	float a, b, c, d;
	cin >> a >> b >> c >> d;

	if (calc4(a, b, c, d))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	system("pause");
	return 0;
}