#include "person.h"
#include "dealer.h"
#include "player.h"
#include "table.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//Checks for flags
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

  //Quits if input is anything but 'y'
  if(stringinput != "y")
  {
    cout<<"Goodbye."<<endl;
    return 0;
  }

  //Takes basic information and creates a dealer
  cout<<"Table created. What is your dealers:"<<endl;
  cout<<"Name:";
  cin>>stringinput;
  cout<<"Age:";
  cin>>numberinput;
  dealer dealer1(stringinput,numberinput);

  //Only shuffles deck if no flags are placed
  if(argc==1)
  {
    dealer1.shuffle();
  }

  //Creates table object, using address of the dealer
  table table1(&dealer1);

  //Checks desired number of players
  cout<<"The number of players: ";
  cin>>numberplayers;
  //Dynamically allocates correctly sized array of player objects
  player* temp = new player[numberplayers];
  counter_2 = 0;
  counter_3 = 0;

  //Adds first player if desired
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

  //Adds second player if desired
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

  //Adds third player if desired
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

  //Adds fourth player if desired
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

  //Adds fifth player if desired
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
    //Gives player first card, prints information
    players[i].receiveCard(0);
    cout<<"\n"<<players[i].getName()<<", you have received your first card. Your current status is:\n";
    players[i].printStatus();

    anothercard = 1;

    //Keeps giving another card while anothercard is true
    while(anothercard == 1)
    {
      cout<<"Would you like another card? y/n\n";
      cin>>stringinput;
      if(stringinput == "y")
      {
        //Gives another card if input is 'y'
        cout<<"What wager would you like to place for this card:";
        cin>>doubleinput;
        //Adds card to cards vector
        players[i].receiveCard(doubleinput);
        cout<<"You have received another card. Your current status is:\n";
        players[i].printStatus();
      }
      else
      {
        //Does not give another card if input is anything but 'y'
        anothercard = 0;
      }
    }
    cout<<"\n"<<players[i].getName()<<", your turn is over"<<endl;
  }

//Dealer automatically plays in an optimum manner
int dealervalue = dealer1.play();

//Displays results of game if desired
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
        //Displays information for each player
        cout<<"Congratulations "<<players[i].getName()<<",  you beat the dealer."<<endl;
        cout<<"You have made a profit of $"<<players[i].getWager()<<endl;
        players[i].addMoney(players[i].getWager());
        cout.precision(2);
        cout<<"You now have $"<<players[i].getMoney()<<endl;
        //At least one player has won, therefore sets flag to false
	      flag = false;
      }
    }
  }
}
else
{
  //Deletes dynamically allocated memory
  delete [] temp;
  return 0;
}

//Displays if no players win
if(flag)
{
 cout<<"\n"<<"Dealer wins"<<endl;;
 cout<<"Gameover"<<endl;
}

//Deletes dynamically allocated memory
delete [] temp;

return 0;
}
