#include <iostream>
#include "Header.h"

namespace sa {
        //Конструктор
        String::String(const char* str) {
            m_size = strlen(str) + 1;
            m_str = new char[m_size];
            std::copy(str, str + m_size, m_str);
        }
        //Конструктор копирования
        String::String(const String& other) {
            m_size = other.m_size;
            m_str = new char[m_size];
            std::copy(other.m_str, other.m_str + m_size, m_str);
        }
        //Оператор копирования
        String& String::operator=(String copy) {
            std::swap(m_size, copy.m_size);
            std::swap(m_str, copy.m_str);
            return *this;
        }
        //Печать
        void String::cout() const {
            std::cout << m_str << std::endl;
        }
        //Деструктор
        String::~String() {
            delete[] m_str;
        }
}