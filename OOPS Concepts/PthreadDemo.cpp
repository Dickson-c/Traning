#include <thread>
#include <iostream>

void *ThreadFunction1(void *arguments)
{
    std :: cout << "Thread1 is running \n";
    return NULL;
}

void *ThreadFunction2(void *arguments)
{
    std :: cout << "Thread2 is running\n";
    return NULL;
}

int main() 
{
  pthread_t thread1;
  pthread_t thread2;
  void *ret;

  std :: cout << "Calling thread \n";
  pthread_create(&thread1, NULL, ThreadFunction1, NULL);
  pthread_create(&thread2, NULL, ThreadFunction2, NULL);

  pthread_join(thread1 , &ret);
  pthread_join(thread2 , &ret);
  return 0;
}
