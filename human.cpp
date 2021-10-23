
#include "human.h"


Human::Human(const string& fname, const string& lname)
:fname(fname), lname(lname)
{

}

void Human::drink() const
{
    cout<<"I love to drink"<<endl;
}

void Human::IntroduceYourself() const
{
    cout<<"Myself "<<this->fname<<" "<<this->lname<<endl;
}

string Human::getfname() const
{
    return fname;
}

string Human::getlname() const
{
    return lname;
}
Human::~Human()
{

}