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

//p3.cpp

#include "Candidate.h"
#include "TallyVotes.h"
#include <iostream>

using namespace std;

int main(){
	
	//initialize various variables here
	string name;
	string candidate1;
	string candidate2;
	string status1 = "Republican";
	string status2 = "Democrat";
	
	Candidate object1( candidate1, status1, 0 );//temporarily construct object1 with junk data
	Candidate object2( candidate2, status2, 0 );//temporarily construct object2 with junk data
	
	//ask for name of election
	cout << "Please enter the name of the election: " << endl;
	cin >> name;
	
	//ask for name of candidate 1
	cout << endl << "===========================================================" << endl << endl;
	cout << "Please enter the name of the Republican candidate: " << endl;
	cin >> candidate1;
	//and for candidate 2
	cout << "Please enter the name of the Democrat candidate: " << endl;
	cin >> candidate2;
	
	//call the constructor of TallyVotes and reconstruct the two objects with real data
	TallyVotes tally( name, candidate1, status1, candidate2, status2, object1, object2 );
	
	//calling the rest of the functions
	tally.getVotes(object1, object2);
	tally.display(object1, object2, tally);
	tally.findWinner(object1, object2);
	
	
	return 0;
}
