// Author: johnathan song
// GitHub:
// November 20, 2020
// csis 123a

#ifndef MYTEMPLATE_H
#define MYTEMPLATE_H
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MyTemplate {
public:

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
            for (int i = 0; i < size; i++) {
                tmp[i] = datastore[i];
            }
            delete [] datastore;
            datastore = tmp;
        }
        datastore[size] = data;
        size++;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << datastore[i] << " ";
        }
        cout << "\n";
    }

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

