#ifndef STATIC_H
#define STATIC_H
#include <string>

using namespace std;

class Static
{
public:
    typedef struct point {
       int x;
       int y;
    } Point;

    Static();
    point getDimensions(string fileName);
};

#endif // STATIC_H
