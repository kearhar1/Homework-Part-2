//Test.cpp
//Kole Earhart
//Cosc 2030

#include "Collection.h"

using namespace std;

int main()
{
    Collection<int> testObj;

	testObj.print();

	for(int j = 0; j< 8; j++)

	{

		testObj.insert(j);

	}

	testObj.print();

	testObj.notContained(7);

	testObj.insert(10);

	testObj.notContained(7);

	testObj.remove(1);

	testObj.removeRandom();

	testObj.print();

	testObj.isEmpty();

	testObj.makeEmpty();

	testObj.isEmpty();

	testObj.insert(2);

	testObj.print();

	return 0;
}
