//
//  roster.cpp
//  Student_System
//
//  Created by Gino Curtis on 2/12/24.
//

#include "roster.hpp"
#include "student.hpp"
#include "degree.hpp"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


// Constructor and Destructor definitions

Roster::Roster() {
    for (int i = 0; i < 5; ++i) {
        classRosterArray[i] = nullptr;
    }
}

Roster::~Roster() {
    for (int i = 0; i < 5; ++i) {
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
}


// Member function definitions
// Add student object ro array of pointers
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree) {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] == nullptr) {
            classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
            break;
        }
    }
}

// Remove student object by deallocating memory
void Roster::remove(string studentID) {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            if (classRosterArray[i]->GetStudentID() == studentID) {
                delete classRosterArray[i];
                classRosterArray[i] = nullptr;
                break;
            }
            else if (i == 4 && classRosterArray[i]->GetStudentID() != studentID) {
                cout << "Student not found with ID: " << studentID << endl;
            }
        }
    }
}

// Print all students in tabbed separated list
void Roster::printAll() {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->Print();
        }
    }
}

// Print students average days of 3 courses
void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            if (classRosterArray[i]->GetStudentID() == studentID) {
                int first = classRosterArray[i]->GetDaysToCompleteCourse1();
                int second = classRosterArray[i]->GetDaysToCompleteCourse2();
                int third = classRosterArray[i]->GetDaysToCompleteCourse3();
                double average = (first + second + third) / 3.0;
                cout << fixed << setprecision(2);
                cout << "Average number of days for " << studentID << ": " << average << endl;
            }
        }
    }
}

// Print invalid emails
void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            string email = classRosterArray[i]->GetEmail();
            if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
                cout << "Invalid email: " <<  email << endl;
            }
            
        }
    }
}

// Print students by degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            if (classRosterArray[i]->GetDegree() == degreeProgram) {
                classRosterArray[i]->Print();
            }
        }
    }
}
