#include <iostream>
using namespace std;

 
  int main()
  {int n;
  while(scanf("%d",&n)==1&&n){
  int a[n];
      
     
          long long sum1=0,sum=0;
          int t=0;
          for(int i=0;i<n;i++){
             scanf("%d",&a[i]);
             sum+=a[i];
             }
      
         for(int i=0;i<n-1;i++){
             sum1+=a[i];
             if(sum1==(sum-sum1)){
                t++;
            }

      }
 
         printf("%d\n",t);
     }
 }
	
	

