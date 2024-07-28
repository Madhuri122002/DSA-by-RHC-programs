#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of towers"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the ize of each tower"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cout<<"Enter the k value"<<endl;
    cin>>k;
    sort(v.begin(),v.end());
    int ans=v[n-1]-v[0];
    int smallest=v[0]+k;
    int largest=v[n-1]-k;
    int mini=0,maxi=0;
    for(int i=0;i<n-1;i++)
    {
        mini=min(smallest,v[i+1]-k);
        maxi=max(largest,v[i]+k);
        if(mini<0)
        {
            continue;
        }
        else{
            ans=min(ans,maxi-mini);
        }
    }

    cout<<"Result="<<ans<<endl;
}