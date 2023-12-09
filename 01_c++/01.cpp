#include <iostream>

int main() {
    // 假设有一个整数变量
    int myNumber = 42;

    // 声明一个指向整数的指针，并将其指向myNumber的地址
    int* pointerToMyNumber = &myNumber;

    // 打印myNumber的值和地址
    std::cout << "myNumber 的值: " << myNumber << std::endl;
    std::cout << "myNumber 的地址: " << &myNumber << std::endl;

    // 通过指针访问myNumber的值和地址
    std::cout << "通过指针访问的值: " << *pointerToMyNumber << std::endl;
    std::cout << "指针的地址: " << pointerToMyNumber << std::endl;

    // 修改通过指针访问的值，同时myNumber的值也会被修改
    *pointerToMyNumber = 99;

    // 打印修改后的值
    std::cout << "修改后的 myNumber 的值: " << myNumber << std::endl;

    return 0;
}
