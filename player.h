#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

//Player inherits from person
class player: public person
{
public:
  //Trivial player constructor
  player();
  //Player constructor takes name, age, money
  player(string p_name, int p_age, double p_money);
  void printStatus();
  void printAllStatus();
  //Returns current total wager
  double getWager();
  //Returns current cards value
  int getCardsValue();
  //Sets the dealer to the input dealer pointer
  void setDealer(dealer* p);
  //Receiving a card process
  void receiveCard(double wager);
  //Trivial player destructor
  ~player();
private:
  double current_wager;
  int cards_value;
  //Location of the dealer
  dealer* my_dealer;
};
#endif
