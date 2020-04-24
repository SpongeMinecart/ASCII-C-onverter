//
//  Hello World.cpp
//  Test
//
//  Created by 小林矿车 on 2020/3/28.
//  Copyright ? 2020年 小林矿车. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>

int main () {
    char ch = 'a'; //定义
    cout << "请输入需要转换ASCII码的字符，然后回车" << endl ; //用户端提示
    
    cin >> ch; //输入
    
    cout << ch << " 的ASCII码为 " << (int)ch << endl; //输出结果
    
    return 0;
}
