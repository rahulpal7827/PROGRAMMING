#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int value;
    vector<Node *> children;

    Node(int val)
    {
        value = val;
    }
};

void PrintAll(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->value;
    for (auto child : root->children)
    {
        PrintAll(child);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *first = new Node(5);
    root->children.push_back(first);
    Node *second = new Node(4);
    root->children.push_back(second);
    Node *third = new Node(3);
    root->children.push_back(third);
    Node *four = new Node(20);
    second->children.push_back(four);
    Node *fiveth = new Node(16);
    second->children.push_back(fiveth);
    PrintAll(root);
    return 0;
}