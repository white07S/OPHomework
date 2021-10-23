#include <iostream>
#include "student.h"
#include <vector>
#include "employee.h"



int main()
{
	vector<Human*> vect;
	unsigned int count;
	cout<<"Enter the number of people in the queue"<<endl;
	cin>>count;
	string fname, lname;
	for(unsigned int i=0; i<count;i++)
	{
		int j=2;
		cout<<"Choose 1 for student or 2 for an Employee"<<endl;
		cin>>j;
		switch(j)
		{
			case 1:
			{
				int sid;
				cout<<"Enter first name, last name and student id"<<endl;
				cin>>fname>>lname>>sid;
				Student* ptr1=new Student(fname,lname,sid);
				vect.push_back(ptr1);
				break;
			}
			
			case 2:
			{	
				cout<<"Enter first name and last name of employee"<<endl;
				cin>>fname>>lname;
				Employee* ptr2=new Employee(fname,lname);
				vect.push_back(ptr2);
				break;
			}
		}
		
	}
	
	for(unsigned int i=0; i<vect.size();i++)
	{
		vect[i]->IntroduceYourself();
		vect[i]->drink();

	}
	
	for(unsigned int i=0; i<vect.size();i++)
	{
		delete vect[i];
	}
	

}