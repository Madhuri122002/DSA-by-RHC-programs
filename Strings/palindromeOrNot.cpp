#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input;
    cout<<"Enter a string:"<<endl;
    cin>>input;
    int size=input.length();
    bool isPalindrome=true;
    for(int i=0;i<size/2;i++)
    {
        if(input[i]!=input[size-1-i]){
            isPalindrome=false;
            break;
        }   
    }
    if(isPalindrome)
    {
        cout<<"The string is palindrome"<<endl;
    }
    else
    {
        cout<<"The string enetred is not palindrome"<<endl;
    }
}