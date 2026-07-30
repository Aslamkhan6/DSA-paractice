#include<iostream>
using namespace std;
int main(){
    int arr[]= {4,7,2,8,10,3,8,1,3,4,5,7,2,3,5,2,4,9,3,4,6,2,5,35,8,1,3,0,8,6,7};
  int target;
  cout<<"Enter the target: ";
    cin >> target;
    int first = 0;
    int second = 1;
    int length = sizeof(arr)/  sizeof(arr[0]);;
   while(first != length-1){
    if((arr[first] + arr[second]) == target){
        cout<<first<<" "<<second<<endl;
    }
      second++;
    if(second == length-1){
        first++;
        second = first + 1;
    }
  
   }

   return 0;
}