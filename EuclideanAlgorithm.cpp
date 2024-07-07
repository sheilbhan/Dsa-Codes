#include<iostream>
using namespace std;

int findGcd(int x, int y)
{
    while(x > 0 && y>0){
        if(x>y){
            x = x%y;
        }
        else
         y = y%x;
    }
    if(x == 0)return y;
    return x;
}
int main(){ 

   int x,y;
   cin>>x >> y;

    findGcd(x,y);

   return 0;
}