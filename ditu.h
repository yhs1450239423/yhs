#ifndef DITU_H
#define DITU_H

#include <QWidget>

namespace Ui {
class ditu;
}

class ditu : public QWidget
{
    Q_OBJECT

public:
    explicit ditu(QWidget *parent = 0);
    ~ditu();
    void paintEvent(QPaintEvent *);
    void sum();

private:
    Ui::ditu *ui;
};

#endif // DITU_H
