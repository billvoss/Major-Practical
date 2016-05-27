#include "person.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

//Dealer constructor does not take money parameter
dealer::dealer(string p_name, int p_age)
:person(p_name, p_age, 0)
{
  //Creates a vector filled with two decks of cards in sequential order
  for(int i=1; i<3; i++)
  {
    for(int card = 1;card<53;card++)
    {
      //Creates a new vector element
      cards.push_back(card);
    }
  }
}

//Moves cards from deck to hand until 17 value is reached
int dealer::play()
{
  cout<<"It is now the dealer's play."<<endl;
  //Loops, adding more cards, while value of cards in own hand is less than 17
  while(this->cardsValue(mycards)<17)
  {
    //Dynamically allocates memory for card
    int* tempcard = new int;
    //Takes last card in vector, places in tempcard, deletes last vector element
    *tempcard = cards.back();
    cards.pop_back();
    //Places card into hand vector
    mycards.push_back(*tempcard);
    cout<<"The dealer plays another card. His hand now is:: "<<endl;
    //Calls own printCards function
    this->printCards(mycards);
    //Deletes dynamically allocated memory
    delete tempcard;
  }
  cout<<"The dealer sits."<<endl;
  return this->cardsValue(mycards);
  //Calls own cardsValue function, returns result
}

//Randomises order of cards vector currently held
void dealer::shuffle()
{
  //Seeds random function with current time
  srand((time(NULL)));
  random_shuffle(cards.begin(),cards.end());
}

//Removes the last card in the card vector, places in dynamic memory, sends
int* dealer::sendCard()
{
  //Dynamically allocates memory for card
  int* tempcard = new int;
  //Takes last card in vector, places in tempcard, deletes last vector element
  *tempcard = cards.back();
  cards.pop_back();
  //Returns location of dynamic memory
  return tempcard;
}

//Prints all information logically
void dealer::printStatus()
{
  cout<<"\nI am a dealer."<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Profit: "<<money<<endl;
  cout<<"Number of cards: "<<cards.size()<<endl;
  cout<<"Current cards in my hand:"<<endl;
  //Calls own printCards function on hand
  this->printCards(mycards);
  cout<<"Current cards in my deck:"<<endl;
  //Calls own printCards function on deck
  this->printCards(cards);
}

//Trivial destructor
dealer::~dealer()
{
}
