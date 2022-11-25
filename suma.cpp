#include <iostream>
using namespace std;

int main() {
  int N, suma, an, sig,  i;
sig = 1 ;
an = 0;

cout << "¿Cuantos número desea sumar?" << endl; 
cin >> N ;

if (N == 0) {
cout << "El resultado es: " << an << endl;  
    return 0; 
} 
  
if (N == 1) {
cout << "El resultado es: " << an << endl;  
    return 0; 
}

if (N == 2) {
cout << "El resultado es: " << sig << endl;  
    return 0; 
  }
  
if (N >= 3){

 

  
   for (  i = 3;  i <=N; i++ )
    {
      suma = (an+sig)  ;   
      an = sig;
      sig = suma; 

 }
}
  cout << "El resultado es: " << suma << endl;
  return 0; 
}