#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>=i;j--){
            cout<<rows-j+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}
