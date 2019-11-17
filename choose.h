#ifndef CHOOSE_H
#define CHOOSE_H
#include <QDialog>
#include <QPushButton>
class Choose : public QDialog
{
public:
    Choose();

public slots:
    void selecthuman();
    void selectcomputer();
private:
    QPushButton *human;
    QPushButton *computer;
};

#endif // CHOOSE_H
