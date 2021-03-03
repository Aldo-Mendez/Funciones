#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int MAX(int a, int b);


int main(){
	int N1,N2,N3;
	
	cout << "\n Introduce el valor 1: " << endl;
		cin >> N1;
		
	cout << "\n Introduce el valor 2: " << endl;
		cin >> N2;
		
	cout << "\n Introduce el valor 3: " << endl;
		cin >> N3;
		
	int max = MAX(MAX(N1,N2),N3);
	
	cout << "\n El valor mayor es: " << max <<endl;
		
	return 0;
}

int MAX(int a, int b){
	int c;
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
