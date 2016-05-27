#ifndef TABLE_H
#define TABLE_H

#include "person.h"
#include "dealer.h"
#include "player.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class table
{
public:
	//Constructor receieves a dealer pointer
	table(dealer* game_dealer);
	//Adds player to table
	void addPlayer(player* p);
	//Returns number of players
	int getNumberPlayers();
	//Return the table ID number
	int getID();
	//Returns the location of the dealer
	dealer* getDealer();
	//Trivial destructor
	~table();
private:
	//Static table ID
	static int ID;
	//Specific table ID
	int table_id;
	//Dealer location
	dealer* the_dealer;
	int numberplayers;
	//Array of players
	player* players[5];
};
#endif
