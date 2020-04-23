// drg-Fitness.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By: David Garza
//Date: 20200422
//Description: Menu for Fitness Center membership cost.

#include <iostream>
#include <string>
#include "math.h"
using namespace std;

int main()
{
	float fltSeniorDiscount = 0.30f;
	float fltSeniorYearDiscount = 0.45f;
	float fltSeniorSessionDiscount = 0.50f;
	float fltYearDiscount = 0.15f;
	float fltPersonalTrainingDiscount = 0.20f;
	float fltMembership = 50.00f;
	float fltTrainingSession = 30.00f;
	float fltYearTotal = 600.0f;
	float fltSeniorMembershipDiscount = 0.0f;
	float fltSeniorTraining = 0.0f;
	float fltSeniorYearMembership = 0.0f;
	float fltSeniorTrainingDiscount = 0.0f;
	float fltStandardYear = 0.0f;
	float fltStandardTraining = 0.0f;

	
	std::cout << "Welcome to my fitness center!" << endl;
	std::cout << "\nStandard membership is $50.00 a month." << endl;
	std::cout << "Personal training sessions are $30.00 a session." << endl;
	std::cout << "Senior citizen discounts are 30% off." << endl;
	std::cout << "Memberships bought for 12 or more months are 15% off." << endl;
	std::cout << "Buying more than 5 training sessions awards you 20% off each session." << endl;

	fltSeniorMembershipDiscount = (fltMembership - (fltSeniorDiscount * fltMembership));
	fltSeniorYearMembership = (fltYearTotal - (fltYearTotal * fltSeniorYearDiscount));
	fltSeniorTraining = (fltTrainingSession - (fltSeniorDiscount * fltTrainingSession));
	fltSeniorTrainingDiscount = (fltTrainingSession - (fltTrainingSession * fltSeniorSessionDiscount));

	std::cout << "\nRates for Seniors are:" << endl;
	std::cout << "$" << fltSeniorMembershipDiscount << " a month." << endl;
	std::cout << "$" << fltSeniorYearMembership << " a year." << endl;
	std::cout << "$" << fltSeniorTraining << " per session." << endl;
	std::cout << "$" << fltSeniorTrainingDiscount << " per session with additional training discount." << endl;

	fltStandardYear = (fltYearTotal - (fltYearDiscount * fltYearTotal));
	fltStandardTraining = (fltTrainingSession - (fltPersonalTrainingDiscount * fltTrainingSession));
	std::cout << "\nStandard rates are:" << endl;
	std::cout << "$" << fltStandardYear << " a year with discount." << endl;
	std::cout << "$" << fltStandardTraining << " per session with discount." << endl;
}



