// @ImKyleJK
// me@imkylejk.me
// 7/9/22

#include <iostream>
using namespace std;

int main()
{
	// ++num1 operates similarly as num1++ due to it being initiated after all other instructions.
	for (int num1 = 1; num1 <= 10; ++num1)    // It is not necessary to initiate num1 in the header.
		cout << num1 << endl;                 // It can be initiated before and used in the header.

	return 0;
}