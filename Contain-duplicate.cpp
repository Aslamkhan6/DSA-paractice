#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,56,7,9,1,68,0,20,30,40,60};
    bool hasduplicate = false;
     int visited;

    for(int i = 0;i<13; i++){
            visited = arr[i];
       for(int j = i+1; j<13;j++){
        if(arr[j]==visited){
            hasduplicate = true;
            break;
            
        }
       }
    }
    cout<<hasduplicate<<endl;
    return 0;
}