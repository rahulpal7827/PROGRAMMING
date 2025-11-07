#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int value;
    Node *right;
    Node *left;

    Node(int val)
    {
        value = val;
    }
};