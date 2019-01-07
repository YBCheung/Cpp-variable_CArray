#include <iostream>
#include <cmath>
#include "fraction.h"
#include "CArray.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{

	fraction x(4,5);
	fraction y(2,4);
	x=x+y;
	x.Display();	

	CArray_any array(3);
	array[1]=y;
	array.add(x);
	array.Display();
	cout<<array[-1];
	return 0;
}
