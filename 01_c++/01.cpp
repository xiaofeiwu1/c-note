#include <iostream>

int main() {
    // ������һ����������
    int myNumber = 42;

    // ����һ��ָ��������ָ�룬������ָ��myNumber�ĵ�ַ
    int* pointerToMyNumber = &myNumber;

    // ��ӡmyNumber��ֵ�͵�ַ
    std::cout << "myNumber ��ֵ: " << myNumber << std::endl;
    std::cout << "myNumber �ĵ�ַ: " << &myNumber << std::endl;

    // ͨ��ָ�����myNumber��ֵ�͵�ַ
    std::cout << "ͨ��ָ����ʵ�ֵ: " << *pointerToMyNumber << std::endl;
    std::cout << "ָ��ĵ�ַ: " << pointerToMyNumber << std::endl;

    // �޸�ͨ��ָ����ʵ�ֵ��ͬʱmyNumber��ֵҲ�ᱻ�޸�
    *pointerToMyNumber = 99;

    // ��ӡ�޸ĺ��ֵ
    std::cout << "�޸ĺ�� myNumber ��ֵ: " << myNumber << std::endl;

    return 0;
}
