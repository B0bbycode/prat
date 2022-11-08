#include <iostream>

using namespace std;

int main(void){
	
	cout<<"****************************************** \n";
	cout<<"*******Find my grade for a course******* \n";
	cout<<"****************************************** \n";
	cout<<"\n";
	cout<<"\n";
	
	int grade;
	char name[41];
	
	cout<<"what is your name? \t";
	cin>>name;
	cout<<"\n";
	
	cout<<"Hello \t"<<name;
	cout<<"!!! \n Enter your score for the desired course \t";
	cin>>grade;
	cout<<"\n";
	
	if ( grade < 50){
		cout<<"you failed this course";
	}
	
	else if (grade == 50 || grade <= 60 ){
		cout<<"your grade is D";
	}
	
	else if (grade == 61 || grade <= 70 ){
		cout<<"your grade is C";
	}
	
	else if (grade == 71 || grade <= 85 ){
		cout<<"your grade is B";
	}
	
	else if (grade == 86 || grade <= 100 ){
		cout<<"your grade is A";
	}
	
	
	cout<<endl<<"Thank you!!!";
		
	
	return 0;
}
