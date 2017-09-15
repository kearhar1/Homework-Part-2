//Kole Earhart
//Recursion example

#include <iostream>

using namespace std;

int main()
{

    return 0;
}
//Simple factorial function that demonstrates recursion
int Fact(int number)
{
	if (number == 0)
		return 1;
	else
		return number * Fact(number - 1);


}

