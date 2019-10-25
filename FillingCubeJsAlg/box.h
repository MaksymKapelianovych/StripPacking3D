#ifndef BOX_H
#define BOX_H
#include "node.h"
#include <string>
#include <algorithm>
struct box
{
    int id;
    int x, y, z;
    float w;
    int target;

    box(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

    friend bool operator<(const box& left, const box& right){
        return std::max(left.x, left.y) < std::max(right.x, right.y);
    }

    Node *fit;

    std::string to_string(){
        std::string str = "";
        str += "X: " + std::to_string(x) + " Y: " + std::to_string(y) + " Z: " + std::to_string(z) + "\n " + fit->to_string();
        return str;
    }
};
#endif // BOX_H
