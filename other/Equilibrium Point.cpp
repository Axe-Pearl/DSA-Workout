//solution for Equilibrium Point(GFG) - https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1#
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
       int leftSum = 0, rightSum = 0;
       int ans = -1;
       for(int i = 0;i<n;i++){
           rightSum+=a[i];
       }
      for(int i = 0;i<n;i++){
          rightSum-=a[i];
          if(leftSum == rightSum){
              ans = i+1;
              break;
          }
          leftSum+=a[i];
      }
      return ans;
    }

};
