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
};

int main() {
    return 0;
}