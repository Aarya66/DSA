#include<iostream>
#include<limits.h>
using namespace std;
int find_mini(int arr[],int N)
{
    int mini=INT_MAX;
    for(int i=0;i<N;i++)
    {
        if(arr[i]<mini)
            mini=arr[i];
    }
    return mini;
}
int find_max(int arr[],int N)
{
    int max=INT_MIN;
    for(int i=0;i<N;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int arr[]={12,8,6,1,7,15};
    int N=6;
    cout<<"minimum element of an array "<<find_mini(arr,N)<<endl;
    cout<<"maximum element of an array "<<find_max(arr,N)<<endl;
}
