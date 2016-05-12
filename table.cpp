
#include "table.h"
#include "dealer.h"

int table::ID=0;

table::table(dealer game_dealer)
{
	my_dealer = &game_dealer;
	table_id = ++ID;
}

table::int getID()
{
	return ID;
}

table::~table()
{
}
