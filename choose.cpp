#include "choose.h"
#include <QDebug>
#include "global.h"
Choose::Choose()
{
    qDebug()<<"begin!!!!!!";
    this->resize(800,800);
    this->move(400,50);
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/pic/bg.jpg").scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
    this->setPalette(palette);

    human = new QPushButton(this);
    human->setStyleSheet("QPushButton{border-image:url(:/pic/pp.PNG);background-position: center;}");
    computer=new QPushButton(this);
    computer->setStyleSheet("QPushButton{border-image:url(:/pic/pc.PNG);background-position: center;}");
    human->setGeometry(250,250,300,60);
    computer->setGeometry(250,350,300,60);
    connect(human,SIGNAL(clicked()),this,SLOT(accept()));           //单击时对mode赋值以设置模式
    connect(human,SIGNAL(clicked()),this,SLOT(selecthuman()));
    connect(computer,SIGNAL(clicked()),this,SLOT(accept()));
    connect(computer,SIGNAL(clicked()),this,SLOT(selectcomputer()));


    qDebug()<<"end!";

}

void Choose::selectcomputer()
{
    mode = 0;
}

void Choose::selecthuman()
{
    mode = 1;
}
