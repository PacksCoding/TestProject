#include <iostream>
using namespace std;

int main()
{
  int getFirstNumber;
  int getSecondNumber;
  int giveAnswer;
  
  cout << "First number:";
  cin >> getFirstNumber;
  
  cout << "Second number";
  cin >> getSecondNumber;
  
  giveAnswer = getFirstNumber + getSecondNumber;
  cout << "Answer: " << giveAnswer << endl;
  return 0;
}
