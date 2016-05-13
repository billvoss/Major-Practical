#include "person.h"
#include "dealer.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

dealer::dealer(string p_name, int p_age)
:person(p_name, p_age, 0)
{
  //creates a vector filled with two decks of cards in sequential order
  for(int i=1; i<3; i++)
  {
    for(int card = 1;card<53;card++)
    {
      cards.push_back(card);
    }
  }
}

void dealer::shuffle()
{
  random_shuffle(cards.begin(),cards.end());
}

void dealer::leaveTable()
{
}

int* dealer::sendCard()
{
  int* tempcard = new int;
  *tempcard = cards.back();
  cards.pop_back();
  return tempcard;
}

void dealer::printStatus()
{
  cout<<"\nI am a dealer."<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Profit: "<<money<<endl;
  cout<<"Number of cards: "<<cards.size()<<endl;
  cout<<"Current cards:"<<endl;

  for(int i=0;i<cards.size();i++)
  {
    switch(cards[i])
    {
      case 1:
      cout<<"A♣"<<endl;
      break;
      case 2:
      cout<<"2♣"<<endl;
      break;
      case 3:
      cout<<"3♣"<<endl;
      break;
      case 4:
      cout<<"4♣"<<endl;
      break;
      case 5:
      cout<<"5♣"<<endl;
      break;
      case 6:
      cout<<"6♣"<<endl;
      break;
      case 7:
      cout<<"7♣"<<endl;
      break;
      case 8:
      cout<<"8♣"<<endl;
      break;
      case 9:
      cout<<"9♣"<<endl;
      break;
      case 10:
      cout<<"10♣"<<endl;
      break;
      case 11:
      cout<<"J♣"<<endl;
      break;
      case 12:
      cout<<"Q♣"<<endl;
      break;
      case 13:
      cout<<"K♣"<<endl;
      break;
      case 14:
      cout<<"1♦"<<endl;
      break;
      case 15:
      cout<<"2♦"<<endl;
      break;
      case 16:
      cout<<"3♦"<<endl;
      break;
      case 17:
      cout<<"4♦"<<endl;
      break;
      case 18:
      cout<<"5♦"<<endl;
      break;
      case 19:
      cout<<"6♦"<<endl;
      break;
      case 20:
      cout<<"7♦"<<endl;
      break;
      case 21:
      cout<<"8♦"<<endl;
      break;
      case 22:
      cout<<"9♦"<<endl;
      break;
      case 23:
      cout<<"10♦"<<endl;
      break;
      case 24:
      cout<<"J♦"<<endl;
      break;
      case 25:
      cout<<"Q♦"<<endl;
      break;
      case 26:
      cout<<"K♦"<<endl;
      break;
      case 27:
      cout<<"A♥"<<endl;
      break;
      case 28:
      cout<<"2♥"<<endl;
      break;
      case 29:
      cout<<"3♥"<<endl;
      break;
      case 30:
      cout<<"4♥"<<endl;
      break;
      case 31:
      cout<<"5♥"<<endl;
      break;
      case 32:
      cout<<"6♥"<<endl;
      break;
      case 33:
      cout<<"7♥"<<endl;
      break;
      case 34:
      cout<<"8♥"<<endl;
      break;
      case 35:
      cout<<"9♥"<<endl;
      break;
      case 36:
      cout<<"10♥"<<endl;
      break;
      case 37:
      cout<<"J♥"<<endl;
      break;
      case 38:
      cout<<"Q♥"<<endl;
      break;
      case 39:
      cout<<"K♥"<<endl;
      break;
      case 40:
      cout<<"A♠"<<endl;
      break;
      case 41:
      cout<<"2♠"<<endl;
      break;
      case 42:
      cout<<"3♠"<<endl;
      break;
      case 43:
      cout<<"4♠"<<endl;
      break;
      case 44:
      cout<<"5♠"<<endl;
      break;
      case 45:
      cout<<"6♠"<<endl;
      break;
      case 46:
      cout<<"7♠"<<endl;
      break;
      case 47:
      cout<<"8♠"<<endl;
      break;
      case 48:
      cout<<"9♠"<<endl;
      break;
      case 49:
      cout<<"10♠"<<endl;
      break;
      case 50:
      cout<<"J♠"<<endl;
      break;
      case 51:
      cout<<"Q♠"<<endl;
      break;
      case 52:
      cout<<"K♠"<<endl;
      break;
    }
  }
}

dealer::~dealer()
{
}
