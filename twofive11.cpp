#include <iostream>

using namespace std;

int main(void){
	
	int a,b,c;
	
	
	cout<<"input first angle \t";
	cin>>a;
	
	cout<<"input second angle \t";
	cin>>b;
	
	cout<<"input third angle \t";
	cin>>c;
	
	
	if ( a+b+c <= 180)
		cout<<"The sum of your triangle is \t"<<a+b+c;
			else 
				cout<<"this is not a triangle";
	

	return 0;
}
