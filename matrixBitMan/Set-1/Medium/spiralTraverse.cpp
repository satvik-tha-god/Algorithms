Problem link: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
Solution:
vector<int> spirallyTraverse(int r, int c, int matrix[r][c])
{   
    int rowst=0,colst=0,rowen=r-1,colen=c-1;
    vector<int> temp;
    while(rowst<=rowen&&colst<=colen){
        //rowst
        for(int col=colst;col<=colen;col++){
            temp.push_back(matrix[rowst][col]);
        }
        rowst++;
        //colen
        for(int row=rowst;row<=rowen;row++){
            temp.push_back(matrix[row][colen]);
        }
        colen--;
        //rowen
        for(int col=colen;col>=colst;col--){
            temp.push_back(matrix[rowen][col]);
        }
        rowen--;
        //colst
        for(int row=rowen;col>=rowst;row--){
            temp.push_back(matrix[row][colst]);
        }
        colst++;
    }
    return temp;
}
