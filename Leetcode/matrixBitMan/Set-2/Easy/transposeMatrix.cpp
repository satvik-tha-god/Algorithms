Problem Link:https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1/
Solution:
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
       int temp;
       for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
               temp=matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
               
           }
       } // code here 
    }
};