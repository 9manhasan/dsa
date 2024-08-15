#include<iostream>
#include<vector>
using namespace std;

bool lemonadeChange(vector<int> bills)
{
  //to track number bills
  int dollar5 = 0, dollar10 = 0;
  for(int i = 0;i<bills.size();i++)
    {
      //we will track the number of 5 dollar bills
      if(bills[i] == 5)
      {
        dollar5++;
      }
      else if(bills[i] == 10)
      {
        //we will decrement the bill and track 10 dollar bills 
        if(dollar5 > 0)
        {
          dollar5--;
          dollar10++;
        }
          // if not exist then return false
        else 
        {
          return false;
        }
      }
      else
      {
        if(dollar5 > 0 && dollar10 > 0)
        {
          dollar5--;
          dollar10--;
        }
        else if(dollar5 >= 3)
        {
          dollar5 -= 3;
        }
        else 
        {
          return false;
        }
      }
    }
  return true;
}
int main()
{
  vector<int> bills = {5,5,5,10,20};
  bool res = lemonadeChange(bills);
  cout<<res<<endl;
  return 0;
}