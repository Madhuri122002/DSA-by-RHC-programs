#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the container:"<<endl;
    cin>>size;
    vector<int> v(size);
    cout<<"Enter the array values:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }

    //kanade's algorithm
    int sum=0,maxi=v[0];
    for(int i=0;i<size;i++)
    {
        sum=sum+v[i];
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"The maximum sum="<<maxi;
}