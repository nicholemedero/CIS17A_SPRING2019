/*
 * Write a program that uses a structure to store the following weather data for
 * a particular month:
 *      - total rainfall
 *      - high temperature
 *      - low temperature
 *      - average temperature
 * The program should have an array of 12 structures to hold weather data for an
 * entire year. When the program runs, it should ask the user to enter the data for
 * each month. (The average temperature should be calculated.)
 * 
 * One the data are entered for all the months, the program should calculate and
 * display the average monthly rainfall, the total rainfall for the year, the
 * highest and lowest temperatures for the year (and the months they occurred in),
 * and the average of all the monthly average temperatures.
 * 
 * Input Validation: Only accept temperatures within the range between -140 and 
 * +140 degrees Fahrenheit.
 */

/* 
 * File:   assign3.cpp
 * Author: Nichole Medero
 * Created on April 2, 2019, 10:15 AM
 * Purpose: Assignment 3
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


//Constants, Global Variables, etc
struct Weather {
    double rainfall;
    double highTemp; 
    double lowTemp;
};

const int NUM_MONTHS = 12; //12 months in a year

const string MONTH_NAMES[NUM_MONTHS] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL",
                                        "MAY", "JUNE", "JULY", "AUGUST", 
                                        "SEPTEMPBER", "OCTOBER", "NOVEMBER", 
                                        "DECCEMBER" };

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    double avgRain = 0.0;       //average rainfall
    double totalRain = 0.0;     //total rainfall
    double avgTempM = 0.0;      //average temperature per month
    double avgTemp = 0.0;       //average temperature stored in array
    double yrlyAvg = 0.0;       //average of all monthly temperature averages
    
    Weather months[NUM_MONTHS];         //array of structures (type Weather) called months
    double avgTempArray[NUM_MONTHS];    //array to store monthly average temperatures for calculation
    
    cout<<"Enter the following information for each month:"<<endl;
    
    //Loop for Data Input
    for(int i = 0; i < NUM_MONTHS; i++) {
        cout<<MONTH_NAMES[i]<<endl;
        cout<<"\t Total Rainfall: ";
        cin>>months[i].rainfall;
        
        cout<<"\t High Temperature: ";
        cin>>months[i].highTemp;
        if (months[i].highTemp > 140 || months[i].highTemp < -140) {    //input validation
            cout<<"\n That is not a valid temperature for " << MONTH_NAMES[i] << ".";
            return 0;
        }
        
        cout<<"\t Low Temperature: ";
        cin>>months[i].lowTemp;
        if (months[i].lowTemp > 140 || months[i].lowTemp < -140) {       //input validation
            cout<<"\n That is not a valid temperature for " << MONTH_NAMES[i] << ".";
            return 0;
        }
    }

    //Total Rainfall/Average Rainfall Calculations
    for (int i = 0; i < NUM_MONTHS; i++) {
        totalRain += months[i].rainfall; //Sum total rain fall
        avgRain = totalRain/NUM_MONTHS; //Calculate average rainfall by dividing sum
                                        //by number of months
    }
    
    //High/Low Temperature Calculations used for Averages
    for (int i = 0; i < NUM_MONTHS; i++) {
        avgTempM = months[i].highTemp + months[i].lowTemp; //add monthly High and Low
        avgTemp = avgTempM/2; //Calculate monthly average
        avgTemp = avgTempArray[i]; //Store average in array at the same index
    }
    
    //Average Monthly Average Temperature Calculations
    for (int i = 0; i < NUM_MONTHS; i++) {
        yrlyAvg += avgTempArray[i]; //Sum all elements in average monthly temperature array
        yrlyAvg = yrlyAvg/NUM_MONTHS; //Divide elements by the number of months
    }
    
    //Yearly High/Low Search Calculation
    int min = months[0].highTemp; //Stores the lowest temperature
    int max = months[0].highTemp; //Stores the highest temperature
    string minMonth = MONTH_NAMES[0]; //Stores month of lowest temperature
    string maxMonth = MONTH_NAMES[0]; //Stores month of highest temperature
    
    for (int i = 0; i < NUM_MONTHS; i++) { //search for lowest temperature
        if (min > months[i].lowTemp) {
            min = months[i].lowTemp;
            minMonth = MONTH_NAMES[i]; //match month with the temperature
        }
    }
    
    for (int i = 0; i < NUM_MONTHS; i++) { //search for highest temperature
        if (max < months[i].highTemp) {
            max = months[i].highTemp;
            maxMonth = MONTH_NAMES[i]; //match the month with the temperature
        }  
    }
  
    //Program Output
    cout<<"Total Rainfall: " << totalRain << endl;
    cout<<"Average Monthly Rain: " << avgRain << endl;
    cout<<"Average Monthly Average Temperature: " << yrlyAvg << endl;
    cout<<"Highest Temperature: " << max << "F in " << maxMonth << endl;
    cout<<"Lowest Temperature: " << min << "F in " << minMonth << endl;
    //Exit
    return 0;
}
