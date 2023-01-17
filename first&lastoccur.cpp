/*
#include <bits/stdc++.h> 
int firstocc(vector<int>& arr,int n,int k)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            ans=mid;// here don't code mid=ans*** ye galat hai as hame ans me mid ko store krna hai.......
            end=mid-1;
        }
        else if(k>arr[mid])
        {
            start=mid+1;
        }
        else if(k<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;   
}
int lastocc(vector<int>& arr,int n,int k)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            start=mid+1;
        }
        else if(k>arr[mid])
        {
            start=mid+1;
        }
        else if(k<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;   
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstocc(arr,n,k);
    p.second=lastocc(arr,n,k);
    return p;
           
}
*/