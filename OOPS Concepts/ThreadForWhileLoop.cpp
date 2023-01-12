#include <iostream>
#include <thread>

void loop1(int a)
{
    int b = 0;

    while(1)
    {
        std :: cout << "hello world1  " ;
        if(a == b)
            break;
        b++;
    }
}

void loop2(int a)
{
    int b = 0;
    
    while(1)
    {
        std :: cout << "hello world2  " ;
        if(a == b)
            break;
        b++;
    }
}

int main()
{
    std :: thread  th1(loop1 , 10);
    th1.join();
    std :: cout << "\n";
    std :: thread  th2(loop2 , 10);
    th2.join();
}
