//linked list header

#pragma once

class LinkedList{
    public:

    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& source); // copy constructor. Const used so parameter won't change

    void append(int value);     // add to end of list
    void print();               // print all values in list
    int sum();                  // return sum of values
    int count();                // return # of elements

    bool containsValue(int value) const; // returns true if value is in list. Const used so member variables won't change

    private:

    struct Node{
        int value;
        Node *next;
    };

    Node *first;        //pointer to first Node
    Node *last;         //point to last Node
    
};
