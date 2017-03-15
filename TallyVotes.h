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

//TallyVotes.h
#include "Candidate.h"
#include <iostream>
using namespace std;

class TallyVotes{


public:


TallyVotes ( string electName, string name1, string status1, string name2, string status2, Candidate &object1, Candidate &object2 ){
	//ensure that the initial values for sum are 0 for both candidates
	int sum1 = 0;
	int sum2 = 0;
	
	//set the name of the election
	setName( electName );
	//reconstruct the objects
	object1 = Candidate( name1, status1, sum1 );
	object2 = Candidate( name2, status2, sum2 );
	

}

//simple set function for the election name
void setName( string electionName ){
	
	election = electionName;
}

//simple get function for the name of the election
string getName(){
	return election;
}

//function that calls upon the overloaded ">>" operator of Candidate as well as the setSum() functions
void getVotes(Candidate &object1, Candidate &object2){

	cin >> object1 >> object2;
	object1.setSum();
	object2.setSum();
	
}

//function that calls upon the overloaded ">" operator of Candidate
void findWinner(Candidate &object1, Candidate &object2){

	object1 > object2;
	
}

//function that calls upon the overloaded "<<" operator of Candidate and getName of TallyVotes
void display(Candidate &object1, Candidate &object2, TallyVotes &tally){
	string temp = tally.getName();
	cout << "The name of the election is " << temp << endl;
	cout << object1 << endl << endl;
	cout << object2 << endl << endl;
	
}

private:

	string election;
	
};
