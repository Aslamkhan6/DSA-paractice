#include<iostream>
using namespace std;
int main(){
   int arr[] = {5, 8, 2, 3, 1, 7,8,12,5};
   int lowest = arr[0];
   int profit = 0;
   int bestbuy=0;
   int np;
   int currentbuy;
   int sell;
   for(int i = 1; i<9;i++){
    if(arr[i]<lowest)
    {
        lowest = arr[i];
       currentbuy = i;

        
    }
    np = (arr[i]-lowest);

    if(np>profit){
   profit = np;
   bestbuy = currentbuy;
   sell = i;
   
    }
   }
   cout<<"buy at "<<bestbuy<<endl;
   cout<<"sell at "<<sell<<endl;
   cout<<profit<<endl;
   return 0;

}