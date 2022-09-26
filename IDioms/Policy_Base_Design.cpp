#include<iostream>

using namespace std;

// cpp의 고유 기능
// cpp IDioms 라고 함.

// "Policy Base Design" 

// template로 정책을 받아옴.
template<typename T, typename ThreadModel = nolock> class List
{
    ThredModel tm;
public :
    void push_front(const T& a)
    {
        tm.lock();
        // do somethind
        tm.unlock();
    }
};

struct PosixMutexLocker
{
    // pthread_mutex_t mtx;
    inline void lock()   { cout << "acquire mutex" << endl; }
    inline void unlock() { cout << "release mutex" << endl; }
};

struct nolock
{
    inline void lock() {}
    inline void nolock() {}
};