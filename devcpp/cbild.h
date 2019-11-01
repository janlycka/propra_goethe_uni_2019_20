#ifndef CBILD_H
#define CBILD_H
#include <string>

class CBild{
public:
    void import_image(std::string fileName);
    void export_image(std::string fileName);
    void delete_image();
    CBild();
};

#endif // CBILD_H
