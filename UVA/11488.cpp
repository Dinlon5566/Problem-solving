#include <iostream>

using namespace std;
int res;
struct TreeNode
{
    int deep,val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int deep=0)
    {
        this->deep=deep;
        val=0;
        left=nullptr;
        right=nullptr;
    }
};
void mkNode(string str,TreeNode *root)
{
    TreeNode *nowNode=root;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='0')
        {
            if(!nowNode->left)
            {
                nowNode->left=new TreeNode(nowNode->deep+1);
            }
            nowNode=nowNode->left;
            nowNode->val++;

        }
        else
        {
            if(!nowNode->right)
            {
                nowNode->right=new TreeNode(nowNode->deep+1);
            }
            nowNode=nowNode->right;
            nowNode->val++;
        }
    }
}
void scan(TreeNode* root)
{
    if(!root)
    {
        return;
    }
    res=max(res,root->val*root->deep);
    scan(root->left);
    scan(root->right);
    return;
}
void slove()
{
    int t;
    string str;
    cin>>t;
    TreeNode *root=new TreeNode();
    while(t--)
    {
        cin>>str;
        mkNode(str,root);
    }
    res=0;
    scan(root);
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        slove();
    }
    return 0;
}
