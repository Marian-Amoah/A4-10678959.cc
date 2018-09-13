#include <iostream>
using namespace std;
int gcd(int a, int b){
	int num;
	while(b > 0){
		num = b;
		b = a % b;
		a = num;
	}
return a;
}
int main(){
	int x, y, z;
	int a[] = {x, y, z};
	int N = 3;
	int result = a[0];
	cout <<  " please enter any three digits " << endl;
	cin >> x >> y >> z;
	for (int i = 1; i < N; i++){
		result = gcd(result, a[i]);
	}
	cout << result << endl;
	return 0;
}

