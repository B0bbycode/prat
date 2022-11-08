#include <iostream>

using namespace std;

int main(void){
	
	int x;

	
	cout<<"Enter first number \t";
	cin>>x;
	
	
	if (x==0){
		cout<<"the value is ÝNVALD";
	}
	
	else if (x / 2 == 0 ){
		cout<<"the value is EVEN";
	}
		
	else if ( (x%2)==0 ){
		cout<<"the value is ODD\t";
	}

				
	return 0;
}
