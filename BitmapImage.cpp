#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg"||fileExt=="png"||fileExt=="jpeg"||fileExt=="bmp") {
        // load image file
        // decompress into buffer
        //more code
        return true;
    }
    return false;
}

bool BitmapImage::save(std::string name) {
// do something
return true;
}


void BitmapImage::resize(int width, int heigth) {
    this->width=width;
    this->height=heigth;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
