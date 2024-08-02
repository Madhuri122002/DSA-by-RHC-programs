#include<iostream>
#include<vector>

using namespace std;

int firstOcc(vector<int> v,int size, int key)
{
    int ans=-1;
    int low=0,high=size-1,mid=low+(high-low)/2;
    while(low<=high)
    {
        if(key==v[mid])
        {
            ans=mid;
            high=mid-1;
        }
        else if(key>v[mid])
        {
            low=mid+1;
        }
        else if(key<v[mid])
        {
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}

int lastOcc(vector<int> v,int size, int key)
{
    int ans=-1;
    int low=0,high=size-1,mid=low+(high-low)/2;
    while(low<=high)
    {
        if(key==v[mid])
        {
            ans=mid;
            low=mid+1;
        }
        else if(key>v[mid])
        {
            low=mid+1;
        }
        else if(key<v[mid])
        {
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}

int main()
{
    int size;
    cout<<"Enter the size:"<<endl;
    cin>>size;
    vector<int> v(size);
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }
    int k;
    cout<<"Enter the key:"<<endl;
    cin>>k;
    cout<<"First occurance of the element is at index: "<< firstOcc(v,size,k)<<endl;
    cout<<"Last occurance of the element is at index: "<< lastOcc(v,size,k)<<endl;

    return 0;
}