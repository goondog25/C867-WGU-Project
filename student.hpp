//
//  student.hpp
//  Student_System
//
//  Created by Gino Curtis on 2/10/24.
//

#ifndef student_hpp
#define student_hpp

#include <iostream>
#include <string>
#include <vector>
#include "degree.hpp"

using namespace std;

// Class to create student objects
class Student {

// Private Data members for student data
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourses[3];
    DegreeProgram degree;
    
public:
    
    // Constructor and Destructor
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree);
    ~Student();
    
    // Accessors and Mutators
    
    // Student ID getter/setter
    string GetStudentID();
    void SetStudentID(string newID);
    // First name getter/setter
    string GetFirstName();
    void SetFirstName(string newName);
    // Last name getter/setter
    string GetLastName();
    void SetLastName(string newName);
    // Student email getter/setter
    string GetEmail();
    void SetEmail(string newEmail);
    // Student age getter/setter
    int GetAge();
    void SetAge(int newAge);
    // Student days to complete 3 courses vector getter/setter
    int GetDaysToCompleteCourse1();
    void SetDaysToCompleteCourse1(int newDays);
    int GetDaysToCompleteCourse2();
    void SetDaysToCompleteCourse2(int newDays);
    int GetDaysToCompleteCourse3();
    void SetDaysToCompleteCourse3(int newDays);
    // Student degree program getter/setter
    DegreeProgram GetDegree();
    void SetDegree(DegreeProgram newDegree);
    
    // Print student info function
    void Print();
    
};


#endif /* student_hpp */


