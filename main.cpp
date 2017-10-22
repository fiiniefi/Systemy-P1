#include <pthread.h>
#include <iostream>

void *hello(void *thread_number)
{
    int numb = int(thread_number);
    std::cout << "Thread number: " << numb << std::endl;
    std::cout.flush();
    pthread_exit(NULL);
}


int main()
{
    const int length = 100;
    pthread_t threads[length];
    for (int i = 0; i < length; i++)
        if (pthread_create(&threads[i], NULL, &hello, (void *)i))
            std::cout << "Error: Thread couldn't be created." << std::endl;
    std::cout << "Main thread." << std::endl;
    std::cout.flush();
    pthread_exit(NULL);
}
