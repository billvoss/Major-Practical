#include <iostream>
#include "person.h"
#include "dealer.h"
#include "player.h"
#include "table.h"

using namespace std;

int main()
{

  dealer dealer1("Alex",18);

  table table1(&dealer1);

  player player1("Bill",18,3000000);

  table1.addPlayer(&player1);
  player1.receiveCard(10);
  player1.receiveCard(20);
  player1.printStatus();

  dealer1.shuffle();
  player1.receiveCard(23);
  player1.receiveCard(118);

  player1.printStatus();

  player player2("Alex",18,400000);
  table1.addPlayer(&player2);
  player2.receiveCard(41);
  player2.receiveCard(12);
  player2.printStatus();

}
