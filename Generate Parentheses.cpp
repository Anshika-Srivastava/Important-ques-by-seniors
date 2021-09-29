class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=n, close=n;
        string str="";
        parenthesis(open,close,str,ans);
        return ans;
    }
    
    void parenthesis(int open, int close, string str, vector<string>& ans){
        //base condition
        if(open==0 && close==0){//When we have reached our leaf of recursion tree
            ans.push_back(str);
            str="";
            return;
        }
        else{
            //We have to insert opening brackets till our open value is not zero ie, we have to insert all opening brackets for sure
            if(open!=0){
                string s=str;
                s.push_back('(');
                parenthesis(open-1,close,s,ans);
            }
            //Closing brackets are only to be inserted if no. of closing brackets is more than no. of opening brackets
            if(close>open){
                string s1=str;
                s1.push_back(')');
                parenthesis(open,close-1,s1,ans);
            }
        }
    }
};
