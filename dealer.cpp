#include "person.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

dealer::dealer()
{
  //creates a vector filled with two decks of cards in sequential order
  for(int i=0; i<2; i++)
  {
    for(int card = 1;card<53;card++)
    {
      cards.pushback(card);
    }
  }
}

void leaveTable()
{

}

void printStatus()
{
  cout<<"I am a dealer."<<endl;
  cout<<"Name:"<<name<endl;
}

dealer::~dealer()
