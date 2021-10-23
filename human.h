#pragma once
#include <string>
#include <iostream>

using namespace std;

class Human
{
    string fname;
    string lname;
    public:
    Human(const string&, const string&);
    virtual void drink() const;
    virtual void IntroduceYourself() const;
    string getfname() const;
    string getlname() const;
    virtual ~Human();
};
