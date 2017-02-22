#include "student.h"
#include <iostream>
#include "Teacher.h"
using namespace std;


int main()
{
  Student bob = Student("bob");
  cout << bob.GetName() << endl;
  

  
  Teacher trevis = Teacher("trevis");
  cout << trevis.GetName() << endl;
  
  getchar();
  return 0;
}
