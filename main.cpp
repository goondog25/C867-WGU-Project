//
//  main.cpp
//  Student_System
//
//  Created by a student in 2024.
//

#include <iostream>
#include <sstream>
#include <string>
#include "roster.hpp"
#include "student.hpp"
#include "degree.hpp"

using namespace std;

int main() {
    
    // Student Data Table, with my information filled for A5
    const string studentData[] =
    {   "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,New,Student,student123@wgu.edu,26,14,28,42,SOFTWARE"
    };
    
    
    // Variable holders for data parsing
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    string tempVal;
    int age;
    int daysInCourse1;
    int daysInCourse2;
    int daysInCourse3;
    DegreeProgram degree;
    
    
    // Begin with PA instructions
    cout << "Course Title: Scripting and Programming - Applications - C867" << endl;
    cout << "Programming language: C++" << endl;
    cout << "Student ID: 012345678" << endl;
    cout << "Student Name\n" << endl;
    
    
    // Create roster class
    Roster classRoster;
    
    
    // Data parsing
    for (int i = 0; i < 5; ++i) {
        stringstream ss(studentData[i]);
        getline(ss, studentID, ',');
        getline(ss, firstName, ',');
        getline(ss, lastName, ',');
        getline(ss, emailAddress, ',');
        getline(ss, tempVal, ',');
        age = stoi(tempVal);
        getline(ss, tempVal, ',');
        daysInCourse1 = stoi(tempVal);
        getline(ss, tempVal, ',');
        daysInCourse2 = stoi(tempVal);
        getline(ss, tempVal, ',');
        daysInCourse3 = stoi(tempVal);
        getline(ss, tempVal, ',');
        degree = StringToDegreeType(tempVal);
        // Add students to roster
        classRoster.add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
    }
    
    
    // PA instructions for testing program functionality
    cout << "\n// Printing all students in class roster...\n";
    classRoster.printAll();
    cout << "\n// Printing all invalid emails...\n";
    classRoster.printInvalidEmails();
    cout << "\n// Printing student's average number of days for 3 courses..\n";
    for (int i = 0; i < 5; ++i) {
        string currentID = classRoster.classRosterArray[i]->GetStudentID();
        classRoster.printAverageDaysInCourse(currentID);
    }
    cout << "\n// Printing students by software degree program...\n";
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    cout << "\n// Printing all students after removing student A3...\n";
    classRoster.printAll();
    cout << "\n// Attempting to remove student A3 again should display error message...\n";
    classRoster.remove("A3");
    cout << endl;
    
    
    return 0;
    
}
