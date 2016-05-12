#include <iostream>
#include "person.h"
#include "dealer.h"
#include "player.h"
#include "table.h"

using namespace std;

int main()
{
  dealer dealer1("Alex",18);
  table table1(dealer1);

  player player1("Bill",18,3000);
  table1.addPlayer(player1);

  cout<<table1.getNumberPlayers();
}
