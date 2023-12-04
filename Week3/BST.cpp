#include <iostream>
using namespace std;

struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int key) {
    TreeNode* newNode = new TreeNode;
    newNode->key = key;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

TreeNode* insert(TreeNode* root, int key) {
    if (root == nullptr) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}

void preOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        cout << root->key << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;

    string command;
    while (cin >> command) {
        if (command == "insert") {
            int key;
            cin >> key;
            root = insert(root, key);
        } else if (command == "#") {
            break;
        }
    }

    preOrderTraversal(root);
    return 0;
}

