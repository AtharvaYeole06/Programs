#include <iostream>
using namespace std;

void spiralm(int mat[][4], int n, int m)
{
    int sr = 0, sc =0, er = n-1, ec = m-1;

    while(sr<=er&&sc<=ec)
    {

        //top
        for(int i = sc; i<=ec; i++)
        cout << mat[sr][i] << " ";

        //right
        for(int j=sr+1; j<=er; j++)
        cout << mat[j][ec] << " ";

        //bottom 
        for(int k =ec-1; k>=sc; k--)
        cout << mat[er][k] << " ";

        //left
        for(int l=er-1; l>=sr+1; l--)
        cout << mat[l][sc] << " ";
        sr++;
        sc++;
        er--;
        ec--;
        
    }
}
int main() 
{
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
    spiralm(mat,row,col);
  return 0;
}