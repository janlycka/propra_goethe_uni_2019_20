#ifndef CBILD_H
#define CBILD_H
#include <string>
#include "static.h"
#include "nbild.h"

// Aufgabe 2b)
// Klasse CBild: Speichert CBild, importiert und exportiert ein Bild in/aus eine/r Datei
class CBild
{
public:
    //stores image data within the instance of this class
    bool ***image_data;

    // saves image dimension lest if need be counted anew
    int width;
    int height;

    // static class reference
    Static *st;

    CBild();
    CBild(std::string fileName);

    void import_image(std::string);
    void export_image(std::string);
    CBild* encode_image(NBild*, NBild*);
    NBild* decode_image(CBild*, NBild*);
    CBild* paste_over(CBild*,CBild*);
    void delete_image();
};

#endif // CBILD_H
