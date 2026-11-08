#include<iostream>
using namespace std;
int main(){
    int arr[]={12,14,3435,35,345,235,12};
    int sum=0;
    int odd=0;
    int diff=0;
    for(int i=0;i<7;i++){
        if(i%2==0){
            sum+=arr[i];
            
        }

    }
    cout<<endl;
    for(int j=0;j<7;j++){
        if(j%2!=0){
            odd+=arr[j];
            
        }
    }
    diff=sum-odd;
   cout<<endl;
    cout<<diff;
    
}        