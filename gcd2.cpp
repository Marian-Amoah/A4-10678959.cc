#include <iostream>
using namespace std;

int gcd(int x, int y);

int main ()
{
	int x, y;
	cout << " please any to two numbers to find the gcd of the numbers " << endl;
	cin >> x >> y;
	cout << " The gcd of " << x << " and " << y << " is " << gcd(x , y);
	return 0;
}
int gcd(int x , int y)
{
	if (y != 0)
	return gcd (y , x % y);
	else 
	return x;
}
