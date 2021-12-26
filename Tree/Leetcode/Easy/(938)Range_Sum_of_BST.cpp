class Solution {
public:
     int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)return 0;
        return dosum(root,low,high);
    }
    
    int dosum(TreeNode* root, int low, int high){
        if(root == NULL){
            return sum;
        }
        dosum(root->left,low, high);
        if(root->val>=low && root->val<=high){
             sum = sum + root->val;
        }
        dosum(root->right,low, high);
        return sum;
    }
};
