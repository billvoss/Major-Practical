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
	table(dealer game_dealer); //class constructor receieves a dealer object
	void addPlayer(player p);
	int getNumberPlayers();
	int getID(); //Return the table ID number
	dealer* getDealer();
	~table(); //class destructor
	static int ID;

protected:
private:
	int table_id;
	dealer* the_dealer;
	int numberplayers;
	player* players[5];
};
#endif
