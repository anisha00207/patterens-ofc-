
   #include <iostream> 
   #include <cmath>
   using namespace std;
   int main()
   { int n;
   cin>> n;
   for(int i=1; i<=n ; i++){
       if(i==1|| i==n){
           for(int j=1;j<=n;j++)
           cout<<"# ";
       }
       else{
           for(int j=1;j<=1;j++){
               cout<<"#";
           }
           for(int k=1;k<=n-1;k++){
               cout<<"  ";
           }
            for(int l=n;l<=n;l++){
               cout<<"#";
           }
           
          
       }
       cout<<endl;
   }
       return 0;
   }
/*# # # # # # 
 #          #
 #          #
 #          #
 #          #
 # # # # # # 
 */
