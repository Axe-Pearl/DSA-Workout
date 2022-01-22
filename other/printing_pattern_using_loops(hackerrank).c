#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int t = n*2-1;
    int a[t][t];
    int x = n,i = 0, j = 0; 
    int start = 0,end = t-1, depth = 0;
   while(depth<n){
      i = start, j = start;
      while(j<=end){
          a[i][j] = x;
          a[j][i] = x;
          j++;
      }
      i = end;
      j = start;
      while(j<=end){
          a[i][j] = x;
          a[j][i] = x;
          j++;
      }
      depth++;
      start++;
      end--;
      x--;
   }
   
   for(i = 0;i<t;i++){
       for(j=0;j<t;j++){
           printf("%d ",a[i][j]);
       }
       printf("\n");
   }
}
