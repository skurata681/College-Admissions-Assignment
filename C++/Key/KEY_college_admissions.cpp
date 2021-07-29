/**
 * KEY_college_admissions.cpp
 *
 * EECS 183
 * Lab 6: College Admissions
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the lab here#>
 */

#include "college_admissions.h"
#include <iostream>
using namespace std;

string get_studentID(string data) {
    string id = "";
    int i = 0;
    // Append characters until first comma
    while (data.at(i) != ',') {
        id += data.at(i);
        i++;
    }
    return id;
}

double get_gpa(string data) {
    string str_gpa = "";
    int comma_count = 0;
    int i = 0;
    // Append characters between first and second comma
    while (comma_count < 2) {
    // check if comma, skip to next character
        if (data.at(i) == ',') {
            comma_count++;
            i++;
        }
        // add characters only after first comma
        if (comma_count == 1) {
            str_gpa += data.at(i);
        }
        i++;
    }
    double gpa = stod(str_gpa);
    return gpa;
}

double get_sat(string data) {
    string str_sat = "";
    int comma_count = 0;
    int i = 0;
    // Append characters between second and third comma
    while (comma_count < 3) {
    // check if comma, skip to next character
        if (data.at(i) == ',') {
            comma_count++;
            i++;
        }
        // add characters only after second comma
        if (comma_count == 2) {
            str_sat += data.at(i);
        }
        i++;
    }
    double sat = stod(str_sat);
    return sat;
}

double get_curr_strength(string data) {
    string str_curr_strength = "";
    int comma_count = 0;
    int i = 0;
    // Append characters between third and fourth comma
    while (comma_count < 4) {
    // check if comma, skip to next character
        if (data.at(i) == ',') {
            comma_count++;
            i++;
        }
        // add characters only after third comma
        if (comma_count == 3) {
            str_curr_strength += data.at(i);
        }
        i++;
    }
    double curr_strength = stod(str_curr_strength);
    return curr_strength;
}

double get_dem_interest(string data){
    string str_dem_interest = "";
    int comma_count = 0;
    // Append characters after fourth comma
    // loop ends at last character
    for (int i = 0; i < data.size(); i++) {
    // check if comma, skip to next character
        if (data.at(i) == ',') {
            comma_count++;
            i++;
        }
        // add characters only after fourth comma
        if (comma_count == 4) {
            str_dem_interest += data.at(i);
        }
    }
    double dem_interest = stod(str_dem_interest);
    return dem_interest;
}


double normalize_gpa(double original_gpa) {
    // to get GPA on scale 10, mult. by 2
    return original_gpa * 2;
}


double normalize_sat(double original_sat) {
    // to get SAT on scale 10, divide by 160
    return original_sat / 160;
}


double calculate_score(double normalized_gpa, double normalized_sat,
                       double curriculum_strength,
                       double demonstrated_interest) {
    // calculate weighted avg
    double weight_avg = (0.4 * normalized_gpa) + (0.3 * normalized_sat) +
    (0.2 * curriculum_strength) + (0.1 * demonstrated_interest);
    return weight_avg;
}


bool is_recommended(double calculated_score) {
    // recommend scores above 6
    if (calculated_score > 6) {
        return true;
    }
    else {
    return false;
    }
}


void print_recommendation(string studentID, bool recommendation_value) {
    // print positive recommendation if recommendation_value true
    if (recommendation_value == true) {
        cout << studentID << " is recommended for admission." << endl;
    }
    else {
        cout << studentID << " is NOT recommended for admission." << endl;
    }
}


void college_admissions(string data) {
    // assign values
    string student_id = get_studentID(data);
    double gpa = get_gpa(data);
    double sat = get_sat(data);
    double curr_strength = get_curr_strength(data);
    double dem_interest = get_dem_interest(data);
    double norm_gpa = normalize_gpa(gpa);
    double norm_sat = normalize_sat(sat);
    // calculate score
    double score = calculate_score(norm_gpa, norm_sat,
                                   curr_strength, dem_interest);
    // print rec based on score
    print_recommendation(student_id, is_recommended(score));
    return;
}


bool is_outlier(double normalized_gpa, double normalized_sat,
                double demonstrated_interest) {
    // check outlier based on dem. interest and sat/gpa difference
    if ((demonstrated_interest == 0) ||
        (normalized_gpa - normalized_sat > 2)) {
        return true;
    }
    else {
        return false;
    }
}


bool is_recommended_revised(double calculated_score, bool outlier_value) {
    // recommend if score high or student is an outlier
    if ((calculated_score > 6) || (outlier_value == true)) {
        return true;
    }
    else {
        return false;
    }
}


void college_admissions_revised(string data) {
    // assign values
    string student_id = get_studentID(data);
    double gpa = get_gpa(data);
    double sat = get_sat(data);
    double curr_strength = get_curr_strength(data);
    double dem_interest = get_dem_interest(data);
    double norm_gpa = normalize_gpa(gpa);
    double norm_sat = normalize_sat(sat);
    // calculate score
    double score = calculate_score(norm_gpa, norm_sat,
                                   curr_strength, dem_interest);
    // check outlier
    bool outlier_val = is_outlier(norm_gpa, norm_sat, dem_interest);
    
    // print rec based on score and outlier status
    print_recommendation(student_id, is_recommended_revised(score, outlier_val));
    
    return;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DO NOT IMPLEMENT BELOW

string get_data() {
    string data = "";
    string form = "StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest";
    cout << "Enter student data in CSV form (" << form << "):" << endl;
    cin >> data;
    
    return data;
}

void test_getters() {
    string student_data = "02002,4.9,1500,6,8";
    
    cout << "Student data: 02002,4.9,1500,6,8" << endl << endl;
    
    cout << "Testing get_studentID()..." << endl;
    cout << "Expected: 02002" << endl;
    cout << "Actual: " << get_studentID(student_data) << endl << endl;
    
    cout << "Testing get_gpa()..." << endl;
    cout << "Expected: 4.9" << endl;
    cout << "Actual: " << get_gpa(student_data) << endl << endl;
    
    cout << "Testing get_sat()..." << endl;
    cout << "Expected: 1500" << endl;
    cout << "Actual: " << get_sat(student_data) << endl << endl;
    
    cout << "Testing get_curr_strength()..." << endl;
    cout << "Expected: 6" << endl;
    cout << "Actual: " << get_curr_strength(student_data) << endl << endl;
    
    cout << "Testing get_dem_interest()..." << endl;
    cout << "Expected: 8" << endl;
    cout << "Actual: " << get_dem_interest(student_data) << endl << endl;
    
    return;
}

