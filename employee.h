#pragma once
#include "human.h"

class Employee : public Human
{   
    public:
    Employee(const string&, const string&);
    void drink() const override;
    
    

};
