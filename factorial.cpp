#include<iostream>
using namespace std;
int main() {
	int i;
	int mul;
	int num;
	num = 0;
	mul = 1;
	i = 1;
	cout << "Escriba el número al que desea sacar factorial: " << endl;
	cin >> num;
	while ((i<=num)) {
		mul = mul*i;
		i = i+1;
	}
	cout << "El factorial de " << num << " es: " << mul << endl;
	return 0;
}
