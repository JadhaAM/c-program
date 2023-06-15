#include<iostream>
using namespace std;
void rever_arr(int arr[],int start,int end){
    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start ++;
        end--;
    }
}
 void printarry(int arr[],int size)
 {

     for (int i = 0; i < size; i++)
     {
         cout<<arr[i]<<" ";
     }
     
 }   
 int main()
 {
     int arr[]={1,3,2,4,5,6};
     int n =6;
     printarry(arr,n);
     rever_arr(arr,0,n-1);
     cout<<"\n";
     printarry(arr,n);
     return 0;
 }
