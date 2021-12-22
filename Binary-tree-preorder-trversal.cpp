class Solution {
  public:
  
  vector <int>s;
  
  void preorder(TreeNode *root)
    {
        if(root == NULL)
            return; 
        s.push_back(root->val);
        preoder(root->left);
        preoder(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preoder(root);
        return s; // [1,2,3]
    }
};)
