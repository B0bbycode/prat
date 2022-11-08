#include <iostream>

using namespace std;

int main(void){
	
	int a,b;
	char name[10];
	
	cout<<"what is your name? \t";
	cin>>name;
	
	cout<<"how many breads do you want to purchase? \t";
	cin>>a;
	
	b = a * 50;
	
	cout<<"hello \t";cout<<name;
	cout<<"\n The total amount for \t";cout<<a;cout<<" \t breads is \t";cout<<b;
	
	return 0;
}
