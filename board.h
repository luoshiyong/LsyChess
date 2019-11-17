#ifndef BOARD_H
#define BOARD_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QProgressBar>
#include "global.h"
class Board : public QMainWindow
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = 0);
    int size,flag,times,control;          //size为棋盘大小参数，flag为鼠标点击的标志位，control用来控制分出胜负后不再走棋
    QLabel *chess[32];                      //32个棋子
    QPixmap pic[34];
    QLabel *labelMousePos;     //走棋框
    QLabel *tips;                           //提示哪一方走棋以及是否被将军
    QProgressBar *progress;   //进度条
    void refresh(int *torefresh);
    bool hasclick;     //是否已经选中棋子
    int doubleclick;
    int haschess(int m);  //判断该处是否有棋子，有返回标识符，没有-1
    QLabel *red;
    QLabel *black;
    bool canmove(int chessid,int captureid,int from,int to);
    int isturn;
    QVector<mov> getallstep();
    void fakemove(mov step);
    void unfakemove(mov step);
    int ctscore();
signals:
    void humanfin();
    void pcfin();
protected:
    void mousePressEvent(QMouseEvent *e);//鼠标点击的响应函数
    void paintEvent(QPaintEvent *);   //绘制棋盘
public slots:
    mov getbestmove();
    void restohf();
    void restocf();
};

#endif // BOARD_H
