#ifndef table_h
#define table_h

class table
{
public:
	table(dealer dealer1); //class constructor receieves a dealer object
	int getID() //Return the table ID number
	~table(); //class destructor
protected:
private:
	static int ID; 
};
#endif
