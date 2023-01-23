#include <iostream>
#include <mutex>
#include <thread>

std :: mutex m1;

void ToAddNumber(int number1 , int number2)
{
    std :: unique_lock<std :: mutex> lock(m1 , std :: defer_lock);
    std :: cout << number1 + number2 << "\n";
    lock.lock();
    number1+=-1;
    std :: cout << number1 + number2 << "\n";
}

int main()
{
    int number1 = 2;
    int number2 = 2;

    std :: thread t1(ToAddNumber,number1,number2);
    std :: thread t2(ToAddNumber,3,3);

    t1.join();
    t2.join();
}