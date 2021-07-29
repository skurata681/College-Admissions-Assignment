#ifndef college_admissions_h
#define college_admissions_h

#include <string>
using namespace std;


// Read function RME's here and implement in college_admissions.cpp


// NOTE for every cout statement
// The last line should end with an 'endl'
// There should be no blank lines printed at the beginning
// nor at the end


/**
* Requires: Five comma separated numeric values (of any length) representing prospective student data in
         the order: StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest.
* Modifies: Nothing.
* Effects: Returns the first value (studentID) as a string.
*/
string get_studentID(string data);


/**
* Requires: Five comma separated numeric values (of any length) representing prospective student data in
        the order: StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest.
* Modifies: Nothing.
* Effects: Returns the second value (GPA) converted to type double.
       Hint: use string-to-double function: stod().
*/
double get_gpa(string data);


/**
* Requires: Five comma separated numeric values (of any length) representing prospective student data in
         the order: StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest.
* Modifies: Nothing.
* Effects: Returns the third value (SAT) converted to type double.
       Hint: use string-to-double function: stod().
*/
double get_sat(string data);


/**
* Requires: Five comma separated numeric values (of any length) representing prospective student data in
         the order: StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest.
* Modifies: Nothing.
* Effects: Returns the fourth value (CurriculumStrength) converted to type double.
       Hint: use string-to-double function: stod().
*/
double get_curr_strength(string data);


/**
* Requires: Five comma separated numeric values (of any length) representing prospective student data in
         the order: StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest.
* Modifies: Nothing.
* Effects: Returns the fifth value (DemonstratedInterest) converted to type double.
       Hint: use string-to-double function: stod().
*/
double get_dem_interest(string data);


/**
* Requires: GPA (score between 0.0 and 5.0).
* Modifies: Nothing.
* Effects: Returns normalized GPA on scale 10 (i.e. multiply original GPA by 2).
*/
double normalize_gpa(double original_gpa);


/**
* Requires: SAT (score between 400 and 1600).
* Modifies: Nothing.
* Effects: Returns normalized SAT score on scale 10 (i.e. divide original SAT by 160).
*/
double normalize_sat(double original_sat);


/**
* Requires: All values on scale 10.
* Modifies: Nothing.
* Effects: Returns weighted average of GPA, SAT, curriculum strength, and demonstrated interest
       based on the following weights:
        40% GPA
        30% SAT
        20% Curriculum Strength
        10% Demonstrated Interest
        (i.e. (0.4 * GPA) + (0.3 * SAT) + ...)
*/
double calculate_score(double normalized_gpa, double normalized_sat,
                      double curriculum_strength, double demonstrated_interest);


/**
* Requires: Nothing.
* Modifies: Nothing.
* Effects: Returns true if score above 6. Otherwise, returns false.
*/
bool is_recommended(double calculated_score);


/**
* Requires: Nothing.
* Modifies: cout
* Effects: Prints "[StudentID] is recommended for admission." if recommendation_value is true.
       Prints "[StudentID] is NOT recommended for admission." if recommendation_value is false.
*/
void print_recommendation(string studentID, bool recommendation_value);


/**
* Requires: Five comma separated numeric values (of any length) representing prospective student data in
         the order: StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest.
* Modifies: cout
* Effects: Use each value to calculate a prospective student's recommendation score for admission.
       Based on this score, print whether the student is or is not recommended for admission.
*/
void college_admissions(string data);


/**
* Requires: All values on scale 10.
* Modifies: Nothing.
* Effects: Returns true if Demonstrated Interest is 0 OR if normalized GPA is more than 2 points
       higher than normalized SAT. Otherwise, returns false.
*/
bool is_outlier(double normalized_gpa, double normalized_sat,
                double demonstrated_interest);


/**
* Requires: Nothing.
* Modifies: Nothing.
* Effects: Returns true if score above 6 OR student is an outlier. Otherwise, returns false.
*/
bool is_recommended_revised(double calculated_score, bool outlier_value);


/**
* Requires: Five comma separated numeric values (of any length) representing prospective student data in
        the order: StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest.
* Modifies: cout
* Effects: Use each value to calculate a prospective student's recommendation score for admission,
       additionally checking if the student is an outlier. Based on these conditions, print whether the student
       is or is not recommended for admission.
*/
void college_admissions_revised(string data);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DO NOT IMPLEMENT BELOW

/**
* Requires: Nothing.
* Modifies: cout, cin
* Effects: Prompt user to enter data in csv form. Returns data as a string.
*/
string get_data();

/**
* Requires: Nothing.
* Modifies: cout
* Effects: Test getter functions in Lab 6.
*/
void test_getters();

#endif
