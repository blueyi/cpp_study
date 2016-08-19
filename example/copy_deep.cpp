/*
 * copy_deep.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>  

class A  
{  
public:  
    A()      // 构造函数，p指向堆中分配的一空间  
    {  
        m_data = new char(100);  
        printf("默认构造函数\n");  
    }  
    ~A()     // 析构函数，释放动态分配的空间  
    {  
        if(m_data != NULL)  
        {  
            delete m_data;  
            m_data = NULL;  
            printf("析构函数\n");  
        }  
    }  
private:  
    char *m_data;     // 一指针成员  
};  

int main()  
{  
    A a;  
    A b(a);   // 复制对象  
    return 0;  
}  


