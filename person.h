#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

//Abtract class
class person
{

public:
	person(string p_name,int p_age,double p_money);
	string getName();  //Returns the name of the person
	int getAge(); //Returns the age of the person
	double getMoney(); //Retruns the amount of money in cents
	void setName(string p_name); //Sets the name of the person
	void setAge(double p_age); //Sets the age of the person
	void addMoney(double add_money); //Add money to the particiapnt funds
	virtual void leaveTable()=0; //pure virtual function. Function have different meaning from particpants and dealer
	virtual void printStatus()=0; //Prints different information for each participants and the dealer
	~person();
protected:
	//vector<int> cards;
	string name;
	int age;
	double money;
private:
};
#endif
