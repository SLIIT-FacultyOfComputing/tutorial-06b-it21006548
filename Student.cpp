#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int StudentID,char name) {
  studentID = sID;
  strcpy(name,sname)
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID"<<studentID<<endl;
  cout << "Student name"<<name<<endl;
}
