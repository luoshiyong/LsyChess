
#ifndef GLOBAL_H
#define GLOBAL_H
#include <QPixmap>
#include <iostream>
#include <QMap>
#include <QString>
#include <QDebug>
extern int mode;
extern int piece[48];
extern int total[400];   //记录当前位置是否有棋子
extern int buju[90];
extern int weizhi[32];
extern int jiang[18];
extern int shi[10];
extern int xiang[14];
extern int chescore[32];
void init();
int posx(int n,int size);              //从数组下标获取像素
int posy(int n,int size);
int getx(int n);
int gety(int n);
int num(int x,int y,int size);          //将像素转化为数组下标
bool findm(int m,int a[],int n);
class mov
{
    public:
        int from;   //初始位置
        int to;      //移动到哪
        int name;   //点中棋子id
        int capture;  //吃的棋子id
    mov()
    {
        from = -1;
        to =-1;
        name =-1;
        capture =-1;
    }
    mov(int name,int captureid,int from,int to)
    {
        this->from = from;
        this->to = to;
        this->name =name;
        capture =captureid;
    }
    void equal(mov a)
    {
        this->from = a.from;
        this->to = a.to;
        this->name =a.name;
        capture =a.capture;
    }
    void clear()
    {
        from = -1;
        to =-1;
        name =-1;
        capture =-1;
    }

};
#endif // GLOBAL_H

