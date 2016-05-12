#ifndef table_h
#define table_h

#include "dealer.h"

class table
{
public:
	table(dealer game_dealer); //class constructor receieves a dealer object
	int getID() //Return the table ID number
	~table(); //class destructor
protected:
private:
	static int ID;
	int table_id;
	dealer my_dealer
};
#endif
