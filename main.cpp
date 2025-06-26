#include <iostream>
using namespace std;

class Node {
    public:
        int info;
        Node *left;
        Node *right;

        // Constructor for the node class
        Node() {
            left = NULL; // init left to null
            right = NULL; // init left to null
        }
};

class BinaryTree {
    public:
        Node *ROOT;

        BinaryTree() {
            ROOT = NULL; // init ROOT to null
        }

        void insert() {
            int x;
            cout << "Masukkan nilai : ";
            cin >> x;

            // step 1: allocate memory for the new node
            Node *nb = new Node();

            // step 2: assign value to the data field of new node
            nb->info = x;

            // step 3: make the left and right child of the new node point to null
            nb->left = NULL;
            nb->right = NULL;

            // step 4: locate the node which will be the parent of the node to be inserted
            Node *parent = NULL;
            Node *current = NULL;
            search(x, parent, current);

            // step 5: if parent is null (tree is empty)
            if (parent == NULL) {
                
            }
        }
};

int main() {
    return 0;
}