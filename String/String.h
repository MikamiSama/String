#pragma once
#ifndef STRING_H
#define STRING_H

class String {
private:
    char* str;
    int size;

public:
    String();                        // Конструктор за замовчуванням (80 символів)
    String(int length);             // Конструктор з довільною довжиною
    String(const char* input);      // Конструктор з ініціалізацією
    String(const String& other);    // Конструктор копіювання
    ~String();                      // Деструктор

    void input();                   // Введення з клавіатури
    void print() const;             // Виведення на екран
};

#endif
