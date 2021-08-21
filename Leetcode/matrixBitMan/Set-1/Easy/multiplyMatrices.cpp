Problem link: https://practice.geeksforgeeks.org/problems/multiply-matrices/1/?page=1&category[]=Matrix&query=page1category[]Matrix
Solution:
void multiply(int A[][100], int B[][100], int C[][100], int N)
{
      for(int i=0;i<100;i++){
          for(int j=0;j<100;j++){
              C[i][j]=0;
              for(int k=0;k<N;k++){
                  C[i][j]+=A[i][k]*B[k][j];
              }
          }
      }
      //add code here.
}