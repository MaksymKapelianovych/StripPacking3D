#include "packer.h"

Node *Packer::findNode(Node *node, int w, int l, int h)
{
    if(node->used){
        Node *temp;
        if((temp = findNode(node->right, w, l, h))){
            return temp;
        }else if((temp = findNode(node->up, w, l, h))){
            return temp;
        }
        return findNode(node->back, w, l, h);
    }else if((w <= node->w) && (h <= node->h) && (l <= node->l)){
        return node;
    }else{
        return nullptr;
    }
}

Node *Packer::splitNode(Node *node, int w, int l, int h)
{
    node->used = true;
    node->back = new Node(node->x, node->y + l, node->z, w, node->l - l, node->h);
    node->right = new Node(node->x + w, node->y, node->z, node->w - w, node->l, node->h);
    node->up = new Node(node->x, node->y, node->z + h, w, l, node->h - h);
    return node;
}

Packer::Packer(int w, int l, int h): root(new Node(0, 0, 0, w, l, h))
{

}

void Packer::fit(std::vector<box *> boxes)
{
    Node *node;

    for(auto box : boxes){
        if((node = findNode(root, box->x, box->y, box->z))){
            box->fit = splitNode(node, box->x, box->y, box->z);
        }
    }
}
