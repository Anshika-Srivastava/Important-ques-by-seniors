class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        maxPath(root,res);
        return res;
    }
    
    int maxPath(TreeNode* root, int &res){
        if(root==NULL) //if theres no tree or its a leaf node
            return 0;
        int left_sub=maxPath(root->left,res);
        int right_sub=maxPath(root->right,res);
        
        int comp=max(max(left_sub,right_sub)+root->val,root->val);
        
        int fin=max(comp,left_sub+right_sub+root->val);
        
        res=max(res,fin);
        
        return comp;
    }
    
};
