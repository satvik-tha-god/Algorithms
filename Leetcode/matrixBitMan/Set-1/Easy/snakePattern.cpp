Problem link: https://practice.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1/?category[]=Matrix&category[]=Matrix&page=1&query=category[]Matrixpage1category[]Matrix#
Solution:
void printSnakePattern(int mat[M][N])
{
// Traverse through all rows
for (int i = 0; i < M; i++) {
// If current row is even, print from
// left to right
if (i % 2 == 0) {
for (int j = 0; j < N; j++)
cout << mat[i][j] << " ";
// If current row is odd, print from
// right to left
} else {
for (int j = N - 1; j >= 0; j--)
cout << mat[i][j] << " ";
}
}
}
