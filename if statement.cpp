#include <iostream>

using namespace std;

int main (void){
	
	int num1,num2,great;
	
	
	cout<<"input your first integer number \t";
	cin>>num1;
	
	cout<<"input your second integer number \t";
	cin>>num2;
	
	if (num1 > num2){
		cout<<"your answer is \t"<<num1;
	}
	
	if (num2 > num1){
		cout<<"your answer is \t"<<num2;
	}
	
	else if (num2 == num1 ){
		cout<<"Your value is an equal quantifier ";
	}
	
	return 0;
}
