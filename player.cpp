#include "person.h"
#include "player.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

player::player(string p_name, int p_age, double p_money)
:person(p_name, p_age, p_money)
{
}

void player::leaveTable()
{

}

void player::receiveCard()
{
  //cout<<table_id<<endl;
  the_dealer->sendCard();
}

void player::printStatus()
{

}

player::~player()
{
}
