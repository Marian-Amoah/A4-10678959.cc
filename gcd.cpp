#include <iostream>
using namespace std;
int gcd(int a, int b)
int main()
{
	int a, b;
	cout <<  " please enter any two numbers to find the gcd of the numbers " << endl;
	cin >> a >> b;
	cout << " the gcd of " << a << " and " << b << " is " << gcd(a , b);
	return 0;
}
int gcd(int a , int b)
{
	if ( b != 0)
		return gcd (b, a % b);
	else
		return a;
}

