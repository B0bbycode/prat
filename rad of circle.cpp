#include <iostream>

using namespace std;

int main (void)
{
	
	int rad;
	double area;
	
	cout<<"Enter the radius of your circle \t";
	cin>>rad;
	
	area = (rad*rad)*22/7.0;
	cout<<"The area of your circle is \t"<<area;
	
	
	return 0;
}
