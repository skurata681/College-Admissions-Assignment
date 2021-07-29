/**
 * college_admissions.cpp
 *
 * EECS 183
 * Lab 6: College Admissions
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the lab here#>
 */

//#include "college_admissions.h"
//#include <iostream>
//using namespace std;
//
//
//string get_studentID(string data) {
//    // TODO: implement
//    return "";
//}
//
//double get_gpa(string data) {
//    // TODO: implement
//    return 0.0;
//}
//
//double get_sat(string data) {
//    // TODO: implement
//    return 0.0;
//}
//
//double get_curr_strength(string data) {
//    // TODO: implement
//    return 0.0;
//}
//
//double get_dem_interest(string data){
//    // TODO: implement
//    return 0.0;
//}
//
//
//double normalize_gpa(double original_gpa) {
//    // TODO: implement
//    return 0.0;
//}
//
//
//double normalize_sat(double original_sat) {
//    // TODO: implement
//    return 0.0;
//}
//
//
//double calculate_score(double normalized_gpa, double normalized_sat,
//                       double curriculum_strength,
//                       double demonstrated_interest) {
//    // TODO: implement
//    return 0.0;
//}
//
//
//bool is_recommended(double calculated_score) {
//    // TODO: implement
//    return false;
//}
//
//
//void print_recommendation(string studentID, bool recommendation_value) {
//    // TODO: implement
//    return;
//}
//
//
//void college_admissions(string data) {
//    // TODO: implement
//    return;
//}
//
//
//bool is_outlier(double normalized_gpa, double normalized_sat,
//                double demonstrated_interest) {
//    // TODO: implement
//    return false;
//}
//
//
//bool is_recommended_revised(double calculated_score, bool outlier_value) {
//    // TODO: implement
//    return false;
//}
//
//
//void college_admissions_revised(string data) {
//    // TODO: implement
//    return;
//}
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// DO NOT IMPLEMENT BELOW
//
//string get_data() {
//    string data = "";
//    string form = "StudentID,GPA,SAT,CurriculumStrength,DemonstratedInterest";
//    cout << "Enter student data in CSV form (" << form << "):" << endl;
//    cin >> data;
//
//    return data;
//}
//
//void test_getters() {
//    string student_data = "02002,4.9,1500,6,8";
//
//    cout << "Student data: 02002,4.9,1500,6,8" << endl << endl;
//
//    cout << "Testing get_studentID()..." << endl;
//    cout << "Expected: 02002" << endl;
//    cout << "Actual: " << get_studentID(student_data) << endl << endl;
//
//    cout << "Testing get_gpa()..." << endl;
//    cout << "Expected: 4.9" << endl;
//    cout << "Actual: " << get_gpa(student_data) << endl << endl;
//
//    cout << "Testing get_sat()..." << endl;
//    cout << "Expected: 1500" << endl;
//    cout << "Actual: " << get_sat(student_data) << endl << endl;
//
//    cout << "Testing get_curr_strength()..." << endl;
//    cout << "Expected: 6" << endl;
//    cout << "Actual: " << get_curr_strength(student_data) << endl << endl;
//
//    cout << "Testing get_dem_interest()..." << endl;
//    cout << "Expected: 8" << endl;
//    cout << "Actual: " << get_dem_interest(student_data) << endl << endl;
//
//    return;
//}
