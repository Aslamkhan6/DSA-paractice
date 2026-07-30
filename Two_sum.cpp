#include<iostream>
using namespace std;
int main(){
    int arr[]= {4,7,2,8,10,3,8,1,3,4,5,7,2,3,5,2,4,9,3,4,6,2,5,35,8,1,3,0,8,6,7};
    int sum = 0;
    
    for(int i =0;i<30;i++)
    {
        sum = arr[i] + arr[i+1];
        if(sum == 9){
            cout<<i;
            cout<<" "<<i+1<<endl;
        }
        sum = 0;

    }
    return 0;
}