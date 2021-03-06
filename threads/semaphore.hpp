#ifndef SEMAPHORE_HPP
#define SEMAPHORE_HPP

#include <semaphore.h>

namespace experis {

class Semaphore {
public:
    Semaphore(size_t a_size = 0);
    ~Semaphore();

    void Acquire();
    void Release();
private:
    Semaphore(const Semaphore&); //no copy
    Semaphore& operator=(const Semaphore&); //no copy

    sem_t m_sem;
};

} //experis

#endif //SEMAPHORE_HPP
