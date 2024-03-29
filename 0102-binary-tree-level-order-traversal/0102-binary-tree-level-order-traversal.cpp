/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> vec;
            for(int i =0 ; i<size ; i++){
                TreeNode* cur = que.front();
                que.pop();
                if(cur->left != NULL){
                    que.push(cur->left);  
                } 
                if(cur->right != NULL){
                    que.push(cur->right);
                } 
                vec.push_back(cur->val);
            }
            ans.push_back(vec);

        }
        return ans;
    }
};