class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
            queue<TreeNode*> q;
            
            q.push(root);
            int sum = 0;
            
            while(! q.empty()){
                    
                    int size = q.size();
                    sum = 0; 
                    
                    while(size--){
                         TreeNode *t = q.front(); q.pop(); 
                            if ( t->left != NULL){
                                    
                                    q.push(t -> left);
                                    
                            }
                            if (t -> right != NULL){
                                    
                                    q.push(t -> right);
                            }
                            if (t -> left == NULL & t ->right == NULL){
                                    
                                    sum = sum + t -> val;
                            }
                            
                    }
                    
            }
            return sum; 
            
    }
};