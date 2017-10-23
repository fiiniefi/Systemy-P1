#include <pthread.h>
#include <iostream>
#include <unistd.h>
#include <cstdio>

void *hello(void *thread_number)
{
    int *numb = static_cast<int*>(thread_number);
    std::cout << "Thread number: " << *numb << std::endl;
    std::cout.flush();
    pthread_exit(NULL);
}


int main()
{
    const int length = 101;
    pthread_t threads[length];
    int thread_vals[length];
    for (int i = 0; i < length; i++)
    {
        thread_vals[i] = i;
        if (pthread_create(&threads[i], NULL, &hello, &thread_vals[i]))
            std::cout << "Error: Thread couldn't be created." << std::endl;
    }
    std::cout << "Main thread." << std::endl;
    std::cout.flush();
    pthread_exit(NULL);
}
