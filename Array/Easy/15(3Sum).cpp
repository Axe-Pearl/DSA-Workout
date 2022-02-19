class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        for(int i=0;i<nums.size();i++){
            int first = i;
            int p = first+1;
            int q = n-1;
            while(p<q){
                int tempSum = nums[first]+nums[p]+nums[q];
                if(tempSum<0){p++;}
                else if(tempSum>0){q--;}
                else{
                    temp.push_back(nums[first]);
                    temp.push_back(nums[p]);
                    temp.push_back(nums[q]);
                    res.insert(temp);
                    temp.clear();
                    p++;
                    q--;
                }
            }  
        }
        vector<vector<int>>v(res.begin(),res.end());
        return v;
    }
};
