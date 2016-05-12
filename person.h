#ifndef person_h
#define person_h

#include <vector>

//Abtract class
class person
{
public:
	string getName();  //Returns the name of the person
	int getAge(); //Returns the age of the person
	double getMoney(); //Retruns the amount of money in cents
	string setName(); //Sets the name of the person
	double setAge(); //Sets the age of the person
	double addMoney(); //Add money to the particiapnt funds
	virtual void leaveTable() =0; //pure virtual function. Function have different meaning from particpants and dealer
	virtual void printStatus(); //Prints different information for each participants and the dealer
protected:
	vector<string> cards[][];
private:
	string name;
	double money;
};
#endif
