#include "employee.h"

Employee::Employee(const string& fname, const string& lname)
:Human(fname,lname)
{

}

void Employee::drink() const
{
    cout<<"At drink we discuss serious stuffs becasue we are lectures"<<endl;
}
