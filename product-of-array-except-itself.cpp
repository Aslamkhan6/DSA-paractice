#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,5,7,6,8};
    int arr2[5];
    int product = 1;
    for(int i =0; i<5;i++){
        for(int j = 0;j<5;j++){
            if(j == i){
                continue;
            }
            product*=arr[j];
          
            
        }
         arr2[i]= product;
        
       
         product = 1;
      
       
    }


    for(int k = 0;k<(5);k++){
        cout<<arr2[k]<<endl;
    }
    return 0;
}