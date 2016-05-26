#include "person.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

dealer::dealer(string p_name, int p_age)
:person(p_name, p_age, 0)
{
  //creates a vector filled with two decks of cards in sequential order
  for(int i=1; i<3; i++)
  {
    for(int card = 1;card<53;card++)
    {
      cards.push_back(card);
    }
  }
}

int dealer::play()
{
  cout<<"It is now the dealer's play."<<endl;
  while(this->cardsValue(mycards)<17)
  {
    int* tempcard = new int;
    *tempcard = cards.back();
    cards.pop_back();
    mycards.push_back(*tempcard);
    cout<<"The dealer plays another card. His hand now is:: "<<endl;
    this->printCards(mycards);
    delete tempcard;
  }
  cout<<"The dealer sits."<<endl;
  return this->cardsValue(mycards);
}

void dealer::shuffle()
{
  srand((time(NULL)));
  random_shuffle(cards.begin(),cards.end());
}

void dealer::leaveTable()
{
}

int* dealer::sendCard()
{
  int* tempcard = new int;
  *tempcard = cards.back();
  cards.pop_back();
  return tempcard;
}

void dealer::printStatus()
{
  cout<<"\nI am a dealer."<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Profit: "<<money<<endl;
  cout<<"Number of cards: "<<cards.size()<<endl;
  cout<<"Current cards in my hand:"<<endl;
  this->printCards(mycards);
  cout<<"Current cards in my deck:"<<endl;
  this->printCards(cards);
}

dealer::~dealer()
{
}
