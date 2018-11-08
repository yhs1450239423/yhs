#include "ditu.h"
#include "ui_ditu.h"
#include "count.h"
#include <QDebug>
#include <QPainter>
#include<QPixmap>

ditu::ditu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ditu)
{
    ui->setupUi(this);

    setFixedSize(700,700);

    for(int i=1;i<=32;i++){
        if(count::a[i]) count::pvo++;
    }
    ui->lcdNumber->display(count::pvo);
    ui->lcdNumber_2->display(count::city);
}

void ditu::paintEvent(QPaintEvent *){
    QPainter p(this);//声明一个指向当前的对象

    //qDebug()<<"2"<<endl;

    p.drawPixmap(QPoint (20,20),QPixmap("China.png"));


        if (count::a[1]){
            p.drawPixmap(QPoint (20,20),QPixmap("1beijing.png"));
        }
        if (count::a[2]){
            p.drawPixmap(QPoint (20,20),QPixmap("2tianjin.png"));
        }
        if (count::a[3]){
            p.drawPixmap(QPoint (20,20),QPixmap("3shanghai.png"));
        }
        if (count::a[4]){
            p.drawPixmap(QPoint (20,20),QPixmap("4chongqing.png"));
        }
        if (count::a[5]){
            p.drawPixmap(QPoint (20,20),QPixmap("5hebei.png"));
        }
        if (count::a[6]){
            p.drawPixmap(QPoint (20,20),QPixmap("6henan.png"));
        }
        if (count::a[7]){
            p.drawPixmap(QPoint (20,20),QPixmap("7yunnan.png"));
        }
        if (count::a[8]){
            p.drawPixmap(QPoint (20,20),QPixmap("8liaoning.png"));
        }
        if (count::a[9]){
            p.drawPixmap(QPoint (20,20),QPixmap("9heilongjiang.png"));
        }
        if (count::a[10]){
            p.drawPixmap(QPoint (20,20),QPixmap("10hunan.png"));
        }
        if (count::a[11]){
            p.drawPixmap(QPoint (20,20),QPixmap("11anhui.png"));
        }
        if (count::a[12]){
            p.drawPixmap(QPoint (20,20),QPixmap("12shandong.png"));
        }
        if (count::a[13]){
            p.drawPixmap(QPoint (20,20),QPixmap("13xinjiang.png"));
        }
        if (count::a[14]){
            p.drawPixmap(QPoint (20,20),QPixmap("14jiangsu.png"));
        }
        if (count::a[15]){
            p.drawPixmap(QPoint (20,20),QPixmap("15zhejiang.png"));
        }
        if (count::a[16]){
            p.drawPixmap(QPoint (20,20),QPixmap("16jiangxi.png"));
        }
        if (count::a[17]){
            p.drawPixmap(QPoint (20,20),QPixmap("17hubei.png"));
        }
        if (count::a[18]){
            p.drawPixmap(QPoint (20,20),QPixmap("18guangxi.png"));
        }
        if (count::a[19]){
            p.drawPixmap(QPoint (20,20),QPixmap("19gansu.png"));
        }
        if (count::a[20]){
            p.drawPixmap(QPoint (20,20),QPixmap("20shanxi.png"));
        }
        if (count::a[21]){
            p.drawPixmap(QPoint (20,20),QPixmap("21neimenggu.png"));
        }
        if (count::a[22]){
            p.drawPixmap(QPoint (20,20),QPixmap("22shannxi.png"));
        }
        if (count::a[23]){
            p.drawPixmap(QPoint (20,20),QPixmap("23jilin.png"));
        }
        if (count::a[24]){
            p.drawPixmap(QPoint (20,20),QPixmap("24fujian.png"));
        }
        if (count::a[25]){
            p.drawPixmap(QPoint (20,20),QPixmap("25guizhou.png"));
        }
        if (count::a[26]){
            p.drawPixmap(QPoint (20,20),QPixmap("26guangdong.png"));
        }
        if (count::a[27]){
            p.drawPixmap(QPoint (20,20),QPixmap("27qinghai.png"));
        }
        if (count::a[28]){
            p.drawPixmap(QPoint (20,20),QPixmap("28xizang.png"));
        }
        if (count::a[29]){
            p.drawPixmap(QPoint (20,20),QPixmap("29sichuan.png"));
        }
        if (count::a[30]){
            p.drawPixmap(QPoint (20,20),QPixmap("30ningxia.png"));
        }
        if (count::a[31]){
            p.drawPixmap(QPoint (20,20),QPixmap("31hainan.png"));
        }
        if (count::a[32]){
            p.drawPixmap(QPoint (20,20),QPixmap("32taiwan.png"));
        }
}
/*
void ditu::sum()
{
    for(int i=1;i<=32;i++)
    {
        if(count::a[i]) count::pvo++;
    }
    qDebug()<<count::pvo<<endl;
    qDebug()<<count::city<<endl;
}
*/
ditu::~ditu()
{
    delete ui;
}


