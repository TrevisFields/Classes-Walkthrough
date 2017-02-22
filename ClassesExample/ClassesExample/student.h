#pragma once
#include <string>

class Student //Redefiniton of'Student'
{
private:
  std::string _name;

public:
  Student();
  Student(std::string _name);
  ~Student();
  
  std::string GetName();
};
