#include <iostream>
using namespace std;
int main(){
    
    int x;
    cout<<"Enter value for x= "<<endl;
    cin>>x;
    int *arr=new int [x];
    
    
    int highest=0;
    for (int i=0;i<x;i++){
        cin>>arr[i];
        if (arr[i]>highest){
            highest=arr[i];
        }
    }
    
    
    int *arr2=new int [x+1];
    
    for (int i=0;i<highest+1;i++){
        arr2[i]=0;
    }
    
    for (int i=0;i<x;i++){
        arr2[arr[i]]++;
    }
    
    for (int i=0;i<highest+1;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    int a=0;
    
    for (int i=0;i<highest+1;i++){
        if (arr2[i]==0){
            continue;
        }
        else{
            arr[a]=i;
            a++;
            arr2[i]--;
            i--;
        }
    }
    
    for (int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
