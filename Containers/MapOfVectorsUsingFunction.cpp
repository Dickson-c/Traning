#include <iostream>
#include <vector>
#include <iterator>
#include <functional>
#include <map>

class MapSet
{
private:
    std::map<int, std::vector<std::function<int()>>> Map;

public:
    MapSet()
    {
        Map[1] = Vector1;
        Map[2] = Vector2;
        Map[3] = Vector3;
        Map[4] = Vector4;
    }

    std::map<int, std::vector<std::function<int()>>>::iterator itrMap;

    std::vector<std::function<int()>> Vector1;
    std::vector<std::function<int()>> Vector2;
    std::vector<std::function<int()>> Vector3;
    std::vector<std::function<int()>> Vector4;

    std::vector<std::function<int()>>::iterator itrVector;

    void SetVectorValues(std::function<int()> Function, int key)
    {
        for (itrMap = Map.begin(); itrMap != Map.end(); itrMap++)
        {
            if (itrMap->first == key)
            {
                itrMap->second.push_back(Function);
            }
        }

       
    }

    void SetVector(int key)
    {
        for (auto &mapItr : Map)
        {
            if (mapItr.first == key)
            {
                for (auto &vectorItr : mapItr.second)
                {
                    vectorItr();
                }
            }
        }
    }
};

int ReadValues()
{
    int value = 0;
    std::cin >> value;
    std::cout << "HELLO WORLD" << std::endl;
    return value;
}

int main()
{
    MapSet MapObj;

    int vectorSize = 0, vectorCount = 4;

    std::cout << "Enter The size of the Vector : ";
    std::cin >> vectorSize;

    MapObj.SetVectorValues(ReadValues, 1);
    MapObj.SetVectorValues(ReadValues, 2);
    MapObj.SetVectorValues(ReadValues, 1);
    MapObj.SetVectorValues(ReadValues, 1);

    //MapObj.SetVector(2);

    // MapObj.GetValues(vectorSize);
}
