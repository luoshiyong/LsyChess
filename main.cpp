#include <QApplication>
#include "board.h"
#include <choose.h>
#include <QDebug>
int main(int argc, char *argv[])
{
    qDebug()<<"12345~";
    QApplication a(argc, argv);
    Board w;
    Choose c;
    if(c.exec()==QDialog::Accepted)                        //当选择对话框上的button被单击调用了accept槽时，显示主窗口
    {
        w.show();
        return a.exec();
    }
    return 0;
}
