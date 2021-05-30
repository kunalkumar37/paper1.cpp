#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }

    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[0])
        {
            cout<<"The smallest element is "<<arr[0]<<" and second Smallest element is "<<arr[i]<<endl;
            break;

        }
    }
    
    return 0;
}