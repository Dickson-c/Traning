#include "VectorClassFile.hpp"

void Vector :: getVector(std :: function<int()> ReadInput)
{
    vectorInput.push_back(ReadInput);
}
