#pragma once

namespace sa {
    class String {
    private:
        size_t m_size;
        char* m_str;
    public:
        //Конструктор
        String(const char* str);
        //Конструктор копирования
        String(const String& other);
        //Оператор копирования
        String& operator=(String copy);
        //Печать
        void cout() const;
        //Деструктор
        ~String();
    };
}