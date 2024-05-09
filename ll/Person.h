#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//my class for person
class Person
{
	//private members 
private:
	string fname, lname;
	double weight;
public:
	

	//default constructor
	Person()
	{
		fname = "Alan";
		lname = "Course";
		weight = -1;
	}
	//destructor
	~Person();

	//overloaded constructor
	Person(string firstName, string lastName, double personWeight)
	{
		fname = firstName;
		lname = lastName;
		weight = personWeight;
	}

	//getter methods
	string getName()
	{
		return fname;
	}
	string getLastName()
	{
		return lname;
	}
	double getWeight()
	{
		return weight;
	}
	// setter methods
	void setName(string newName)
	{
		fname = newName;
	}
	void setLastName(string newLastName)
	{
		lname = newLastName;
	}
	void setWeight(double newWeight)
	{
		weight = newWeight;
	}
};

//class WriteReadSort
class WriteReadSort
{
private:
	//pointer to dynamically allocate the array of Person Objects
	Person* people;
	Person nameArr[10] = {};
	string firstName = "OO", lastName = "II";
	int count = 0;
	int capacity = 0;
public:
	void WritePerson();
	void ReadPerson();
	void SortPerson();
	void CalculateAvgWt();

};
