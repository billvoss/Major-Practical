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
  dealer(string p_name, int p_age);
  void shuffle();
  void deal();
  int* sendCard();
  void play();
  void leaveTable();
  void printStatus();
  ~dealer();
private:
};
#endif
