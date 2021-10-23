#include "student.h"

Student::Student(const string& fname, const string& lname, int sid)
:Human(fname,lname), sid(sid)
{

}

void Student::drink() const
{
    cout<<"I am drinking happily because i am student"<<endl;
}

void Student::IntroduceYourself() const
{
    cout<<"Myself "<<this->getfname()<<" "<<this->getlname()<<" "
    <<this->sid<<endl;
}

int Student::getsid() const
{
    return sid;
}
