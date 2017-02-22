#include <iostream>
#include "student.h"
#include "Teacher.h"
using namespace std;


int main()
{
  Student bob = Student("bob");
  cout << bob.GetName() << endl;
  
  getchar();
  return 0;
}
