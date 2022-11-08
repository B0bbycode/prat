#include <iostream>

using namespace std;

int main (void){
	
	int num1,num2;
	
	
	cout<<"input your cost price \t";
	cin>>num1;
	
	cout<<"input your selling price \t";
	cin>>num2;
	
	if (num2 > num1){
		cout<<"you made a profit of \t"<<num2-num1;
	}
	
	
	else if (num1 >= num2){
		cout<<"you loss \t"<<num1-num2;
	}
	
	return 0;
}
