
#include "person.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string person::getName()	//Return the name of the dealer or the participant
{
	return name;
}

int person::getAge()	//Return the age of the dealer or the participant
{
	return age;
}

void person::setName(string p_name)	//Set the name of the dealer or the participant
{
	name = p_name;
}

void person::setAge(double p_age)	//Set the age of the person or the participant
{
	age = p_age;
}

void person::addMoney(double add_money)	//Add money to the dealer or particpant fund
{
	money += add_money;
}
