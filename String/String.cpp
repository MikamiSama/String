#include "String.h"
#include <iostream>

using namespace std;

// ����������� �� ������������� (80 �������)
String::String() {
    size = 80;
    str = new char[size];
    str[0] = '\0';
}

// ����������� � �������� ��������
String::String(int length) {
    size = length;
    str = new char[size];
    str[0] = '\0';
}

// ����������� � ������������ ������
String::String(const char* input) {
    int len = 0;
    while (input[len] != '\0') len++;
    size = len + 1;
    str = new char[size];
    for (int i = 0; i < size; i++) {
        str[i] = input[i];
    }
}

// ����������� ���������
String::String(const String& other) {
    size = other.size;
    str = new char[size];
    for (int i = 0; i < size; i++) {
        str[i] = other.str[i];
    }
}

// ����������
String::~String() {
    delete[] str;
}

// ����� �������� � ���������
void String::input() {
    cout << "Enter ryadok (max " << size - 1 << " symbols): ";
    cin.getline(str, size);
}

// ����� ��������� �� �����
void String::print() const {
    cout << "Ryadok: " << str << endl;
}
