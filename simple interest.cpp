#include <iostream>

using namespace std;

int main (void)
{
	
	int principal,rate,time;
	double interest;
	
	cout<<"Ýnput the actual amout per year \t ";
	cin>>principal;
	
	cout<<"Ýnput the interest rate per year \t ";
	cin>>rate;
	
	cout<<"Ýnput the number of time per year \t ";
	cin>>time;
	
	interest = (principal*rate*time)/100.0;
	cout<<"your interest per year is \t "<<interest;
	
	
	return 0;
}

