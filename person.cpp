#include "person.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Trivial person constructor
person::person()
{
}

//Person constructor with name, age and money
person::person(string p_name,int p_age,double p_money)
:name(p_name),	//Private variables are set to appropriate values
age(p_age),
money(p_money)
{
	//Scolds user if player is under 18
	if(p_age<18)
	{
		cout<<"Sorry, this person is under 18 and should not play"<<endl;
	}
}

//Return the name of the dealer or the player
string person::getName()
{
	return name;
}

//Return the age of the dealer or the player
int person::getAge()
{
	return age;
}

//Return the money of the dealer or the player
double person::getMoney()
{
	return money;
}

//Set the name of the dealer or the participant
void person::setName(string p_name)
{
	name = p_name;
}

//Set the age of the person or the participant
void person::setAge(int p_age)
{
	age = p_age;
}

//Add money to the dealer or particpant fund
void person::addMoney(double add_money)
{
	money += add_money;
}

//Summates the value of all of the cards currently held
int person::cardsValue(vector<int> cards)
{
	//Resets the value counter
	int cards_value = 0;

	//Iterates over every element in the cards vector
	for(int i=0;i<cards.size();i++)
	{
		switch(cards[i])
		{
			case 1:
			cards_value += 1;
			break;
			case 2:
			cards_value += 2;
			break;
			case 3:
			cards_value += 3;
			break;
			case 4:
			cards_value += 4;
			break;
			case 5:
			cards_value += 5;
			break;
			case 6:
			cards_value += 6;
			break;
			case 7:
			cards_value += 7;
			break;
			case 8:
			cards_value += 8;
			break;
			case 9:
			cards_value += 9;
			break;
			case 10:
			cards_value += 10;
			break;
			case 11:
			cards_value += 10;
			break;
			case 12:
			cards_value += 10;
			break;
			case 13:
			cards_value += 10;
			break;
			case 14:
			cards_value += 1;
			break;
			case 15:
			cards_value += 2;
			break;
			case 16:
			cards_value += 3;
			break;
			case 17:
			cards_value += 4;
			break;
			case 18:
			cards_value += 5;
			break;
			case 19:
			cards_value += 6;
			break;
			case 20:
			cards_value += 7;
			break;
			case 21:
			cards_value += 8;
			break;
			case 22:
			cards_value += 9;
			break;
			case 23:
			cards_value += 10;
			break;
			case 24:
			cards_value += 10;
			break;
			case 25:
			cards_value += 10;
			break;
			case 26:
			cards_value += 10;
			break;
			case 27:
			cards_value += 1;
			break;
			case 28:
			cards_value += 2;
			break;
			case 29:
			cards_value += 3;
			break;
			case 30:
			cards_value += 4;
			break;
			case 31:
			cards_value += 5;
			break;
			case 32:
			cards_value += 6;
			break;
			case 33:
			cards_value += 7;
			break;
			case 34:
			cards_value += 8;
			break;
			case 35:
			cards_value += 9;
			break;
			case 36:
			cards_value += 10;
			break;
			case 37:
			cards_value += 10;
			break;
			case 38:
			cards_value += 10;
			break;
			case 39:
			cards_value += 10;
			break;
			case 40:
			cards_value += 1;
			break;
			case 41:
			cards_value += 2;
			break;
			case 42:
			cards_value += 3;
			break;
			case 43:
			cards_value += 4;
			break;
			case 44:
			cards_value += 5;
			break;
			case 45:
			cards_value += 6;
			break;
			case 46:
			cards_value += 7;
			break;
			case 47:
			cards_value += 8;
			break;
			case 48:
			cards_value += 9;
			break;
			case 49:
			cards_value += 10;
			break;
			case 50:
			cards_value += 10;
			break;
			case 51:
			cards_value += 10;
			break;
			case 52:
			cards_value += 10;
			break;
		}
	}
	return cards_value;
}

//Prints a list of the cards currently held
void person::printCards(vector<int> cards)
{
	//Iterates over every element in the cards vector
	for(int i=0;i<cards.size();i++)
	{
		switch(cards[i])
		{
			case 1:
			cout<<"A♣"<<endl;
			break;
			case 2:
			cout<<"2♣"<<endl;
			break;
			case 3:
			cout<<"3♣"<<endl;
			break;
			case 4:
			cout<<"4♣"<<endl;
			break;
			case 5:
			cout<<"5♣"<<endl;
			break;
			case 6:
			cout<<"6♣"<<endl;
			break;
			case 7:
			cout<<"7♣"<<endl;
			break;
			case 8:
			cout<<"8♣"<<endl;
			break;
			case 9:
			cout<<"9♣"<<endl;
			break;
			case 10:
			cout<<"10♣"<<endl;
			break;
			case 11:
			cout<<"J♣"<<endl;
			break;
			case 12:
			cout<<"Q♣"<<endl;
			break;
			case 13:
			cout<<"K♣"<<endl;
			break;
			case 14:
			cout<<"1♦"<<endl;
			break;
			case 15:
			cout<<"2♦"<<endl;
			break;
			case 16:
			cout<<"3♦"<<endl;
			break;
			case 17:
			cout<<"4♦"<<endl;
			break;
			case 18:
			cout<<"5♦"<<endl;
			break;
			case 19:
			cout<<"6♦"<<endl;
			break;
			case 20:
			cout<<"7♦"<<endl;
			break;
			case 21:
			cout<<"8♦"<<endl;
			break;
			case 22:
			cout<<"9♦"<<endl;
			break;
			case 23:
			cout<<"10♦"<<endl;
			break;
			case 24:
			cout<<"J♦"<<endl;
			break;
			case 25:
			cout<<"Q♦"<<endl;
			break;
			case 26:
			cout<<"K♦"<<endl;
			break;
			case 27:
			cout<<"A♥"<<endl;
			break;
			case 28:
			cout<<"2♥"<<endl;
			break;
			case 29:
			cout<<"3♥"<<endl;
			break;
			case 30:
			cout<<"4♥"<<endl;
			break;
			case 31:
			cout<<"5♥"<<endl;
			break;
			case 32:
			cout<<"6♥"<<endl;
			break;
			case 33:
			cout<<"7♥"<<endl;
			break;
			case 34:
			cout<<"8♥"<<endl;
			break;
			case 35:
			cout<<"9♥"<<endl;
			break;
			case 36:
			cout<<"10♥"<<endl;
			break;
			case 37:
			cout<<"J♥"<<endl;
			break;
			case 38:
			cout<<"Q♥"<<endl;
			break;
			case 39:
			cout<<"K♥"<<endl;
			break;
			case 40:
			cout<<"A♠"<<endl;
			break;
			case 41:
			cout<<"2♠"<<endl;
			break;
			case 42:
			cout<<"3♠"<<endl;
			break;
			case 43:
			cout<<"4♠"<<endl;
			break;
			case 44:
			cout<<"5♠"<<endl;
			break;
			case 45:
			cout<<"6♠"<<endl;
			break;
			case 46:
			cout<<"7♠"<<endl;
			break;
			case 47:
			cout<<"8♠"<<endl;
			break;
			case 48:
			cout<<"9♠"<<endl;
			break;
			case 49:
			cout<<"10♠"<<endl;
			break;
			case 50:
			cout<<"J♠"<<endl;
			break;
			case 51:
			cout<<"Q♠"<<endl;
			break;
			case 52:
			cout<<"K♠"<<endl;
			break;
		}
	}
}

//Trivial person destructor
person::~person()
{
}
