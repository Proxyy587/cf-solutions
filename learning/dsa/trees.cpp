#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

vector<vector<int>> levelOrder(struct node* root){
   vector<vector<int>> result;
    if (!root) return result;

    queue<node*> q;
    q.push(root);

    while (!q.empty()){
        int sz = q.size();
        vector<int> level;
        for (int i = 0; i < sz; i++){
            node* cur = q.front();
            q.pop();
            level.push_back(cur->data);
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
        result.push_back(level);
    }

    return result;
}

int main() {
    return 0;
}
