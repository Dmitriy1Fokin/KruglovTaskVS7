// KruglovTaskVS7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "CustomFunctor.h"

using namespace std;

void PrintVector(int i)
{
	cout << i << endl;
}

int CustomRand()
{
	int out = rand() % 1001 - 500;

	return out;
}

int main()
{
	srand(time(0));
	vector<int> mainVector(6);
	generate(mainVector.begin(), mainVector.end(), CustomRand);
	for_each(mainVector.begin(), mainVector.end(), PrintVector);
	cout << "\n\n";

	CustomFunctor cf;
	cf = for_each(mainVector.begin(), mainVector.end(), cf);
	cf.Show();

	_getch();
    return 0;
}




