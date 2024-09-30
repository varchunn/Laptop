#include "VideoCard.h"
#include <iostream>

VideoCard::VideoCard(const char* modelName, int mem) : memory(mem) 
{
    model = new char[strlen(modelName) + 1];
    strcpy(model, modelName);
}

VideoCard::~VideoCard() 
{
    delete[] model;
}

void VideoCard::display() 
{
    cout << "Video Card Model: " << model << ", Memory: " << memory << " MB" << endl;
}
