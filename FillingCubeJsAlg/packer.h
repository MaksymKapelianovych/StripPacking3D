#ifndef PACKER_H
#define PACKER_H
#include "node.h"
#include "box.h"
#include <vector>

class Packer
{
    Node *findNode(Node *node, int w, int l, int h);
    Node *splitNode(Node* node, int w, int l, int h);
    Node *root;
public:
    Packer(int w, int l, int h);

    void fit(std::vector<box*> boxes);
};

#endif // PACKER_H
