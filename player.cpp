#include "person.h"
#include "player.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

player::player() : person()
{
}

player::player(string p_name, int p_age, double p_money)
:person(p_name, p_age, p_money),
current_wager(0),
cards_value(0)
{
}

void player::leaveTable()
{
}

double player::getWager()
{
  return current_wager;
}

int player::getCardsValue()
{
  cards_value = cardsValue(cards);
  return cards_value;
}

void player::setDealer(dealer* p)
{
  my_dealer = p;
}

void player::receiveCard(double wager)
{
  current_wager += wager;
  int* tempcard = my_dealer->sendCard();
  cards.push_back(*tempcard);
  delete tempcard;
}

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
  this->printCards(cards);
}

void player::printStatus()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout<<"Current total wager : "<<current_wager<<endl;
  cout<<"Current cards:"<<endl;
  this->printCards(cards);
  cout<<endl;
}

player::~player()
{
}
