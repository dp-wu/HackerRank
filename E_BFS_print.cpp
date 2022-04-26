/*
print each level from left to right
my previous version didn't pass all the test (test4, 5 didnt pass), so i took a look at the discussion board
from anantkumawat22's answer i modified my result and now it's working
https://www.hackerrank.com/test/63ek10mhil5/60d306ab105867d80fca544041154273
*/
#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        if (root) {
            queue<Node*> q;
            q.push(root);
            
            Node* temp;
            while (!q.empty()) {
                temp = q.front();
                cout << temp->data << " ";
                
                if (temp->left != NULL) { q.push(temp->left); }
                if (temp->right != NULL) { q.push(temp->right); }
                
                q.pop();
            }
        }
        return;
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.levelOrder(root);
    return 0;
}

