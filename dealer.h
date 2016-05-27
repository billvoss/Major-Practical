#ifndef DEALER_H
#define DEALER_H

#include "person.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class dealer: public person
{
public:
  //Dealer constructor does not take money parameter
  dealer(string p_name, int p_age);
  //Randomises order of cards vector currently held
  void shuffle();
  //Removes the last card in the card vector, places in dynamic memory, sends
  int* sendCard();
  //Moves cards from deck to hand until 17 value is reached
  int play();
  //Prints all information logically
  void printStatus();
  ~dealer();
private:
  //Private hand of the dealer
  vector<int> mycards;
};
#endif
