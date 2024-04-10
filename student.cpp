//
//  student.cpp
//  Student_System
//
//  Created by Gino Curtis on 2/10/24.
//

#include "student.hpp"
#include "degree.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// String to degree function
DegreeProgram StringToDegreeType(string degree) {
    
    if (degree == "SECURITY") {
            return SECURITY;
        } else if (degree == "NETWORK") {
            return NETWORK;
        } else if (degree == "SOFTWARE") {
            return SOFTWARE;
        } else {
            throw invalid_argument("Invalid degree program string: " + degree);
        }
}

// Degree to string function
string DegreeToString(DegreeProgram degree) {
    switch (degree) {
        case SECURITY:
            return "Security";
        case NETWORK:
            return "Network";
        case SOFTWARE:
            return "Software";
        default:
            return "Unknown";
    }
}

// Student constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    daysToCompleteCourses[0] = daysInCourse1;
    daysToCompleteCourses[1] = daysInCourse2;
    daysToCompleteCourses[2] = daysInCourse3;
    this->degree = degree;
}

// Destructor definition
Student::~Student() {}

// Fucntions for student ID getter/setter
string Student::GetStudentID() {return studentID;}
void Student::SetStudentID(string newStudentID) {studentID = newStudentID;}
// Functions for student first names
string Student::GetFirstName() {return firstName;}
void Student::SetFirstName(string newName) {firstName = newName;}
// Functions for student last names
string Student::GetLastName() {return lastName;}
void Student::SetLastName(string newName) {lastName = newName;}
// Functions for student emails
string Student::GetEmail() {return emailAddress;}
void Student::SetEmail(string newEmail) {emailAddress = newEmail;}
// Functions for student ages
int Student::GetAge() {return age;}
void Student::SetAge(int newAge) {age = newAge;}
// Functions for days to complete courses
int Student::GetDaysToCompleteCourse1() {return daysToCompleteCourses[0];}
void Student::SetDaysToCompleteCourse1(int newDays) {daysToCompleteCourses[0] = newDays;}
int Student::GetDaysToCompleteCourse2() {return daysToCompleteCourses[1];}
void Student::SetDaysToCompleteCourse2(int newDays) {daysToCompleteCourses[1] = newDays;}
int Student::GetDaysToCompleteCourse3() {return daysToCompleteCourses[2];}
void Student::SetDaysToCompleteCourse3(int newDays) {daysToCompleteCourses[2] = newDays;}
// Functions for degree program
DegreeProgram Student::GetDegree() {return degree;}
void Student::SetDegree(DegreeProgram newDegree) {degree = newDegree;}

// Function for printing student object info
void Student::Print() {
    cout << studentID << "\t";
    cout << "First Name: " << firstName << "\t";
    cout << "Last Name: " << setfill(' ') << setw(8) << left <<  lastName << "\t ";
    cout << "Age: " << age << "\t";
    cout << "daysInCourse: {" << daysToCompleteCourses[0] << ", " << daysToCompleteCourses[1] << ", " << daysToCompleteCourses[2] << "} ";
    cout << "Degree Program: " << DegreeToString(degree) << endl;
}






