#include<iostream>
using namespace std;

int binaryserarching(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }

        mid=(start+end)/2;
    }
    return -1;
}
int main()
{

    int even[6]={2,5,6,5,8,4};
    int odd[5]={1,3,5,6,8};
    int ans=binaryserarching(odd,5,3);
    cout<<"position is: "<<ans<<endl;





cout<<"everything is runnig"<<endl;
    return 0;
}