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
	person();
	//Person constructor takes name, age and money
	person(string p_name,int p_age,double p_money);
	//Returns the name of the person
	string getName();
	//Returns the age of the person
	int getAge();
	//Returns the amount of money
	double getMoney();
	//Sets the name of the person
	void setName(string p_name);
	//Sets the age of the person
	void setAge(int p_age);
	//Add money to the participant funds
	void addMoney(double add_money);
	//Prints different information for each participants and the dealer
	virtual void printStatus()=0;
	//Calculates the value of the cards currently held
	int cardsValue(vector<int> cards);
	//Prints the card currently held
	void printCards(vector<int> cards);
	~person();
protected:
	string name;
	int age;
	double money;
	//Player initally holds no cards, this is an empty vector
	vector<int> cards;
};
#endif
