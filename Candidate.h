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

//Candidate.h
#ifndef CANDIDATE_H
#define CANDIDATE_H
#include <iostream>
using namespace std;

class Candidate

{ 
	//overloaded ">>" operator
	friend std::istream & operator >> ( istream &, Candidate &);
	//overloaded "<<" operator
	friend std::ostream & operator << ( ostream &, Candidate &);
	//overloaded ">" operator
	friend void operator>( Candidate &, Candidate & );
  private:
     string CandidateName;
     int votes[3][5];
     int sum;
     string status;
     
  public:
	//constructor
	 Candidate(string, string, int);
	//function to set the name
     void setName(string);
	//function to get the name
     string getName();
	//function to set the sum
     void setSum();
	//function to set the order of candidates
     void setStatus(string);
     
};

#endif
