#pragma one
#include <string>

class Student
{
private:
  std::string _name;

public:
  Student();
  Student(std::string _name);
  ~Student();
  
  std::string GetName();
};
