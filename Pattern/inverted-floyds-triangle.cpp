#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<count;
            count++;
        }
        cout<<endl;
    }

}
