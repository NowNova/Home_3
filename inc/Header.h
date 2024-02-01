#pragma once

namespace sa {
    class String {
    private:
        size_t m_size;
        char* m_str;
    public:
        //�����������
        String(const char* str);
        //����������� �����������
        String(const String& other);
        //�������� �����������
        String& operator=(String copy);
        //������
        void cout() const;
        //����������
        ~String();
    };
}