class Solution {

  public:
  
  vector<vector<int>> levelOrder(TreeNode* root) {
  
    // Create vector of vector for the solution
    
    vector<vector<int>>solution;
    
    // If tree is empty: return empty solution; 
    
    if(root == NULL)
    
      return solution; 
      
    // Create queue of TreeNode* and push in the root
    
    queue<TreeNode*>q; 
    
    q.push(root); 
    
    
    
    // Until the queue is not empty
    
    while(! q.empty())
      
    {
      
      // Create a temporary vector to store the level values
    
      
      vector<int>te;
    
      int size = q.size();
      
      
            while(size--)
      
            {
            
              TreeNode *temp = q.front();
              
              q.pop(); 
              
              te.push_back(temp->val);
              
              // Enqueue temporary children
              
              if(temp->left != NULL ) q.push(temp->left);
              
              if(temp->right != NULL) q.push(temp->right);
            }
            // Store the values of the level in the final solution; 
            solution.push_back(te); 
        }
        return solution; 
    }
};
