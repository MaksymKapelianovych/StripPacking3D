#include "node.h"

Node::Node(int x, int y, int z, int w, int l, int h): x(x), y(y), z(z), w(w), l(l), h(h), used(false), right(nullptr), up(nullptr){  }

std::string Node::to_string()
{
    std::string str = "";
    str += "Node: { X: " + std::to_string(x) + " Y: " + std::to_string(y) + " Z: " + std::to_string(z) + " W: " + std::to_string(w) +
            " L: " + std::to_string(l) + " H: " + std::to_string(h) + "}\n";
    return str;
}
