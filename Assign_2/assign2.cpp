/*
 * Have the program prompt the user to enter the weight of the package in ounces (oz) 
 * (stop the program with an error message if the user enters a weight less than or equal to zero, 
 * or greater than 1800).
 * Next, have the program prompt the user to enter the number of miles that the 
 * package is to be shipped (stop the program with an error message if the user 
 * enters mileage that is less than or equal to zero, or is greater than 3500).
 * 
 * Calculate the shipping charges as: charges = rate * ceiling( miles / 525 )
 * 
 * Weight of Package (in ounces) 	Rate per 525 Miles Shipped
 * 60 oz or less                                $1.75
 * Over 60 oz but not more than 120 oz          $2.95
 * Over 120 oz but not more than 400 oz 	$3.55
 * Over 400 oz but not more than 1800 oz 	$4.95
 */

/* 
 * File:   Assignment2.cpp
 * Author: Nichole Medero
 * Created on February 20, 2019, 7:06 PM
 * Purpose: Assignment #2 Shipping Rates
 */


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Constants & Global Variables
double const SHIP_RATE_A = 1.75;
double const SHIP_RATE_B = 2.95;
double const SHIP_RATE_C = 3.55;
double const SHIP_RATE_D = 4.95;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    int weight, miles;
    double charges;

    cout<<"Enter weight (in ounces - max: 1800): "; 
    cin>>weight; 
        if (weight <= 0 || weight > 1800) {
            cout<<"Weight out of range. Program terminating."<<endl;
            return 0;
        }
        
    cout<<"Enter miles shipping (max: 3500): "; 
    cin>>miles; 
        if (miles <= 0 || miles > 3500) {
            cout<<"Shipping distance out of range. Program terminating."<<endl;
            return 0;
        }   
     
    if (weight <= 60) {
        charges = SHIP_RATE_A * ceil(miles/525.0f);
    } else if (weight > 60 && weight <= 120) {
        charges = SHIP_RATE_B * ceil(miles/525.0f);
    } else if (weight > 120 && weight <= 400) {
        charges = SHIP_RATE_C * ceil(miles/525.0f);
    } else if (weight > 400 && weight <= 1800) {
        charges = SHIP_RATE_D * ceil(miles/525.0f);
    }
    cout<<endl; 
    cout<<"Shipping charges: $"<< fixed << setprecision(2) << charges;
    
    //Exit
    return 0;
}



