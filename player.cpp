#include "person.h"
#include "player.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

//Trivial player constructor
player::player()
:person()
{
}

//Player constructor taking name, age and money
player::player(string p_name, int p_age, double p_money)
:person(p_name, p_age, p_money),
//Initalises wager and cards value to zero
current_wager(0),
cards_value(0)
{
}

//Returns current total wager
double player::getWager()
{
  return current_wager;
}

//Returns current cards value
int player::getCardsValue()
{
  //Invokes cardsValue function on cards held
  cards_value = cardsValue(cards);
  return cards_value;
}

//Sets the dealer to the input dealer pointer
void player::setDealer(dealer* p)
{
  my_dealer = p;
}

//Receiving a card process
void player::receiveCard(double wager)
{
  //Increases wager by the input
  current_wager += wager;
  //Sets pointer to dyamically allocated memory from sendCard
  int* tempcard = my_dealer->sendCard();
  //Adds a card with the value from sendCard
  cards.push_back(*tempcard);
  //Removes the dynamically allocated memory
  delete tempcard;
}

//Prints detailed information logically
void player::printAllStatus()
{
  cout<<"\nI am a player."<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout<<"Money: "<<money<<endl;
  cout<<"Current total wager : "<<current_wager<<endl;
  cout<<"Number of cards: "<<cards.size()<<endl;
  cout<<"Current value of cards: "<<this->cardsValue(cards)<<endl;
  cout<<"Current cards:"<<endl;
  //Calls the printCard function in the current instanstiation of the object
  this->printCards(cards);
}

//Prints minimal information logically
void player::printStatus()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout<<"Current total wager : "<<current_wager<<endl;
  cout<<"Current cards:"<<endl;
  //Calls the printCard function in the current instanstiation of the object
  this->printCards(cards);
  cout<<endl;
}

//Trivial player destructor
player::~player()
{
}
