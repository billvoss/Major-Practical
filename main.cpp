#include <iostream>
#include "person.h"
#include "dealer.h"
#include "player.h"
#include "table.h"

#include <string>
#include <vector>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
  string stringinput;
  int numberinput;
  int counter_1;
  int counter_2;
  int counter_3;
  int numberplayers;
  double doubleinput;
  bool flag = true;
  player players[5];

  cout<<"Welcome to Blackjack. Would you like to play? y/n"<<endl;
  cin>>stringinput;

  if(stringinput != "y")
  {
    cout<<"Goodbye."<<endl;
    exit (0);
  }

  cout<<"Table created. What is your dealers:"<<endl;
  cout<<"Name:";
  cin>>stringinput;
  cout<<"Age:";
  cin>>numberinput;
  dealer dealer1(stringinput,numberinput);
  if(argc==1)
  {
    dealer1.shuffle();
  }
  table table1(&dealer1);
  
  cout<<"The number of players: ";
  cin>>numberplayers;
  player* temp = new player[numberplayers];
  counter_2 = 0;
  counter_3 = 0;
  
  if(counter_2 < numberplayers)
  {
    cout<<"For your first player, what is their:\nName:";
    cin>>stringinput;
    cout<<"Age:";
    cin>>numberinput;
    player player1(stringinput,numberinput,0);
    table1.addPlayer(&player1);
    temp[counter_3] = player1;
    counter_3++;
    counter_2++;
  }
  if(counter_2 < numberplayers)
  {
    cout<<"For your second player, what is their:\nName:";
    cin>>stringinput;
    cout<<"Age:";
    cin>>numberinput;
    player player2(stringinput,numberinput,0);
    table1.addPlayer(&player2);
    temp[counter_3] = player2;
    counter_3++;
    counter_2++;
  }
  if(counter_2 < numberplayers)
  {
    cout<<"For your third player, what is their:\nName:";
    cin>>stringinput;
    cout<<"Age:";
    cin>>numberinput;
    player player3(stringinput,numberinput,0);
    table1.addPlayer(&player3);
    temp[counter_3] = player3;
    counter_3++;
    counter_2++;
  }
  if(counter_2 <numberplayers)
  {
    cout<<"For your fourth player, what is their:\nName:";
    cin>>stringinput;
    cout<<"Age:";
    cin>>numberinput;
    player player4(stringinput,numberinput,0);
    table1.addPlayer(&player4);
    temp[counter_3] = player4;
    counter_3++;
    counter_2++;
  }
  if(counter_2 <numberplayers)
  {
    cout<<"For your fifth player, what is their:\nName:";
    cin>>stringinput;
    cout<<"Age:";
    cin>>numberinput;
    player player5(stringinput,numberinput,0);
    table1.addPlayer(&player5);
    temp[counter_3] = player5;
  }

  for(counter_1=0; counter_1<numberplayers; counter_1++)
  {
    players[counter_1]= *(temp + counter_1);
  }
  int anothercard = 1;

  for(int i=0; i<numberplayers; i++)
  {
    players[i].receiveCard(0);
    cout<<"\n"<<players[i].getName()<<", you have received your first card. Your current status is:\n";
    players[i].printStatus();

    anothercard = 1;
    while(anothercard == 1)
    {
      cout<<"Would you like another card? y/n\n";
      cin>>stringinput;
      if(stringinput == "y")
      {
        cout<<"What wager would you like to place for this card:";
        cin>>doubleinput;
        players[i].receiveCard(doubleinput);
        cout<<"You have received another card. Your current status is:\n";
        players[i].printStatus();
      }
      else
      {
        anothercard = 0;
      }
    }
    cout<<"\n"<<players[i].getName()<<", your turn is over"<<endl;
  }

int dealervalue = dealer1.play();

cout<<"Continue to results? y/n"<<endl;
cin>>stringinput;
if(stringinput == "y" || "Y")
{
  for(int i=0; i<numberplayers; i++)
  {
    if(players[i].getCardsValue()<22)
    {
      if(players[i].getCardsValue()>dealervalue||dealervalue>22)
      {
        cout<<"Congratulations "<<players[i].getName()<<",  you beat the dealer."<<endl;
        cout<<"You have made a profit of $"<<players[i].getWager()<<endl;
        players[i].addMoney(players[i].getWager());
        cout<<"You now have $"<<players[i].getMoney()<<endl;
	flag = false;
      }
    }
  }
}
else
{
  delete [] temp;
  return 0;
}
if(flag)
{
 cout<<"\n"<<"Dealer wins"<<endl;;
 cout<<"Gameover"<<endl;
}
delete [] temp;
return 0;

}
/*
cout<<"\nThank you.\nHow many players would you like at your table?:";
cin>>numberplayers;
switch(numberplayers)
{
  case 5:
  table1.addPlayer(&player5);
  cout<<"Player5 added"<<endl;
  case 4:
  table1.addPlayer(&player5);
  cout<<"Player4 added"<<endl;
  case 3:
  table1.addPlayer(&player5);
  cout<<"Player3 added"<<endl;
  case 2:
  table1.addPlayer(&player5);
  cout<<"Player2 added"<<endl;
  case 1:
  table1.addPlayer(&player5);
  cout<<"Player1 added"<<endl;
*/
