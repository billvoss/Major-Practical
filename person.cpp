
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

person::string getName()	//Return the name of the dealer or the participant
{
	return name;
}

person::int getAge()	//Return the age of the dealer or the participant
{
	return age;
}

person::string setName(string p_name)	//Set the name of the dealer or the participant
{
	name = p_name;
}

person::double setAge(double p_age)	//Set the age of the person or the participant
{
	age = p_age;
}

person::double addMoney(double add_money)	//Add money to the dealer or particpant fund
{
	money += add_money;
}
