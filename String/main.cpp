#include <iostream>
#include "String.h"
using namespace std;

int main() {
    String s1;
    s1.input();
    s1.print();

    String s2(20);
    s2.input();
    s2.print();

    String s3("Hi, pick me!");
    s3.print();

    // Копіювання
    String s4 = s3;
    s4.print();

    return 0;
}
