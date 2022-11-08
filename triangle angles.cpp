#include <iostream>

using namespace std;

int main(void){
	
	int x,y,z;
	
	cout<<"Input your first angle \t";
	cin>>x;
	
	cout<<"input your second angle \t";
	cin>>y;
	
	cout<<"input your third angle \t";
	cin>>z;
	
	if (x+y+z > 0 && x+y+z <= 180){
		cout<<"The sum of your angles is \t";
		cout<<x+y+z;cout<<"\t";
	}
	
	if (x == 0 || y == 0 || z == 0){
		cout<<" Your cannot have a 0 angle in a triangle ";
	}
	
	else if (x+y+z > 180 || x+y+z < 0){
		cout<<"This is not a triangle, as the addition of your angles is \a";cout<<x+y+z;
	}
	 
	cout<<endl<<"Thank you";
	return 0;
}
