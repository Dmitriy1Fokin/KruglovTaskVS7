#include "stdafx.h"
#include "CustomFunctor.h"

using namespace std;

CustomFunctor::CustomFunctor()
{
	statdata.max = 0;
	statdata.min = 0;
	statdata.counter = 0;
	statdata.nufOfpositive = 0;
	statdata.numOfNegative = 0;
	statdata.sum = 0;
	statdata.sumOfOddElem = 0;
	statdata.sumOfEvenElem = 0;
}

CustomFunctor::~CustomFunctor()
{
}

void CustomFunctor::Show()
{
	cout << "Max: " << statdata.max << endl;
	cout << "Min: " << statdata.min << endl;
	cout << "Average: " << statdata.average << endl;
	cout << "Number of positive numbers: " << statdata.nufOfpositive << endl;
	cout << "Number of negative numbers: " << statdata.numOfNegative << endl;
	cout << "Number of odd elements: " << statdata.sumOfOddElem << endl;
	cout << "Number of even elements: " << statdata.sumOfEvenElem << endl;
	cout << "First elem == last elem: " << (statdata.firstElem == statdata.lastElem);
}


void CustomFunctor::operator()(int x)
{
	if (x > statdata.max)
		statdata.max = x;
	
	if (x < statdata.min)
		statdata.min = x;
	
	statdata.counter++;
	statdata.sum += x;
	statdata.average = statdata.sum / statdata.counter;

	if (x > 0)
		statdata.nufOfpositive++;
	
	if (x < 0)
		statdata.numOfNegative++;

	if (statdata.counter % 2 == 1)
		statdata.sumOfOddElem += x;

	if (statdata.counter % 2 == 0)
		statdata.sumOfEvenElem += x;

	if (statdata.counter == 1)
		statdata.firstElem = x;
	statdata.lastElem = x;


}
