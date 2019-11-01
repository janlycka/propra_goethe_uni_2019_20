#ifndef STATIC_H
#define STATIC_H
#include <string>

class Static
{
public:
    typedef struct point {
       int x;
       int y;
    } Point;

    Static(void);
    point getDimensions(std::string);
};

#endif // STATIC_H
