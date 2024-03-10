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
    vector<int> inorderTraversal(TreeNode* node) {
        if(!node)   return {};
        stack<TreeNode* > st; vector<int> res;
        while(true){
            /* Until a node has left pointer, 
            push it to stack for future processing*/
            if(node->left){
                st.push(node);
                node = node->left;
                continue;
            }

            /* push the node and repeat (insert inside res and poping from stack)
            until the stack top node doesn't have right.
            The intuition here is to check the right pointer of already stack-inserted nodes
            because for the nodes already in stack, we have visited the left pointers before*/
            st.push(node);
            while(!st.empty() && !st.top()->right){
                node = st.top(); st.pop();
                res.push_back(node->val);
            }

            /* if we hit a node that has right pointer, I shall directly pop the node,
            insert the value to the resultant vector and
            move the cursor to its immediate right pointer.*/
            if (!st.empty()) {
                node = st.top(), res.push_back(node->val), st.pop();
                node = node->right;
                continue;            
            }

            /* If we reach a state where the stack becomes empty and
            there is no further right of current node, we come out of the process*/
            break;
        }

        return res;
    }
};