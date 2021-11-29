/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxQueue
 * @author
 */

#include <stack>
#include <iostream>

#include <maxqueue.h>

using namespace std;

bool MaxQueue::empty()
{
    return uno.empty() && dos.empty();
}

int MaxQueue::size()
{
    return uno.size() + dos.size();
}

element MaxQueue::front()
{
    element front;

    if (dos.empty())
        front = uno.top();
    else
        front = dos.top();

    return front;

}

element MaxQueue::back()
{
    return this->b;
}

void MaxQueue::push(int x)
{
    element e;
    e.maximum = x;
    e.value = x;

    int size;

    b = e;

    if (uno.empty() && dos.empty()){
        uno.push(e);
    }
    else if(!uno.empty() && dos.empty()){
        dos.push(e);
        size = uno.size();

        uno.top().maximum = max(uno.top().maximum,dos.top().maximum);

        dos.push(uno.top());
        uno.pop();
    }
    else if(uno.empty() && !dos.empty())
    {
        size = dos.size();

        for(int i = 0; i < size; i++)
        {
            uno.push(dos.top());
            dos.pop();
        }

        dos.push(e);
        size = uno.size();

        for (int i = 0; i < size; i++)
        {
            uno.top().maximum = max(uno.top().maximum,dos.top().maximum);

            dos.push(uno.top());
            uno.pop();
        }
    }

}

void MaxQueue::pop()
{
    if(dos.empty() && !uno.empty())
        uno.pop();
    else if (uno.empty() && !dos.empty())
        dos.pop();
}

int MaxQueue::max(int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}








