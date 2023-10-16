#include <QDebug>

class MyString {
private:
    int buf_len;
    char *characters;

public:
    MyString(int buf_len = 64, const char *data = NULL) {
        qDebug() << "Constructor(int, char*)";
        this->buf_len = 0;
        this->characters = nullptr;
        create(buf_len, data);
    }
    ~MyString() {
        delete[] this->characters;
    }
    bool create(int buf_len, const char *data) {
        this->buf_len = buf_len;

        if (this->buf_len != 0) {
            this->characters = new char[this->buf_len]{};
            if (data)
                strncpy(this->characters, data, this->buf_len);
        }

        return true;
    }
    friend QDebug operator<<(QDebug dbg, const MyString &ms) {
        dbg.nospace() << "buf_len = " << ms.buf_len;
        dbg.nospace() << ", characters = " << static_cast<void *>(ms.characters);
        dbg.nospace() << " [" << ms.characters << "]";
        return dbg;
    }
};

int main() {
    MyString str1(10, "Shenzhen");
    qDebug() << "str1: " << str1;

    MyString str2 = str1;
    qDebug() << "str2: " << str2;

    MyString str3;
    qDebug() << "str3: " << str3;
    str3 = str1;
    qDebug() << "str3:" << str3;

    return 0;
}