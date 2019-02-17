#include <iostream>
#include <cstring>
using namespace std;

int addCoins(float Quarters,float Dimes, float Nickels){
    float Total =(Quarters*0.25)+(Dimes*0.10)+(Nickels*0.05);
    return Total;
}

int main()
{
    float Total=0, Quarters=0, Dimes=0, Nickels=0;
    Total=addCoins((Quarters*0.25),(Dimes*0.10),(Nickels*0.05));
    cout<<"Enter the number of Quarters :"<<endl;
    cin>>Quarters;
    cout<<"Enter the number of Dimes :"<<endl;
    cin>>Dimes;
    cout<<"Enter the number of Nickels :"<<endl;
    cin>>Nickels;
    Total=(Quarters*0.25)+(Dimes*0.10)+(Nickels*0.05);
    cout<<"The total amount is : $"<<Total<<endl;

  return 0;
}
