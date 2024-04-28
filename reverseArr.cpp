#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,3,2,1,0};
    int n = 6,temp;
    int k=n;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[k-1];
        arr[k-1]=temp;
        k--;
    }
    cout<<"reverse of an array : ";
    for(int j=0;j<n;j++)
    cout<<arr[j];
}
