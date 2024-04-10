//
//  degree.hpp
//  Student_System
//
//  Created by Gino Curtis on 2/10/24.
//

#ifndef degree_h
#define degree_h

#include <string>

using namespace std;

// Enumeration type DegreeProgram
enum DegreeProgram {
    SECURITY,
    NETWORK,
    SOFTWARE
    
};

// Declare string / degreeProgam functions
DegreeProgram StringToDegreeType(string degree);
string DegreeToString(DegreeProgram degree);

#endif /* degree_h */
