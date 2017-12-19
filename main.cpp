//
//  main.cpp
//  UVA-10929-YouCanSay11
//
//  Created by Tina Tsai on 2017/12/12.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//
/*
 Sample Input
 112233
 30800
 2937
 323455693
 5038297
 112234
 0
 Sample Output
 112233 is a multiple of 11.
 30800 is a multiple of 11.
 2937 is a multiple of 11.
 323455693 is a multiple of 11.
 5038297 is a multiple of 11.
 112234 is not a multiple of 11.
 數字過大所以要使用string
 判斷是否為11的倍數：使用奇數位-偶數位的差*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    string n ;
    int odd, even; //判斷奇偶數
    while(getline(cin,n) && n!="0"){
        odd = 0;
        even = 0;
        for(int i = 0;i<n.length();i++){
            if(i%2==0)
                even += n[i] - '0';
            else
                odd += n[i]- '0';
        }
        printf("%s is ",n.c_str());
        if(abs(odd-even)%11!=0)
            printf("not ");
        printf("a multiple of 11.\n");
    }
    return 0;
}
