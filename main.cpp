// Author: johnathan song
// GitHub:
// November 20, 2020
// csis 123a

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

#include "MyTemplate.h"


int main(int argc, char** argv) {

    int iArr[] = {1, 3, 5, 2, 5, 67, 4, 4};
    MyTemplate<int> iClass;
    for (int i = 0; i < 8; i++) {
        iClass.add(iArr[i]);
    }
    
    cout << "Before sorting\n";
    iClass.display();
    iClass.sort();
    cout << "After sorting\n";
    iClass.display();
    cout << "\n";
    
    
    string sArr[] = {"Hello", ",", "I", "am", "Johnathan", "!"};
    MyTemplate<string> sClass;
    for (int i = 0; i < 6; i++) {
        sClass.add(sArr[i]);
    }
    
    cout << "Before sorting\n";
    sClass.display();
    sClass.sort();
    cout << "After sorting\n";
    sClass.display();
    cout << "\n";


    return 0;
}

