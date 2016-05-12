#ifndef person_h
#define person_h

#include <string>
#include <vector>
#include <iostream>
using namespace std;

//Abtract class
class person
{
public:
	string getName();  //Returns the name of the person
	int getAge(); //Returns the age of the person
	double getMoney(); //Retruns the amount of money in cents
	string setName(string p_name); //Sets the name of the person
	double setAge(double p_age); //Sets the age of the person
	double addMoney(double add_money); //Add money to the particiapnt funds
	virtual void leaveTable() =0; //pure virtual function. Function have different meaning from particpants and dealer
	virtual void printStatus(); //Prints different information for each participants and the dealer
protected:
	vector<int> cards[];
private:
	string name;
	int age;
	double money;
};
#endif
