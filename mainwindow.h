#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <stdlib.h>
#include <QMessageBox>
#include<QString>
#include<QStack>
#include <QMainWindow>
#include<math.h>
int Oto10(int);
int Bto10(int);
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:

    QStack <double> Num[100];
    QStack  <char> Char[100];
    QStack <double>  JS[1];
    QStack  <char>   FH[1];

    int JiShu;//进制
    double NUMBER;//换进制
    double num[100];
    char fuhao[100];
    char temp[1000];
    char  str[1000];

    int k;
    unsigned int i;
    int N;
    int C;


    QString HEXTEXT;//对于16进制的文本显示
    QString TEXT;//提取的文本
    bool SPoint;//防止多个小数点
    bool SFH;//防止多个运算符号
    bool KH1;//是否可以用左括号
    bool KH2;//是否可以用右括号
    bool CL;//下次操作是否清空文本框
    int KHNum;//记录几重括号（防止右括号太多）
private slots:



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Point_clicked();

    void on_pushButton_Clean_clicked();

    void on_pushButton_Jia_clicked();

    void on_pushButton_Jian_clicked();

    void on_pushButton_Cheng_clicked();

    void on_pushButton_Chu_clicked();

    void on_pushButton_KH1_clicked();

    void on_pushButton_KH2_clicked();
    void JiSuan();
    void JisuanJiajian();
    void JisuanChengchu();

    void on_pushButton_Is_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_actionexit_triggered();

    void on_actionabout_triggered();



    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
