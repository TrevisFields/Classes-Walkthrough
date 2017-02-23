#include <iostream>
#include "student.h"
#include "Teacher.h"
#include "Course.h"
using namespace std;

int main()
{
  Teacher trevis = Teacher("trevis");
  Course cis17 = Course("CIS17A","Programming C++: Objects",trevis);
  Student kid = Student("kid");
  Student girl = Student("girl");
  
  cis17.EnrollStudent(kid, 0);
  cis17.EnrollStudent(girl, 1);
  
  cout << cis17.GetClassInfo() << endl;
  
  getchar();
  return 0;
}
