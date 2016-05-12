class dealer: public person
{
public:
  void shuffle();
  void deal();
  void giveCard();
  void play();
  virtual void leaveTable();
  virtual void printStatus();
private:
}
