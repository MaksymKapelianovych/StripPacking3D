#include <iostream>
#include "box.h"
#include "packer.h"
#include <algorithm>
using namespace std;

int main()
{
    vector<box*> boxes;
    boxes.push_back(new box(3,2,1));
    boxes.push_back(new box(4,4,2));
    boxes.push_back(new box(1,4,3));
    boxes.push_back(new box(1,2,5));
    boxes.push_back(new box(5,3,2));

    reverse(boxes.begin(), boxes.end());

    Packer pack(5,5,5);
    pack.fit(boxes);

    for(auto box: boxes){
        cout << box->to_string();
    }
    return 0;
}
