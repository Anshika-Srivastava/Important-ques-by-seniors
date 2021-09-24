//Using BFS
//Data Structure used: Queue
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        //corner case
        if(root==NULL)
            return ans;
        queue<TreeNode*> q;
        bool dir=1;//1-left to right, 0-right to left
        q.push(root);//push the first element to the queue
        while(!q.empty()){//check if queue is not empty
            int size=q.size();
            vector<int> res(size);//a vector to store the elements present at that time
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();//extract the front element of the root
                q.pop();//pop it from queue
                if(dir==1)//see the direction to travel
                    res[i]=curr->val;
                else
                    res[size-i-1]=curr->val;
                if(curr->left!=NULL)//if left sub tree exists
                    q.push(curr->left);//push it to queue
                if(curr->right!=NULL)//if right sub tree exists
                    q.push(curr->right);//push it to queue
            }
            dir=!dir;//change the direction
            ans.push_back(res);//push the vector to our final answer
        }
        return ans;
    }
};
