#ifndef SINGLETON_H
#define SINGLETON_H

#include "global.h"

template<typename T>
class Singleton {

protected:
    Singleton() = default;
    Singleton(const Singleton<T>& st) = delete;
    Singleton& operator = (const Singleton<T> & st) = delete;

    static std::shared_ptr<T> _instance;

public:
    static std::shared_ptr<T> getInstance() {
        static std::once_flag s_flag;
        std::call_once(s_flag, [&](){
            _instance = std::shared_ptr<T>(new T);
        });

        return _instance;
    }

    void printAddress() {
        std::cout << "单例地址为：" << _instance.get() << '\n';
    }

    ~Singleton() {
        std::cout << "执行单例析构\n";
    }
};

template<typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;

#endif // SINGLETON_H
