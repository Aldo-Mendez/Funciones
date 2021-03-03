#include<string.h>
#include<iostream>

using namespace std;
void suma(int a, int b);


int main(){
	int N1,N2;
	
	cout << "\n Introduce el valor 1: " << endl;
		cin >> N1;
		
	cout << "\n Introduce el valor 2: " << endl;
		cin >> N2;
		
	suma(N1,N2);
	
	return 0;
}

void suma(int a, int b){
	int c = a + b;
	cout <<"\n La suma de " << a << " mas "<< b << " es igual a " << c << endl;
}

