// SetTemplate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Set.h"

using namespace std;

int main()
{
	Set<int> newSet;
	newSet.insert(1);
	cout << newSet;
	getchar();
    return 0;
}

