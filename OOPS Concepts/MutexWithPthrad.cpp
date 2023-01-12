#include <iostream>
#include <mutex>
#include <thread>

int number =0;
std :: mutex Mutex;

void *AddNumber(void *arguments)
{
    Mutex.lock();
    number++;
    Mutex.unlock();
    return NULL;
}

void *MultiplyNumber(void *arguments)
{
    Mutex.lock();
    number*=2;
    Mutex.unlock();
    return NULL;
}

int main()
{
    pthread_t thread1;
    pthread_t thread2;
    pthread_t thread3;

    pthread_create(&thread1, NULL, AddNumber, NULL);
    pthread_create(&thread2, NULL, AddNumber, NULL);
    pthread_create(&thread3, NULL, MultiplyNumber, NULL);

    pthread_join(thread1 , NULL);
    pthread_join(thread2 , NULL);
    pthread_join(thread3 , NULL);

    std :: cout << number;
}
