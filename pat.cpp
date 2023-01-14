#include <iostream>
using namespace std;
int main() {
    int i;int n;int a;
cin>>n;
    for(i=1;i<=n;i++){
        
        if(i-1==0)
    {for(int l=1;l<=n;l++)
        cout<<"# ";
    }

    
        else{
           int a=i-1;
            for(int j=1;j<=a;j++)
            {
                cout<<"  ";
            }
            for(int k=i;k<=n;k++){
                cout<<"# ";
            }
            
            }
    cout<<endl;
        
    }
    
    return 0;
    
}

/*
# # # # #
  # # # #
    # # #
      # #
        #


*/
