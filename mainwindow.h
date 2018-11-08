#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



//声明slot
private slots:


    void sumAll1(bool);
    void sumAll2(bool);
    void sumAll3(bool);
    void sumAll4(bool);
    void sumAll5(bool);
    void sumAll6(bool);
    void sumAll7(bool);
    void sumAll8(bool);
    void sumAll9(bool);
    void sumAll10(bool);
    void sumAll11(bool);
    void sumAll12(bool);
    void sumAll13(bool);
    void sumAll14(bool);
    void sumAll15(bool);
    void sumAll16(bool);
    void sumAll17(bool);
    void sumAll18(bool);
    void sumAll19(bool);
    void sumAll20(bool);
    void sumAll21(bool);
    void sumAll22(bool);
    void sumAll23(bool);
    void sumAll24(bool);
    void sumAll25(bool);
    void sumAll26(bool);
    void sumAll27(bool);
    void sumAll28(bool);
    void sumAll29(bool);
    void sumAll30(bool);
    void sumAll31(bool);
    void sumAll32(bool);
    on_pushButton_clicked();//槽函数

    //void on_pushButton_3_clicked();

    //void on_checkBox_2_clicked(bool checked);//

    void on_pushButton_2_clicked();

    void on_pushButton_2_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
};



#endif // MAINWINDOW_H
