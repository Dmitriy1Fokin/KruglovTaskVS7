#pragma once
#include "stdafx.h"

struct StatData
{
	int max;
	int min;
	int average;
	int nufOfpositive;
	int numOfNegative;
	int sumOfEvenElem;
	int sumOfOddElem;
	
	int sum;
	int counter;
	int firstElem;
	int lastElem;
};

class CustomFunctor
{
public:
	CustomFunctor();
	~CustomFunctor();
	void Show();
	void operator()(int x);

private:
	StatData statdata;
};

