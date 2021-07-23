#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int k=0;k<=i-1;k++){
            cout<<" ";
        }
        for(int j=0;j<rows;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
