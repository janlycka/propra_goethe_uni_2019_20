#ifndef STATIC_H
#define STATIC_H
#include <iostream>

class Static
{
public:

    // defines a structure to store dimenstions
    typedef struct point {
       int x;
       int y;
    } Point;

    Static();
    point getDimensions(std::string fileName);
};

#endif // STATIC_H
