/*
Course Number:  1342
Programmer:     Joseph Kang
Date:           10/26/2015
Program Number: Program 3
Purpose:        Compares the votes for two candidates in an election.  
Server:		    genuse30.lyle.smu.edu
Instructor: DONALD EVANS
TA:             Sean

Sources Consulted: http://stackoverflow.com/questions/2166099/calling-a-constructor-to-re-initialize-object
*/

//Candidate.cpp
#include <iomanip>
#include <iostream>
#include "Candidate.h"
using namespace std;

//Constructor that will use setName and setStatus functions and initialize the value of private member sum
Candidate::Candidate ( string name, string status, int initialSum ){
	setName( name );
	setStatus( status );
	sum = initialSum;
}

//returns name and sum of votes
ostream &operator << ( ostream &output, Candidate &object )
{
	output << "The " << object.status << " candidate's name is: " << object.CandidateName << "\nand the number of votes that the candidate has is " 
	<< object.sum;
	return output;
	
}

//allows user to input the votes for 5 precincts for each of 3 states
istream &operator >> ( istream &input, Candidate &object )
{
	int dumI;
	for ( size_t i = 0; i < 3; i++){
		cout << "Please enter the number of votes for" << endl <<"The 5 precincts for state " << i+1 << " for the candidate named " << object.CandidateName << ":" << endl;
		for ( size_t j = 0; j < 5; j++ ){
			input >> dumI;
			object.votes[i][j] = dumI;
			
	
		}
		cout << endl;
	}
	return input;
}

//sets the input string as candidate's name
void Candidate::setName( string name ){
	CandidateName = name;
}

//function that allows getting of candidate's name
string Candidate::getName(){
	return CandidateName;
}

//function that calculates the sum of the votes
void Candidate::setSum(){
	int dumI;
	for (size_t i = 0; i < 3; i++){
		for(size_t j = 0; j < 5; j++){
			dumI = votes[i][j];
			sum += dumI;
		}
	}
}

//overloaded > function
void operator>( Candidate &first,  Candidate &second ){
	string winner;
	if ( first.sum < second.sum ){
		winner = second.getName();
		cout << winner << " has more votes!" << endl;
	}
	
	else if ( first.sum == second.sum ){
		cout << "Both candidates have the same number of votes!" << endl;
	}
	
	else if ( first.sum > second.sum ){
		winner = first.getName();
		cout << winner << " has more votes!" << endl;
	}
	
	else{
		cout << "You must have entered in wrong data type" << endl << "You shouldn't have done that." << endl;
	}
}

//just a simple program that will help later when outputting the Candidate's info
void Candidate::setStatus( string stat ){
	status = stat;
}
