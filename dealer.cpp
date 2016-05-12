#include "person.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

dealer::dealer()
:person()
{
  //creates a vector filled with two decks of cards in sequential order
  for(int i=0; i<2; i++)
  {
    for(int card = 1;card<53;card++)
    {
      cards.push_back(i*card);
    }
  }
}

void leaveTable()
{
 cout<<"hi";
}

void printStatus()
{
  cout<<"I am a dealer."<<endl;
  //cout<<"Name:"<<name<<endl;
}

dealer::~dealer()
{

}
