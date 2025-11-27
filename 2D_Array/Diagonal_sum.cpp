#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout << "Enter row and col: ";
    cin >> row >> col;
    int mat[row][col];
    cout << "Enter the elements of matrix:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> mat[i][j];
        }
    }
    int sum =0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)//primary diagonal
            sum+=mat[i][j];
            else if(j == row-i-1)// secondary diagonal
            sum+=mat[i][j];

        }
    }
    cout << sum;
  return 0;
}