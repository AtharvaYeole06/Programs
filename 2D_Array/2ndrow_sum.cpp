/*Print out the sum of the numbers in the second row of the“nums” array*/
#include <iostream>
using namespace std;

int second_row_sum(int mat[][100],int n,int m);
int main() {
    int row,col;
    cout << "Enter row and col: ";
    cin >> row >> col;
    int mat[100][100];
    cout << "Enter the elements of matrix:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> mat[i][j];
        }
    }
    int ans = second_row_sum(mat, row, col);
    cout << "The sum of 2nd row is:" << ans << endl;
  return 0;
}
int second_row_sum(int mat[][100],int n,int m){
    int sum = 0;
    for(int i = 0;i<m;i++){
       sum+= *(*(mat+1)+i);
    }
    return sum;
}
