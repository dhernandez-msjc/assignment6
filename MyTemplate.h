// Author: johnathan song
// GitHub:
// November 20, 2020
// csis 123a

// TODO: file name snouldl. be my_template.h, we must adhere to these naming conventions

#ifndef MYTEMPLATE_H
#define MYTEMPLATE_H
#include <iostream>
#include <string>

// TODO:  I've stated more than enough times, this doesn't belong here. 
using namespace std;


// TODO: I sent out an email about this, don't use T
template <typename T>
class MyTemplate {
public:
    
    // TODO:  we've gone over proper initializing of constructors, you should use the shortcut for
    //        initializing primitive values. 
    
    // TODO: you should have 2 sections, declaration, and definitions below.  
    MyTemplate() {
        capacity = 10;
        datastore = new T[capacity];
        size = 0;
    };

    virtual ~MyTemplate() {
        delete [] datastore;
    };

    void add(T data) {
        if (size >= capacity) {
            capacity += 10;
            T * tmp = new T[capacity];
            
            // TODO: pre-increment always per corrections and lecture. 
            for (int i = 0; i < size; i++) {
                tmp[i] = datastore[i];
            }
            delete [] datastore;
            datastore = tmp;
        }
        datastore[size] = data;
        
        // pre-incremement. 
        size++;
    }

    void display() {
        // todo:  same issues as above.  
        for (int i = 0; i < size; i++) {
            cout << datastore[i] << " ";
        }
        cout << "\n";
    }

    // TODO: per my email, you were to state which used and use appropriign naming of variables.  
    void sort() {
        int min;
        T tmp;
        for (int i = 0; i < size - 1; i++) {
            min = i;
            for (int j = i + 1; j < size; j++) {
                if (datastore[j] < datastore[min]) {
                    min = j;
                }
            }
            tmp = datastore[min];
            datastore[min] = datastore[i];
            datastore[i] = tmp;
        }
    }

private:
    T * datastore;
    int size;
    int capacity;
};

#endif /* MYTEMPLATE_H */

