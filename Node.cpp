#include "Node.h"
using namespace std;

Node::Node(char character, int frequency)
{
    this->left = this->right = nullptr;
    this->character = character;
    this->frequency = frequency;
}

int Node::getFrequency() const
{
    return frequency;
}

void Node::setLeft(Node *left)
{
    this->left = left;
}

void Node::setRight(Node *right)
{
    this->right = right;
}

Node *Node::getLeft() const
{
    return left;
}

char Node::getCharacter() const
{
    return character;
}

Node *Node::getRight() const
{
    return right;
}

Node::Node(char character)
{
    this->character = character;
    this->left = this->right = nullptr;
}
