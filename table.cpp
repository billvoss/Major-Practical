#include "table.h"
#include "dealer.h"
#include "player.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Static variable inital value
int table::ID=0;

//Table constructor
table::table(dealer* game_dealer)
:table_id(ID)
{
	//Initialses variables, increments ID
	the_dealer = game_dealer;
	numberplayers = 0;
	ID++;
}

//Returns number of players
int table::getNumberPlayers()
{
	return numberplayers;
}

//Adds player to table
void table::addPlayer(player* p)
{
	//Checks at most five players are at table
	if(numberplayers<6)
	{
		//Adds player to players array
		players[numberplayers] = p;
		//Calls setDealer function in player being added, gives dealer location
		p->setDealer(the_dealer);
		//Increments number of players
		numberplayers++;
	}
	else
	//Rejects additional player
	{
		cout<<"The table is full, new player not added."<<endl;
	}
}

//Return the table ID number
int table::getID()
{
	return ID;
}

//Returns the location of the dealer
dealer* table::getDealer()
{
	return the_dealer;
}

//Trivial destructor
table::~table()
{
}
