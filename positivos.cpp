#include<iostream>
using namespace std;
int main() {
	int can;
	int i;
	int may;
	int men;
	int suma1;
	int suma2;
	int t;
	may = 0;
	men = 0;
	i = 1;
	suma1 = 0;
	suma2 = 0;
	cout << "Ingrese la cantidad de números" << endl;
	cin >> can;
	while ((i<=can)) {
		cout << "Ingrese el número: " << i << endl;
		cin >> t;
		if ((i==1)) {
			may = t;
			men = t;
		} else {
			if ((t>may)) {
				may = t;
				suma1 = may+suma1;
			}
			if ((t<men)) {
				men = t;
				suma2 = men+suma2;
			}
		}
		i = i+1;
	}
	cout << "La suma de los números menores es: " << suma2 << endl;
	cout << "La suma de los números mayores es: " << suma1 << endl;
	return 0;
}