#include<iostream>
using namespace std;

struct employee
{
	char name [30];
	int empid;
	float salary;

	void accept_record(){
		cout<< "Enter name"<<endl;
		cin>>name;
		cout<<"Enter ID :"<<endl;
		cin>>empid;
		cout<<"Enter salary :"<<endl;
		cin>>salary;
	}
	void print_record(){
		cout<<"Name of Employee is :"<<name<<endl;
		cout<<"\n ID is :"<<empid<<endl;
		cout<<"\n Salary :"<<salary;
	}
};
int main(void){
	struct employee emp;
	emp.accept_record();
	emp.print_record();
	return 0;
}
