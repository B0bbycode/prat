#include <iostream>

using namespace std;

int main(void){
	
	int x;
	int y;
	int z;
	
	cout<<"Enter first number \t";
	cin>>x;
	
	cout<<"Enter second number \t";
	cin>>y;
	
	cout<<"Enter third number \t";
	cin>>z;
	
	if (x>y && x>z){
		cout<<"the value is \t";
		cout<<x;
	}
		
	else if (y>z && y>x){
		cout<<"the value is \t";
		cout<<y;	
	}
	
	else if (z>x && z>y){
		cout<<"the value is \t";
		cout<<z;
	}
				
	return 0;
}
