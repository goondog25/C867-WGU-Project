//
//  roster.hpp
//  Student_System
//
//  Created by Gino Curtis on 2/12/24.
//

#ifndef roster_hpp
#define roster_hpp

#include "student.hpp"
#include "degree.hpp"
#include <string>

class Roster {
public:
    // Array of pointers to student objects
    Student* classRosterArray[5];

    // Constructor / Destructor
    Roster();
    ~Roster();
    
    // Declare member functions
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
};

#endif /* roster_hpp */
