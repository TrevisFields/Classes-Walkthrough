  #pragma once//Top of header files include #pragma once
#include <string>

class Teacher //Redefiniton of 'Teacher'
{
private:
  std::string _name;
public:
  Teacher(std::string name);
  ~Teacher();
  
  std::string GetName();
};
