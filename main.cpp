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
                // 5a: mark the new node as ROOT
                ROOT = nb;

                // 5b: exit
                return;
            }

            // step 6: if the value in the data field of new node is less than that of parent
            if (x < parent->info) {
                // 6a: make the left child of parent point to the new node
                parent->left = nb;

                // 6b: exit
                return;
            } else if (x > parent->info) {
                // if the value in the data field of the new node is greated than that of the parent
                // 7a: make the right child of parent point to the new node
                parent->right = nb;

                // 7b: exit
                return;
            }
        }

        void search(int e, Node *&parent, Node *&current) {
            // this function searches the current of the specified node as well as the current node of its parent
            current = ROOT;
            parent = NULL;
            while ((current != NULL) && (current->info != e)) {
                parent = current;
                if (e < current->info)
                    current = current->left;
                else
                    current = current->right;
            }
        }
};

int main() {
    return 0;
}