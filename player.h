#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class player: public person
{
  friend class table;
public:
  player(string p_name, int p_age, double p_money);
  void leaveTable();
  void printStatus();
  void setDealer(dealer* p);
  void receiveCard();
  ~player();
private:
  dealer* my_dealer;
};
#endif
