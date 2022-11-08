#include <iostream>

using namespace std;

int main(void){
	
	cout<<"**** food menu****\n";
	cout<<"1-> PASTA ($6) \n";
	cout<<"2-> HUMBURGER ($7) \n";
	cout<<"3-> PÝZZA ($10) \n";
	cout<<"->***** To order use (1-3)***  \n";
	
	int a=1;
	int b=2;
	int c=3;
	int num;
	 int total;
	
	
	
	cout<<"what would you like to order \t";
	cin>>total;
	
	if (total == a){
		cout<<"how many pasta would you like to order \t"<<num;
		cout<<"The total amout is \t"<<6*num;
	}
	
		if (total == b){
		cout<<"how many pasta would you like to order \t"<<num;
		cout<<"The total amout is \t"<<7*num;
	}
	
		if (total == c){
		cout<<"how many pasta would you like to order \t"<<num;
		cout<<"The total amout is \t"<<10*num;
	}
	
		else
			cout<<"you have a wrong input";
			
			cout<<endl<<"Thank you";
	return 0;
}
