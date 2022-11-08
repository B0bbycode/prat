#include <iostream>

using namespace std;

int main(void){
	
	int day;
	
	cout<<"Input a day of the week(1-7) \t";
	cin>>day;
	
	if (day == 0 || day > 7){
		cout<<"invalid";
	}
	
	if (day == 1){
		cout<<"Monday";
	}
	
	if (day == 2){
		cout<<"Tuesday";
	}
	
	if (day == 3){
		cout<<"Wednesday";
	}
	
	if (day == 4){
		cout<<"Thursday";
	}
	
	if (day == 5){
		cout<<"Friday";
	}	
	
	if (day == 6){
		cout<<"Saturday";
	}
	
	if (day == 7){
		cout<<"Sunday";
	}

	
	return 0;
}
