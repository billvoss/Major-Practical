#include "table.h"
#include "dealer.h"
#include "player.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int table::ID=0;

table::table(dealer* game_dealer)
:table_id(ID)
{
	the_dealer = game_dealer;
	numberplayers = 0;
	ID++;
}

int table::getNumberPlayers()
{
	return numberplayers;
}

void table::addPlayer(player* p)
{
	players[numberplayers] = p;
	p->setDealer(the_dealer);
	numberplayers++;
}

int table::getID()
{
	return ID;
}

dealer* table::getDealer()
{
	return the_dealer;
}

table::~table()
{
}
