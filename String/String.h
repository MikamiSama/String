#pragma once
#ifndef STRING_H
#define STRING_H

class String {
private:
    char* str;
    int size;

public:
    String();                        // ����������� �� ������������� (80 �������)
    String(int length);             // ����������� � �������� ��������
    String(const char* input);      // ����������� � ������������
    String(const String& other);    // ����������� ���������
    ~String();                      // ����������

    void input();                   // �������� � ���������
    void print() const;             // ��������� �� �����
};

#endif
