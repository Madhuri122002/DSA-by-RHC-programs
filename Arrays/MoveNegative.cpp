#include<iostream>
using namespace std;
void insertionSort(int[], int);
void moveAll(int[],int,int);
int main()
{
    cout<<"Enter the size of the array:"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,size);//using insertion sort
    moveAll(arr,0,size-1);//two pointer method
}

//Insertion sort algorithm
void insertionSort(int arr[], int size)
    {
        int i,j,key;
        for(i=1;i<size;i++)
        {
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    cout<<"Output Insertion sort: ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    }

//two pointer method
void moveAll(int arr[],int left,int right)
{
    while(left<=right)
    {
        if(arr[left]<0 && arr[right]<0)
        {
            left+=1;
        }
        else if(arr[left]>0 && arr[right]<0)
        {
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left+=1;
            right-=1;
        }
        else if(arr[left]>0 && arr[right]>0)
        {
            right-=1;
        }
    }
    cout<<"Output Two pointer: ";
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}