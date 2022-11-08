#include <iostream>

using namespace std;

int main (void)
{
	
	int radius,height,volume;
	
	cout<<"Ýnput your value for radius \t ";
	cin>>radius;
	
	cout<<"Ýnput the value for the height of cylinder \t ";
	cin>>height;
	
	
	volume = (radius*radius)*height*22/7;
	cout<<"The volume of your cylinder is \t "<<volume;
	
	
	return 0;
}
