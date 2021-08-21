Problem Link: https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1

Solution:
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> temp;
        int m=Mat.size();
        int n=Mat[0].size();
        for(auto i:Mat)
        temp.insert(temp.end(),i.begin(),i.end());
        sort(temp.begin(),temp.end());
        int counter=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                Mat[i][j]=temp[counter++];
            }
        }
        return Mat;// code here
    }
};