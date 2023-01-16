#include <iostream>
using namespace std;
int main() {
  /*1
    22
    303
    4004
    50005
    600006
    i-2
    */
    int n;
    cin>>n;
for(int i=1;i<=n;i++){
    
  {
        if((i-2)<=0){
            for(int k=1;k<=i;k++)
            cout<<i;
        }
        else{
            for(int j=1;j<=1;j++){
                cout<<i;
            }
            for(int l=1;l<=i-2;l++){
                cout<<0;
            }
            for(int m=i;m<=i;m++){
                cout<<i;
            }
        }
    }
    cout<<endl;
}
    return 0;
}
