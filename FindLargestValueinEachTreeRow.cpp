class Solution {
public:
                void dfs(TreeNode* node, int currentHeight, vector<int> &rowMax){
                      
                        if(node == NULL) return;
                      if (rowMax.size() < currentHeight +1){
                              
                              rowMax.push_back( node -> val);
                      } else {
                              if (rowMax[currentHeight] < node -> val){
                                      rowMax[currentHeight] = node -> val;
                              }
                      }
                      dfs(node -> left, currentHeight+1, rowMax);
                      dfs(node -> right, currentHeight+1, rowMax);
              }
        vector <int> largestValues(TreeNode* root){
                vector<int> rowMax;
                dfs(root,0,rowMax);
                return rowMax;
        }
};