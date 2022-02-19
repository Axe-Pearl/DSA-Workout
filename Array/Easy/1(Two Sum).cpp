class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p = 0, q = nums.size()-1;
        vector<int>res;
        vector<pair<int,int>>pr;
        for(int i = 0;i<nums.size();i++){
          pr.push_back(make_pair(nums[i], i));
        }
        sort(pr.begin(),pr.end());
        while(p<q){
            int tempSum = pr[p].first+pr[q].first;
            if(tempSum<target){
                p++;
            }
            else if(tempSum>target){
                q--;
            }
            else{
                res.push_back(pr[p].second);
                res.push_back(pr[q].second);
                break;
            }
        }
        return res;
    }
};
