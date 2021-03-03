#include<string.h>
#include<iostream>

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
		
	int max1 = MAX(N1,N2);
	int max2 = MAX(max1,N3);
	
	cout << "\n El valor mayor es: " << max2 <<endl;
		
	return 0;
}

int MAX(int a, int b){
	int c;
		if(a>b){
		c = a;
		}
		else if(b>a){
		c = b;
		}

	return c;
}

