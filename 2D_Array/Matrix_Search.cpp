#include<iostream>
using namespace std;
const int MAXN = 100;

void Brute_Search(int mat[][MAXN],int n,int m, int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                cout<<"Found at "<<i<<","<<j;
                return;
            }
        }
    }
    cout <<"not found";
}

void Binary_Search(int mat[][MAXN], int n, int m, int target) {
    for (int j = 0; j < m; j++) {
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = (lo+hi)/ 2;
            if (mat[mid][j] == target) {
                cout << "Found at "<<mid<<","<<j;
                return;
            }
            else if (mat[mid][j] < target) lo = mid + 1;
            else                           hi = mid - 1;
        }
    }
    cout<<"NOT FOUND!";
    return;
}
void Stair_Search(int mat[][MAXN],int n,int m,int key){
    int i = 0, j = m-1;
    while(i<n && j>=0){
        int cell = mat[i][j];
        if(cell == key)cout<<"Found at "<<i<<","<<j;
        if(cell<=key) i++;
        else j--;
    }
}
int main(){
    int m,n;
    cout << "Enter Row and columns of matrix:";
    cin >> n;
    cin >> m;
    int mat[100][100];
    cout << "Enter elements of matrix";
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }
    int key;
    cout << "Element to search:";
    cin>> key;
    Brute_Search(mat, n, m, key);
    Binary_Search(mat,  n,  m,  key);
    Stair_Search(mat,  n,  m,  key);

    return 0;
}
