#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int Factorial(int a);


int main(){
	int N1;
	
	cout << "\n Introduce tu valor: " << endl;
		cin >> N1;
		
	int fact = Factorial(N1);
	cout << "\n El "<< N1 << "! es: "<< fact << endl;
		
	return 0;
}

int Factorial(int a){
	int i;
	int resultado = 1;
	for( i = 1; i<=a ; i++ ){
		resultado *= i;
	}
return resultado;
}
