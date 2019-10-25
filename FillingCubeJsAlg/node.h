#ifndef NODE_H
#define NODE_H
#include <string>

class Node
{

public:
    bool used;
    Node *right, *up, *back;
    int x, y, z, w, l, h;


    Node(int x, int y, int z, int w, int l, int h);

    std::string to_string();
};

#endif // NODE_H
