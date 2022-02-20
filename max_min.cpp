#include<iostream>
using namespace std;

int main(){
    int arr[]={25,6,7,-41,99,10,15,1};
    int max=arr[0],min=arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (max<arr[i])
            max=arr[i];
        if (min>arr[i])
            min=arr[i];
        
    }
    cout<<max<<endl<<min;
    
}