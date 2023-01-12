#include <iostream>
#include <vector>
#include <functional>
#pragma once 

class Vector
{
    private:
        std :: vector<std :: function<int()>> vectorInput;

    public:
        void getVector(std :: function<int()> ReadInput);
        void setVector(); 
};
