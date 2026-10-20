#include <iostream>
using namespace std;
int main (){
int numeros_naturales[3]{1,2,3};
cout << "Los numeros naturales son: ";
for (int i=0;i<3;i++){
cout << numeros_naturales[i] << " ";
}
cout << endl;
return 0;
}