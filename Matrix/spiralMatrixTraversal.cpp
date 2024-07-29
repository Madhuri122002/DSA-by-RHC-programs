#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the number of ros and columns of the matrix:"<<endl;
    cin>>row>>col;
    vector<vector<int>> matrix(row,vector<int>(col));
    cout<<"Enter the elements inside the matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }

    //spiral traversal

    cout<<"The spiral traversal of the matrix is as follows:"<<endl;
    int top=0,bottom=matrix.size()-1;
    int left=0, right=matrix[0].size()-1;

    if(matrix.empty() || matrix[0].empty())
        cout<<"The matrix is empty";
    
    else{
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<matrix[top][i]<<" ";
            }
            top++;

            for(int i=top;i<=bottom;i++)
            {
                cout<<matrix[i][right]<<" ";
            }
            right--;

            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    cout<<matrix[bottom][i]<<" ";
                }
                bottom--;
            }

            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    cout<<matrix[i][left]<<" ";
                }
                left++;
            }
        }
    }
}