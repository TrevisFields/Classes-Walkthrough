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
  
  //FEBRUARY 27 2017 Addition
  /*****************************/
  for (int i = 0; i < 3; i++)
	 {
	 auto student = Student("Test");
	 }
  /***************************/
  cis17.EnrollStudent(kid, 0);
  cis17.EnrollStudent(girl, 1);
  
  //FEBRURARY 27 2017 Addition
  /****************************/
  auto info = cis17.GetClassInfo();
  cout << info;
  /**************************/
  
  getchar();
  return 0;
}


/*
 
 LECTURE 3: That's it (Project 1 DUE FRIDAY MARCH 3 @ MIDNIGHT
 - 4 Classes (of your own)
 - instantiaton
 - Constructors/ Destructors
 - Public & Private memebers
 Object Re-use
 UML
 
 */
