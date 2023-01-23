#include <iostream>
#include <mutex>
#include <thread>

int number =0;
std :: mutex Mutex;

void AddNumber()
{
    Mutex.lock();
    number++;
    //Mutex.unlock();
}

int main()
{
    std :: thread th1(AddNumber);
    //std :: thread th2(AddNumber);
    th1.join();
    //th2.join();
    std :: cout << number;
}