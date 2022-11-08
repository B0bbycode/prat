#include <iostream>

using namespace std;

int main (void){
	
	char name[41];
	
	cout<<"What is your name sir \t?";
	cin>>name;
	
	cout<<"Hello "<<name;cout<<"!!! \t";
	cout<<"Welcome to Lincon Fastfood restuarant \n";
	cout<<"\n \n *************Our Food Menu****************\n\n";
	cout<<"For Chicken burger($12) press 6 \n";
	cout<<"for Salad with nugget($8) press 7 \n";
	cout<<"for Donut with strawberry($20) gem press 8 \n";
	cout<<"for Fried Rice($35) press 9 \n";
	
	int a=6;
	int	b=7;
	int	c=8;
	int	d=9;
	
	int input,total;
	
	
	cout<<"what would you like to order ?? \t";
	cin>>input;
	
	if (input == a){
		cout<<"how many chicken burger would you like to order ??\t";
			cin>>total;

			cout<<"\n The total amout for \t"<<total<<"chicken burger is \t$";
			cout<<total*12;
	}
	
	if (input == b){
		cout<<"how many salad with nugget would you like to order ??\t";
			cin>>total;
			
			cout<<"\n The total amout for \t"<<total<<"salad with nugget is \t$";
			cout<<total*8;
	}
	
	if (input == c){
		cout<<"how many Donut with strawberry would you like to order ??\t";
			cin>>total;
			
			cout<<"\n The total amout for \t"<<total<<"donut with strawberry is \t$";
			cout<<total*20;
	}
	
	if (input == d){
		cout<<"how many plate of fried rice would you like to order ??\t";
			cin>>total;
			
			cout<<"\n The total amout for \t"<<total<<"plate of fried rice is \t";
			cout<<total*35;
	}
	
	else if (input != a && input != b && input != c && input != d){
		cout<<"your order is invalid, please check !!!";
	}
	
	
	cout<<endl<<"thank you!!!";	
	
	return 0;
}
