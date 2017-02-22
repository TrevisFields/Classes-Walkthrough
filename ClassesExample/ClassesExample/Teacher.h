  //Top of header files include #pragma once 
#pragma once
#include <string>

class Teacher //Redefiniton of 'Teacher'
{
private:
  std::string _name;
public:
  Teacher();
  Teacher(std::string name);
  ~Teacher();
  
  std::string GetName();
};
