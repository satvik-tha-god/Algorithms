#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int count=i;count>=1;count--){
            cout<<count;
        }
        for(int count=2;count<=i;count++){
            cout<<count;
        }
        cout<<endl;
    }

    return 0;
}
