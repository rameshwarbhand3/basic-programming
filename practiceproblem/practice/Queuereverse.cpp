#include <iostream>
#include <dequeue>
using namespace std;
class Queue
{
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int n)
    {
        size = n;
        front = rear = 0;
    }
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        while (!q.empty())
        {
            int element = q.front();
            q.pop();
            s.push(element);
        }
        while (!s.empty())
        {
            int element = s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
}