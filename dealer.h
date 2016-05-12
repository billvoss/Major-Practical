#ifndef DEALER_h
#define DEALER_h

#include "person.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class dealer: public person
{
public:
  dealer();
  void shuffle();
  void deal();
  void giveCard();
  void play();
  ~dealer();
private:
};
#endif
