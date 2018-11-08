#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "count.h"
#include<QDebug>
#include<QCheckBox>
#include "chuangkou.h"
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->r1->setCheckable(true);//设置成bool型
/*
    player = new QMediaPlayer;
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setMedia(QUrl::fromLocalFile("D:\\CloudMusic\\Hoaprox - Ngẫu Hứng.mp3"));
    player->setVolume(120);
    player->play();
*/
/*加载动图
   QMovie *movie = new QMovie(":/666");
    ui->label->setMovie(movie);
    movie->start();
*/
    //信号和槽函数连接，真特么多
    connect(ui->r1,SIGNAL(clicked(bool)),this,SLOT(sumAll1(bool)));
    connect(ui->r2,SIGNAL(clicked(bool)),this,SLOT(sumAll2(bool)));
    connect(ui->r3_2,SIGNAL(clicked(bool)),this,SLOT(sumAll3(bool)));
    connect(ui->r4_2,SIGNAL(clicked(bool)),this,SLOT(sumAll4(bool)));
    connect(ui->r51_2,SIGNAL(clicked(bool)),this,SLOT(sumAll5(bool)));
    connect(ui->r52_2,SIGNAL(clicked(bool)),this,SLOT(sumAll5(bool)));
    connect(ui->r53_2,SIGNAL(clicked(bool)),this,SLOT(sumAll5(bool)));
    connect(ui->r54_2,SIGNAL(clicked(bool)),this,SLOT(sumAll5(bool)));

    connect(ui->r61_2,SIGNAL(clicked(bool)),this,SLOT(sumAll6(bool)));
    connect(ui->r62_2,SIGNAL(clicked(bool)),this,SLOT(sumAll6(bool)));
    connect(ui->r63_2,SIGNAL(clicked(bool)),this,SLOT(sumAll6(bool)));
    connect(ui->r64_2,SIGNAL(clicked(bool)),this,SLOT(sumAll6(bool)));

    connect(ui->r71_2,SIGNAL(clicked(bool)),this,SLOT(sumAll7(bool)));
    connect(ui->r72_2,SIGNAL(clicked(bool)),this,SLOT(sumAll7(bool)));
    connect(ui->r73_2,SIGNAL(clicked(bool)),this,SLOT(sumAll7(bool)));
    connect(ui->r74_2,SIGNAL(clicked(bool)),this,SLOT(sumAll7(bool)));

    connect(ui->r81_2,SIGNAL(clicked(bool)),this,SLOT(sumAll8(bool)));
    connect(ui->r82_2,SIGNAL(clicked(bool)),this,SLOT(sumAll8(bool)));
    connect(ui->r83_2,SIGNAL(clicked(bool)),this,SLOT(sumAll8(bool)));
    connect(ui->r84_2,SIGNAL(clicked(bool)),this,SLOT(sumAll8(bool)));

    connect(ui->r91_2,SIGNAL(clicked(bool)),this,SLOT(sumAll9(bool)));
    connect(ui->r92_2,SIGNAL(clicked(bool)),this,SLOT(sumAll9(bool)));
    connect(ui->r93_2,SIGNAL(clicked(bool)),this,SLOT(sumAll9(bool)));
    connect(ui->r94_2,SIGNAL(clicked(bool)),this,SLOT(sumAll9(bool)));

    connect(ui->r101_2,SIGNAL(clicked(bool)),this,SLOT(sumAll10(bool)));
    connect(ui->r102_2,SIGNAL(clicked(bool)),this,SLOT(sumAll10(bool)));
    connect(ui->r103_2,SIGNAL(clicked(bool)),this,SLOT(sumAll10(bool)));
    connect(ui->r104_2,SIGNAL(clicked(bool)),this,SLOT(sumAll10(bool)));

    connect(ui->r111_2,SIGNAL(clicked(bool)),this,SLOT(sumAll11(bool)));
    connect(ui->r112_2,SIGNAL(clicked(bool)),this,SLOT(sumAll11(bool)));
    connect(ui->r113_2,SIGNAL(clicked(bool)),this,SLOT(sumAll11(bool)));
    connect(ui->r114_2,SIGNAL(clicked(bool)),this,SLOT(sumAll11(bool)));

    connect(ui->r121_2,SIGNAL(clicked(bool)),this,SLOT(sumAll12(bool)));
    connect(ui->r122_2,SIGNAL(clicked(bool)),this,SLOT(sumAll12(bool)));
    connect(ui->r123_2,SIGNAL(clicked(bool)),this,SLOT(sumAll12(bool)));
    connect(ui->r124_2,SIGNAL(clicked(bool)),this,SLOT(sumAll12(bool)));

    connect(ui->r131_2,SIGNAL(clicked(bool)),this,SLOT(sumAll13(bool)));
    connect(ui->r132_2,SIGNAL(clicked(bool)),this,SLOT(sumAll13(bool)));
    connect(ui->r133_2,SIGNAL(clicked(bool)),this,SLOT(sumAll13(bool)));
    connect(ui->r134_2,SIGNAL(clicked(bool)),this,SLOT(sumAll13(bool)));

    connect(ui->r141_2,SIGNAL(clicked(bool)),this,SLOT(sumAll14(bool)));
    connect(ui->r142_2,SIGNAL(clicked(bool)),this,SLOT(sumAll14(bool)));
    connect(ui->r143_2,SIGNAL(clicked(bool)),this,SLOT(sumAll14(bool)));
    connect(ui->r144_2,SIGNAL(clicked(bool)),this,SLOT(sumAll14(bool)));

    connect(ui->r151_2,SIGNAL(clicked(bool)),this,SLOT(sumAll15(bool)));
    connect(ui->r152_2,SIGNAL(clicked(bool)),this,SLOT(sumAll15(bool)));
    connect(ui->r153_2,SIGNAL(clicked(bool)),this,SLOT(sumAll15(bool)));
    connect(ui->r154_2,SIGNAL(clicked(bool)),this,SLOT(sumAll15(bool)));

    connect(ui->r161_2,SIGNAL(clicked(bool)),this,SLOT(sumAll16(bool)));
    connect(ui->r162_2,SIGNAL(clicked(bool)),this,SLOT(sumAll16(bool)));
    connect(ui->r163_2,SIGNAL(clicked(bool)),this,SLOT(sumAll16(bool)));
    connect(ui->r164_2,SIGNAL(clicked(bool)),this,SLOT(sumAll16(bool)));

    connect(ui->r171_2,SIGNAL(clicked(bool)),this,SLOT(sumAll17(bool)));
    connect(ui->r172_2,SIGNAL(clicked(bool)),this,SLOT(sumAll17(bool)));
    connect(ui->r173_2,SIGNAL(clicked(bool)),this,SLOT(sumAll17(bool)));
    connect(ui->r174_2,SIGNAL(clicked(bool)),this,SLOT(sumAll17(bool)));

    connect(ui->r181_2,SIGNAL(clicked(bool)),this,SLOT(sumAll18(bool)));
    connect(ui->r182_2,SIGNAL(clicked(bool)),this,SLOT(sumAll18(bool)));
    connect(ui->r183_2,SIGNAL(clicked(bool)),this,SLOT(sumAll18(bool)));
    connect(ui->r184_2,SIGNAL(clicked(bool)),this,SLOT(sumAll18(bool)));

    connect(ui->r191_2,SIGNAL(clicked(bool)),this,SLOT(sumAll19(bool)));
    connect(ui->r192_2,SIGNAL(clicked(bool)),this,SLOT(sumAll19(bool)));
    connect(ui->r193_2,SIGNAL(clicked(bool)),this,SLOT(sumAll19(bool)));
    connect(ui->r194_2,SIGNAL(clicked(bool)),this,SLOT(sumAll19(bool)));

    connect(ui->r201_2,SIGNAL(clicked(bool)),this,SLOT(sumAll20(bool)));
    connect(ui->r202_2,SIGNAL(clicked(bool)),this,SLOT(sumAll20(bool)));
    connect(ui->r203_2,SIGNAL(clicked(bool)),this,SLOT(sumAll20(bool)));
    connect(ui->r204_2,SIGNAL(clicked(bool)),this,SLOT(sumAll20(bool)));

    connect(ui->r211_2,SIGNAL(clicked(bool)),this,SLOT(sumAll21(bool)));
    connect(ui->r212_2,SIGNAL(clicked(bool)),this,SLOT(sumAll21(bool)));
    connect(ui->r213_2,SIGNAL(clicked(bool)),this,SLOT(sumAll21(bool)));
    connect(ui->r214_2,SIGNAL(clicked(bool)),this,SLOT(sumAll21(bool)));

    connect(ui->r221_2,SIGNAL(clicked(bool)),this,SLOT(sumAll22(bool)));
    connect(ui->r222_2,SIGNAL(clicked(bool)),this,SLOT(sumAll22(bool)));
    connect(ui->r223_2,SIGNAL(clicked(bool)),this,SLOT(sumAll22(bool)));
    connect(ui->r224_2,SIGNAL(clicked(bool)),this,SLOT(sumAll22(bool)));

    connect(ui->r231_2,SIGNAL(clicked(bool)),this,SLOT(sumAll23(bool)));
    connect(ui->r232_2,SIGNAL(clicked(bool)),this,SLOT(sumAll23(bool)));
    connect(ui->r233_2,SIGNAL(clicked(bool)),this,SLOT(sumAll23(bool)));
    connect(ui->r234_2,SIGNAL(clicked(bool)),this,SLOT(sumAll23(bool)));

    connect(ui->r241_2,SIGNAL(clicked(bool)),this,SLOT(sumAll24(bool)));
    connect(ui->r242_2,SIGNAL(clicked(bool)),this,SLOT(sumAll24(bool)));
    connect(ui->r243_2,SIGNAL(clicked(bool)),this,SLOT(sumAll24(bool)));
    connect(ui->r244_2,SIGNAL(clicked(bool)),this,SLOT(sumAll24(bool)));

    connect(ui->r251_2,SIGNAL(clicked(bool)),this,SLOT(sumAll25(bool)));
    connect(ui->r252_2,SIGNAL(clicked(bool)),this,SLOT(sumAll25(bool)));
    connect(ui->r253_2,SIGNAL(clicked(bool)),this,SLOT(sumAll25(bool)));
    connect(ui->r254_2,SIGNAL(clicked(bool)),this,SLOT(sumAll25(bool)));

    connect(ui->r261_2,SIGNAL(clicked(bool)),this,SLOT(sumAll26(bool)));
    connect(ui->r262_2,SIGNAL(clicked(bool)),this,SLOT(sumAll26(bool)));
    connect(ui->r263_2,SIGNAL(clicked(bool)),this,SLOT(sumAll26(bool)));
    connect(ui->r264_2,SIGNAL(clicked(bool)),this,SLOT(sumAll26(bool)));

    connect(ui->r271_2,SIGNAL(clicked(bool)),this,SLOT(sumAll27(bool)));
    connect(ui->r272_2,SIGNAL(clicked(bool)),this,SLOT(sumAll27(bool)));
    connect(ui->r273_2,SIGNAL(clicked(bool)),this,SLOT(sumAll27(bool)));
    connect(ui->r274_2,SIGNAL(clicked(bool)),this,SLOT(sumAll27(bool)));

    connect(ui->r281_2,SIGNAL(clicked(bool)),this,SLOT(sumAll28(bool)));
    connect(ui->r282_2,SIGNAL(clicked(bool)),this,SLOT(sumAll28(bool)));
    connect(ui->r283_2,SIGNAL(clicked(bool)),this,SLOT(sumAll28(bool)));
    connect(ui->r284_2,SIGNAL(clicked(bool)),this,SLOT(sumAll28(bool)));

    connect(ui->r291_2,SIGNAL(clicked(bool)),this,SLOT(sumAll29(bool)));
    connect(ui->r292_2,SIGNAL(clicked(bool)),this,SLOT(sumAll29(bool)));
    connect(ui->r293_2,SIGNAL(clicked(bool)),this,SLOT(sumAll29(bool)));
    connect(ui->r294_2,SIGNAL(clicked(bool)),this,SLOT(sumAll29(bool)));

    connect(ui->r301_2,SIGNAL(clicked(bool)),this,SLOT(sumAll30(bool)));
    connect(ui->r302_2,SIGNAL(clicked(bool)),this,SLOT(sumAll30(bool)));
    connect(ui->r303_2,SIGNAL(clicked(bool)),this,SLOT(sumAll30(bool)));
    connect(ui->r304_2,SIGNAL(clicked(bool)),this,SLOT(sumAll30(bool)));

    connect(ui->r311_2,SIGNAL(clicked(bool)),this,SLOT(sumAll31(bool)));
    connect(ui->r312_2,SIGNAL(clicked(bool)),this,SLOT(sumAll31(bool)));

    connect(ui->r321_2,SIGNAL(clicked(bool)),this,SLOT(sumAll32(bool)));
    connect(ui->r322_2,SIGNAL(clicked(bool)),this,SLOT(sumAll32(bool)));
    connect(ui->r323_2,SIGNAL(clicked(bool)),this,SLOT(sumAll32(bool)));
    connect(ui->r324_2,SIGNAL(clicked(bool)),this,SLOT(sumAll32(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


//点击pushButton，弹出地图窗口，隐藏当前窗口
MainWindow::on_pushButton_clicked()
{
   this->hide();
   chuangkou::init();
   chuangkou::p_ditu->show();
}

//槽函数实现
void MainWindow::sumAll1(bool ret)
{
    if(ret) count::a[1]++;
    else count::a[1]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll2(bool ret)
{
    if(ret) count::a[2]++;
    else count::a[2]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll3(bool ret)
{
    if(ret) count::a[3]++;
    else count::a[3]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll4(bool ret)
{
    if(ret) count::a[4]++;
    else count::a[4]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll5(bool ret)
{
    if(ret) count::a[5]++;
    else count::a[5]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll6(bool ret)
{
    if(ret) count::a[6]++;
    else count::a[6]--;
    if(ret) count::city++;
    else count::city--;
}

void MainWindow::sumAll7(bool ret)
{
    if(ret) count::a[7]++;
    else count::a[7]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll8(bool ret)
{
    if(ret) count::a[8]++;
    else count::a[8]--;
    if(ret) count::city++;
    else count::city--;
}

void MainWindow::sumAll9(bool ret)
{
    if(ret) count::a[9]++;
    else count::a[9]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll10(bool ret)
{
    if(ret) count::a[10]++;
    else count::a[10]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll11(bool ret)
{
    if(ret) count::a[11]++;
    else count::a[11]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll12(bool ret)
{
    if(ret) count::a[12]++;
    else count::a[12]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll13(bool ret)
{
    if(ret) count::a[13]++;
    else count::a[13]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll14(bool ret)
{
    if(ret) count::a[14]++;
    else count::a[14]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll15(bool ret)
{
    if(ret) count::a[15]++;
    else count::a[15]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll16(bool ret)
{
    if(ret) count::a[16]++;
    else count::a[16]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll17(bool ret)
{
    if(ret) count::a[17]++;
    else count::a[17]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll18(bool ret)
{
    if(ret) count::a[18]++;
    else count::a[18]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll19(bool ret)
{
    if(ret) count::a[19]++;
    else count::a[19]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll20(bool ret)
{
    if(ret) count::a[20]++;
    else count::a[20]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll21(bool ret)
{
    if(ret) count::a[21]++;
    else count::a[21]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll22(bool ret)
{
    if(ret) count::a[22]++;
    else count::a[22]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll23(bool ret)
{
    if(ret) count::a[23]++;
    else count::a[23]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll24(bool ret)
{
    if(ret) count::a[24]++;
    else count::a[24]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll25(bool ret)
{
    if(ret) count::a[25]++;
    else count::a[25]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll26(bool ret)
{
    if(ret) count::a[26]++;
    else count::a[26]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll27(bool ret)
{
    if(ret) count::a[27]++;
    else count::a[27]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll28(bool ret)
{
    if(ret) count::a[28]++;
    else count::a[28]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll29(bool ret)
{
    if(ret) count::a[29]++;
    else count::a[29]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll30(bool ret)
{
    if(ret) count::a[30]++;
    else count::a[30]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll31(bool ret)
{
    if(ret) count::a[31]++;
    else count::a[31]--;
    if(ret) count::city++;
    else count::city--;
}
void MainWindow::sumAll32(bool ret)
{
    if(ret) count::a[32]++;
    else count::a[32]--;
    if(ret) count::city++;
    else count::city--;
}


/*

void MainWindow::on_checkBox_2_clicked(bool checked)
{
    //音乐播放
    player = new QMediaPlayer;
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setMedia(QUrl::fromLocalFile("D:\\CloudMusic\\Hoaprox - Ngẫu Hứng.mp3"));
    player->setVolume(100);
    player->play();
}
*/
/*
void MainWindow::on_pushButton_2_clicked()
{
    //音乐播放
    player = new QMediaPlayer;
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setMedia(QUrl::fromLocalFile("D:\\CloudMusic\\Hoaprox - Ngẫu Hứng.mp3"));
    player->setVolume(100);
    player->play();
}
*/

void MainWindow::on_pushButton_2_clicked()
{
    //音乐播放

        player = new QMediaPlayer;
        connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
        player->setMedia(QUrl::fromLocalFile("D:\\CloudMusic\\Hoaprox - Ngẫu Hứng.mp3"));
        player->setVolume(100);
        player->play();

}

/*
void MainWindow::on_pushButton_2_clicked()
{
    player->play();
}
*/

void MainWindow::on_pushButton_3_clicked()
{
    player->pause();
}
