//#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <string>
#include "nbild.h"
#include "static.h"


using namespace std;

int main(int argc, char *argv[])
{
    //Static *st = new Static();
    //Static::point dimensions = st->getDimensions("..\\dateien\\beispielbild_1.txt");
    //cout << dimensions.x << dimensions.y;

    NBild* bild = new NBild();
    bild->import_image("..\\dateien\\beispielbild_1.txt");
    bild->export_image("..\\dateien\\beispielbild_2.txt");
    bild->delete_image();

    delete bild;

    return NULL;
}

