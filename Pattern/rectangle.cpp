#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>rows;
    cin>>cols;
    for(int i=0;i<rows;i++){
        for(int i=0;i<cols;i++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
