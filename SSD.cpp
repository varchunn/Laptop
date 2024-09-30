#include "SSD.h"
#include <iostream>

SSD::SSD(const char* brandName, int cap) : capacity(cap) 
{
    brand = new char[strlen(brandName) + 1];
    strcpy(brand, brandName);
}

SSD::~SSD() 
{
    delete[] brand;
}

void SSD::display() const 
{
    cout << "SSD Brand: " << brand << ", Capacity: " << capacity << " GB" << endl;
}

