problem link: https://practice.geeksforgeeks.org/problems/max-sum-submatrix2725/1

Solution:
class Solution{
public:
    vector<int> maxSubMatrixSumQueries(vector<int> mat[], int n, int m,
                                   vector<pair<int, int>> &queries, int q) {
        int pre(int mat[m][n], int aux[m][n])
{
for (int i=0; i<n; i++)
aux[0][i] = mat[0][i];
for (int i=1; i<m; i++)
for (int j=0; j<n; j++)
aux[i][j] = mat[i][j] + aux[i-1][j];
for (int i=0; i<m; i++)
for (int j=1; j<n; j++)
aux[i][j] += aux[i][j-1];
}
int sumQuery(int aux[m][n], int tli, int tlj, int rbi,
int rbj)
{
// result is now sum of elements between (0, 0) and
// (rbi, rbj)
int res = aux[rbi][rbj];
// Remove elements between (0, 0) and (tli-1, rbj)
if (tli > 0)
res = res - aux[tli-1][rbj];
// Remove elements between (0, 0) and (rbi, tlj-1)
if (tlj > 0)
res = res - aux[rbi][tlj-1];
if (tli > 0 && tlj > 0)
res = res + aux[tli-1][tlj-1];
return res;
}
// code here
    }
};