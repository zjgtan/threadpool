#ifndef SYNC_QUEUE_H_
#define SYNC_QUEUE_H_

#include <queue>

//线程安全队列
template<typename T>
class SyncQueue
{
public:
    SyncQueue(int size);
    ~SyncQueue();

    // 弹出
    T pop();
    // 插入
    void push(T& elem);

private:
    queue<T> _q; // 队列
};

#endif
