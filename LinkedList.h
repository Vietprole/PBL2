#include <iostream>
#include <string>
using namespace std;
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node<T> *prev;
    Node<T>(T d);
    virtual ~Node();
    void insert_back(Node<T> &ptr);
    void remove();
    void operator+(Node<T> &ptr);
};

template <typename T>
class LinkedList
{
public:
    LinkedList<T>();
    //LinkedList<T>(const LinkedList<T>&);
    virtual ~LinkedList<T>();
    void push_back(T new_data);
    void push_front(T new_data);
    void pop_back();
    void pop_front();
    void remove(const T &);
    void update(const T &);
    void insertAt();
    void removeAt();
    void updateAt();
    void reset();
    bool isEmpty();
    LinkedList<T> &sorting(bool cmp(const T &, const T &));
    T getAt();
    string toString();
    template <typename O>
    friend ofstream &operator<<(ofstream &, const LinkedList<O> &);
    template <typename O>
    friend ostream &operator<<(ostream &, const LinkedList<O> &);
    //LinkedList<T> &operator=(const LinkedList<T> &x);
    Node<T> *begin();
    Node<T> *end();
    int getLength();

private:
    Node<T> *head;
    Node<T> *tail;
    int length;
};
#include "LinkedList.hpp"
#endif // LINKEDLIST_H