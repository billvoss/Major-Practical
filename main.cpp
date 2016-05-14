#include <iostream>
#include "person.h"
#include "dealer.h"
#include "player.h"
#include "table.h"

using namespace std;

int main()
{

  dealer dealer1("Alex",18);
  dealer1.shuffle();

  table table1(&dealer1);

  player player1("Bill",18,3000);

  table1.addPlayer(&player1);
  player1.receiveCard();
  player1.receiveCard();
  player1.printStatus();

  dealer1.shuffle();
  player1.receiveCard();
  player1.receiveCard();

  player1.printStatus();

  player player2("Alex",18,40000);

  table1.addPlayer(&player2);
  table1.addPlayer(&player2);
  table1.addPlayer(&player2);
  table1.addPlayer(&player2);
  table1.addPlayer(&player2);
  table1.addPlayer(&player2);
  table1.addPlayer(&player2);
  player2.receiveCard();
  player2.receiveCard();
  player2.printStatus();


}
