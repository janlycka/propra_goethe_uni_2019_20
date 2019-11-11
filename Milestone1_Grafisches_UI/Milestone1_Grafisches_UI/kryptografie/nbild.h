#ifndef NBILD_H
#define NBILD_H
#include <string>
#include "static.h"

// Aufgabe 2a)
// Klasse NBild: Speichert NBild, importiert und exportiert ein Bild aus/in eine Datei
class NBild
{
public:
    //stores image data within the instance of this class
    bool **image_data;

    // saves image dimension lest if need be counted anew
    int width;
    int height;

    // static class reference
    Static *st;

    NBild();
    NBild(bool**, int, int);

    void import_image(std::string fileName);
    void export_image(std::string fileName);
    NBild* paste_over(NBild*,NBild*);
    void delete_image();
};

#endif // NBILD_H
