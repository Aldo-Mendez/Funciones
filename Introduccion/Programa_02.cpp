#include<string.h>
#include<iostream>

using namespace std;
void comparacion(int a, int b);


int main(){
	int N1,N2;
	
	cout << "\n Introduce el valor 1: " << endl;
		cin >> N1;
		
	cout << "\n Introduce el valor 2: " << endl;
		cin >> N2;
		
	comparacion(N1, N2);
		
	return 0;
}

void comparacion(int a, int b){
	if(a>b){
		cout << "\n" << a <<" es mayor que " << b << endl;
	}
	else if(b>a){
		cout << "\n" << b <<" es mayor que " << a << endl;
	}
	else{
		cout << "\n ERROR!! DATOS IGUALES " << endl;
	}
}



