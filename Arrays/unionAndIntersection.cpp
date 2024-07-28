#include<iostream>
#include<set>
using namespace std;

void unionArray(int[],int[],int,int);
void intersectionArray(int[],int[],int,int);
int main()
{
    int size1;
    cout<<"Enter the size of the array:";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the array elements";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of the array:";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the array elements";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
       
    unionArray(arr1,arr2,size1,size2);

    intersectionArray(arr1,arr2,size1,size2);
}

//union
void unionArray(int arr1[],int arr2[],int size1,int size2)
{
    set<int> unionSet;
    for(int i=0;i<size1;i++)
    {
        unionSet.insert(arr1[i]);
    }
    for(int i=0;i<size2;i++)
    {
        unionSet.insert(arr2[i]);
    }
    cout<<"Union Array:";
    for(int num:unionSet)
    {
        cout<<num<<" ";
    }
}

//intersection
void intersectionArray(int arr1[],int arr2,int size1,int size2)
{
    
}