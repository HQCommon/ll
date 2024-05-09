#include "Person.h"

#include "Person.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

Person::~Person()
{
	cout << "\nPerson object being destroyed. Done!\n";
}

void WriteReadSort::WritePerson()
{
	Person peopleData[10] = {};
	fstream inputFile("names.txt");
	string fname = "jane", lname = "yor";
	double weightArr[10] = {};
	double weight = 0;

	while(!inputFile.eof())
	{
		for (int i = 0; i < 10; i++)
		{
			inputFile >> fname >> lname >> weight;

			peopleData[i].setName(fname);
			peopleData[i].setLastName(lname);
			peopleData[i].setWeight(weight);
			weightArr[i] = peopleData[i].getWeight();
		}
	}
	inputFile.close();
	static Person;
	/*for (int i = 0; i < 10; i++)
	{
		cout << peopleData[i].getName() << " " << peopleData[i].getLastName() << " " << peopleData[i].getWeight() << endl;
	}*/
	ofstream file("people.dat", ios::out | ios::binary);

	// Check if error opening file
	if (!file.is_open())
	{
		cout << "Error opening the binary file." << endl;
		return;
	}

	file.write(reinterpret_cast<char*>(weightArr), sizeof(Person) * 10);

	file.close();

	ofstream fileWrite("people.txt");

	for (int i = 0; i < 10; i++)
	{
		fileWrite << peopleData[i].getName() << " " << peopleData[i].getLastName() << endl;
	}
}

 void WriteReadSort::ReadPerson()
{
	double peopleArr[10] = {};
	
	ifstream file("people.dat", ios::in | ios::binary);
	
	// Check if error opening file
	if (!file.is_open())
	{
		cout << "Error opening the binary file." << endl;
		return;
	}

	file.read(reinterpret_cast<char*>(peopleArr), sizeof(double) * 10);

	file.close();

	cout << "Displaying weight in binary file\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Weight: " << peopleArr[i] << endl;
	}

	cout << "Displaying first and last name from text file\n";
	fstream fileWrite("people.txt");

	for (int i = 0; i < 10; i++)
	{
		fileWrite >> firstName >> lastName;

		nameArr[i].setName(firstName);
		nameArr[i].setLastName(lastName);
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << nameArr[i].getName() << " " << nameArr[i].getLastName() << endl;
	}
}

void WriteReadSort::SortPerson()
{
	Person* newArr = new Person[10];

	for (int i = 0; i < 10; i++)
	{
		newArr[i].setName(nameArr[i].getName());
		newArr[i].setLastName(nameArr[i].getLastName());
		newArr[i].setWeight(nameArr[i].getWeight());
	}


}

void WriteReadSort::CalculateAvgWt()
{
}


