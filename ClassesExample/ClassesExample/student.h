
#include <string>

class Student
{
private:
  std::string _name;

public:
  Student(std::string _name);
  ~Student();
  
  std::string GetName();
};
