#include <iostream>

using namespace std;
void getCofactor(int mat[n][n],int temp[n][n],int p,int q,int n){// Function to get cofactor of mat[p][q] in temp[][]. n is current dimension of mat[][]
    int i=0;
    int j=0;
    for(int row=0;row<n;row++){
         for (int col = 0; col < n; col++){
              //  Copying into temporary matrix only those
            //  element which are not in given row and
            //  column
            if (row != p && col != q){
                temp[i][j++] = mat[row][col];
                // Row is filled, so increase row index and
                // reset col index
                if (j == n - 1){
                    j = 0;
                    i++;
                }
         }
    }
}
int determinantOfMatrix(int mat[n][n],int n){
    int D=0;//initialise
    if(n==1){
        return mat[0][0];//edge case
    }
    int temp[n][n];//we will store cofactors here
    int sign = 1; //to store sign multiplier
    
    for (int f = 0; f < n; f++){// Iterate for each element of first row
        getCofactor(mat, temp, 0, f, n);// Getting Cofactor of mat[0][f]
        D += sign * mat[0][f]* determinantOfMatrix(temp, n - 1);
        sign = -sign;// terms are to be added with alternate sign
    }
 
    return D;
}
/* function for displaying the matrix */
void display(int mat[n][n], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("  %d", mat[i][j]);
        printf("n");
    }
}
 
// Driver program to test above functions
int main()
{
    /* int mat[N][N] = {{6, 1, 1},
                     {4, -2, 5},
                     {2, 8, 7}}; */
 
    int mat[n][n] = { { 1, 0, 2, -1 },
                      { 3, 0, 0, 5 },
                      { 2, 1, 4, -3 },
                      { 1, 0, 5, 0 } };
 
    // Function call
    printf("Determinant of the matrix is : %d",
           determinantOfMatrix(mat, n));
    return 0;
}