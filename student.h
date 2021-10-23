#pragma once
#include "human.h"

class Student : public Human
{
    
    int sid;
    public:
    Student(const string&, const string&, int);
    void drink() const override;
    void IntroduceYourself() const override;
    int getsid() const;
    
    
};

