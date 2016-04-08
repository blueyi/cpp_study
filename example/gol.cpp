// Game of Life.cpp : Defines the entry point for the console application.
// 英国数学家发明的生命游戏 (Game of Life)
// 使用一个2维数组来实现其规则
// 在这个数组中，每个存储位子都能容纳一个LIFE元胞。世代(gennerations)用于标记时间
// 的流逝。每个世代都会LIFE社会带来生与死。
// 生死规则如下:
// * 定义的元胞都有8个邻居。上下左右，左上左下，右上右下八个方位。
// * 如果一个元胞有一个或零个邻居，会因为孤独而死亡。3个以上的邻居会因为拥挤而死亡。
// * 如果空元胞弟正好有3个邻居，会在空元胞的位子生成一个元胞。
// * 生生死死世代交换。

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

#define WLIFE 80
#define HLIFE 20

using namespace std;

void gentions(char LIFE[][WLIFE])
{
    int high,weith;
    int s;
    char LIF[HLIFE][WLIFE];
    for(high=0; high<HLIFE; high++)
        {
            for(weith=0; weith<WLIFE; weith++)
            {
                s=0;
                if(high==0)
                {
                    if(LIFE[high+1][weith]=='*') s++;
                    if(weith==0)
                    {
                        if(LIFE[high+1][weith+1]=='*') s++;
                        if(LIFE[high][weith+1]=='*') s++;
                    }
                    else if(weith==WLIFE-1)
                    {
                        if(LIFE[high+1][weith-1]=='*') s++;
                        if(LIFE[high][weith-1]=='*') s++;
                    }
                    else
                    {
                        if(LIFE[high+1][weith-1]=='*') s++;
                        if(LIFE[high][weith-1]=='*') s++;
                        if(LIFE[high+1][weith+1]=='*') s++;
                        if(LIFE[high][weith+1]=='*') s++;
                    }
                }
                else if(high==HLIFE-1)
                {
                    if(LIFE[high-1][weith]=='*') s++;
                    if(weith==0)
                    {
                        if(LIFE[high-1][weith+1]=='*') s++;
                        if(LIFE[high][weith+1]=='*') s++;
                    }
                    else if(weith==WLIFE-1)
                    {
                        if(LIFE[high-1][weith-1]=='*') s++;
                        if(LIFE[high][weith-1]=='*') s++;
                    }
                    else
                    {
                        if(LIFE[high-1][weith+1]=='*') s++;
                        if(LIFE[high][weith+1]=='*') s++;
                        if(LIFE[high-1][weith-1]=='*') s++;
                        if(LIFE[high][weith-1]=='*') s++;
                    }
                }
                else if(high!=0 && high!=HLIFE-1)
                {
                    if(LIFE[high-1][weith]=='*') s++;
                    if(LIFE[high+1][weith]=='*') s++;
                    if (weith==0)
                    {
                    if(LIFE[high-1][weith+1]=='*') s++;
                    if(LIFE[high][weith+1]=='*') s++;
                    if(LIFE[high+1][weith+1]=='*') s++;
                    }
                    else if(weith==WLIFE-1)
                    {
                    if(LIFE[high-1][weith-1]=='*') s++;
                    if(LIFE[high][weith-1]=='*') s++;
                    if(LIFE[high+1][weith-1]=='*') s++;
                    }
                    else
                    {
                    if(LIFE[high-1][weith-1]=='*') s++;
                    if(LIFE[high][weith-1]=='*') s++;
                    if(LIFE[high+1][weith-1]=='*') s++;
                    if(LIFE[high-1][weith+1]=='*') s++;
                    if(LIFE[high][weith+1]=='*') s++;
                    if(LIFE[high+1][weith+1]=='*') s++;
                    }
                }                
                if(s==3) LIF[high][weith]='*';
                else LIF[high][weith]=' ';
            }
        }

        for(high=0; high<HLIFE; high++)
        {
            for(weith=0; weith<WLIFE; weith++)
            {
                LIFE[high][weith]=LIF[high][weith];
            }
        }
}

int main(int argc, char* argv[])
{
    char LIFE[HLIFE][WLIFE];
    int high,weith;
    char c;
    ifstream in;
    in.open("Generations.dat");
    if(in.fail())
    {
        cout<<"Open the error!";
        exit(1);
    }

    for(high=0; high<HLIFE; high++)
    {
        for(weith=0; weith<WLIFE; weith++)
        {
            in.get(c);
            if(c == '*') LIFE[high][weith]=c;
            else LIFE[high][weith]=' ';
        }
    }

    do
    {
        system("cls");
        for(high=0; high<HLIFE; high++)
        {
            for(weith=0; weith<WLIFE; weith++)
            {
                cout<<LIFE[high][weith];
            }
        }        
        gentions(LIFE);
        cout<<"按回车键查看下一个世代!"<<endl;
        cin.get(c);
    }while (c=='\n');
    return 0;
}
