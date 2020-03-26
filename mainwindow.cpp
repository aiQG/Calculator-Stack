#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //各种初始化
    TEXT="";
    HEXTEXT="";
    NUMBER=0;
    JiShu=10;
    k=i=C=N=0;
    KHNum=0;//括号层数
    KH1=1;
    KH2=0;
    CL=0;//0 不清空 1清空
    SPoint=0;//0 没点 1 有点
    SFH=0;//0 没符号 1 有符号
    ui->setupUi(this);
    setWindowTitle("计算器");
    on_radioButton_3_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="1";
    if(JiShu==16)
    {
        HEXTEXT+="1";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="2";
    if(JiShu==16)
    {
        HEXTEXT+="2";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="3";
    if(JiShu==16)
    {
        HEXTEXT+="3";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="4";
    if(JiShu==16)
    {
        HEXTEXT+="4";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="5";
    if(JiShu==16)
    {
        HEXTEXT+="5";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="6";
    if(JiShu==16)
    {
        HEXTEXT+="6";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="7";
    if(JiShu==16)
    {
        HEXTEXT+="7";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="8";
    if(JiShu==16)
    {
        HEXTEXT+="8";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="9";
    if(JiShu==16)
    {
        HEXTEXT+="9";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_0_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="0";
    if(JiShu==16)
    {
        HEXTEXT+="0";
        ui->textEdit->setText(HEXTEXT);
    }
    else
    {
        ui->textEdit->setText(TEXT);

    }
}

void MainWindow::on_pushButton_Point_clicked()
{

    if(SPoint==0&&SFH==0)
    {
        KH1=KH2=0;
        SPoint=1;
        TEXT+=".";
        ui->textEdit->setText(TEXT);
    }
}
void MainWindow::on_pushButton_Clean_clicked()
{
    //各种初始化

    CL=0;
    KHNum=0;
    KH1=1;
    KH2=0;
    SFH=0;
    SPoint=0;
    TEXT="";
    HEXTEXT="";
    ui->textEdit->setText(TEXT);
}

void MainWindow::on_pushButton_Jia_clicked()
{
    if(SFH==0)
    {
       CL=0;
       KH1=1;
       KH2=0;
       SFH=1;
       SPoint=0;
       TEXT+="+";
       if(JiShu==16)
       {
           HEXTEXT+="+";
           ui->textEdit->setText(HEXTEXT);
       }
       else
       {
           ui->textEdit->setText(TEXT);

       }
    }
}

void MainWindow::on_pushButton_Jian_clicked()
{
    if(SFH==0)
    {
        CL=0;
        KH1=1;
        KH2=0;
        SFH=1;
        SPoint=0;
        TEXT+="-";
        if(JiShu==16)
        {
            HEXTEXT+="-";
            ui->textEdit->setText(HEXTEXT);
        }
        else
        {
            ui->textEdit->setText(TEXT);

        }

    }
}

void MainWindow::on_pushButton_Cheng_clicked()
{
    if(SFH==0)
    {
        CL=0;
        KH1=1;
        KH2=0;
        SFH=1;
        SPoint=0;
        TEXT+="*";
        if(JiShu==16)
        {
            HEXTEXT+="*";
            ui->textEdit->setText(HEXTEXT);
        }
        else
        {
            ui->textEdit->setText(TEXT);

        }
    }
}

void MainWindow::on_pushButton_Chu_clicked()
{
    if(SFH==0)
    {
      CL=0;
      KH1=1;
      KH2=0;
      SFH=1;
      SPoint=0;
      TEXT+="/";
      if(JiShu==16)
      {
          HEXTEXT+="/";
          ui->textEdit->setText(HEXTEXT);
      }
      else
      {
          ui->textEdit->setText(TEXT);

      }
    }
}
void MainWindow::on_pushButton_KH1_clicked()
{
    if(KH1==1)
     {
        CL=0;
        KHNum++;
        SFH=1;
        SPoint=0;
        TEXT+="(";
        if(JiShu==16)
        {
            HEXTEXT+="(";
            ui->textEdit->setText(HEXTEXT);
        }
        else
        {
            ui->textEdit->setText(TEXT);

        }
     }
}
void MainWindow::on_pushButton_KH2_clicked()
{
    if(KH2==1&&KHNum>0)
    {
        CL=0;
        KHNum--;
        SFH=0;
        SPoint=0;
        TEXT+=")";
        if(JiShu==16)
        {
            HEXTEXT+=")";
            ui->textEdit->setText(HEXTEXT);
        }
        else
        {
            ui->textEdit->setText(TEXT);

        }
    }
}

void MainWindow::on_radioButton_clicked()
{
    JiShu=2;
    ui->pushButton_2->setDisabled(1);
    ui->pushButton_3->setDisabled(1);
    ui->pushButton_4->setDisabled(1);
    ui->pushButton_5->setDisabled(1);
    ui->pushButton_6->setDisabled(1);
    ui->pushButton_7->setDisabled(1);
    ui->pushButton_8->setDisabled(1);
    ui->pushButton_9->setDisabled(1);
    ui->pushButton_10->setDisabled(1);
    ui->pushButton_11->setDisabled(1);
    ui->pushButton_12->setDisabled(1);
    ui->pushButton_13->setDisabled(1);
    ui->pushButton_14->setDisabled(1);
    ui->pushButton_15->setDisabled(1);
    ui->pushButton_16->setDisabled(1);
    ui->pushButton_17->setDisabled(1);
    ui->pushButton_18->setDisabled(1);
    ui->pushButton_Point->setDisabled(1);
}

void MainWindow::on_radioButton_2_clicked()
{
    JiShu=8;
    ui->pushButton_2->setDisabled(0);
    ui->pushButton_3->setDisabled(0);
    ui->pushButton_4->setDisabled(0);
    ui->pushButton_5->setDisabled(0);
    ui->pushButton_6->setDisabled(0);
    ui->pushButton_7->setDisabled(0);
    ui->pushButton_8->setDisabled(1);
    ui->pushButton_9->setDisabled(1);
    ui->pushButton_10->setDisabled(1);
    ui->pushButton_11->setDisabled(1);
    ui->pushButton_12->setDisabled(1);
    ui->pushButton_13->setDisabled(1);
    ui->pushButton_14->setDisabled(1);
    ui->pushButton_15->setDisabled(1);
    ui->pushButton_16->setDisabled(1);
    ui->pushButton_17->setDisabled(1);
    ui->pushButton_18->setDisabled(1);
    ui->pushButton_Point->setDisabled(1);
}

void MainWindow::on_radioButton_3_clicked()
{
    JiShu=10;
    ui->pushButton_2->setDisabled(0);
    ui->pushButton_3->setDisabled(0);
    ui->pushButton_4->setDisabled(0);
    ui->pushButton_5->setDisabled(0);
    ui->pushButton_6->setDisabled(0);
    ui->pushButton_7->setDisabled(0);
    ui->pushButton_8->setDisabled(0);
    ui->pushButton_9->setDisabled(0);
    ui->pushButton_10->setDisabled(1);
    ui->pushButton_11->setDisabled(1);
    ui->pushButton_12->setDisabled(1);
    ui->pushButton_13->setDisabled(1);
    ui->pushButton_14->setDisabled(1);
    ui->pushButton_15->setDisabled(1);
    ui->pushButton_16->setDisabled(0);
    ui->pushButton_17->setDisabled(0);
    ui->pushButton_18->setDisabled(0);
    ui->pushButton_Point->setDisabled(0);
}

void MainWindow::on_radioButton_4_clicked()
{
    JiShu=16;
    HEXTEXT=TEXT;
    ui->pushButton_2->setDisabled(0);
    ui->pushButton_3->setDisabled(0);
    ui->pushButton_4->setDisabled(0);
    ui->pushButton_5->setDisabled(0);
    ui->pushButton_6->setDisabled(0);
    ui->pushButton_7->setDisabled(0);
    ui->pushButton_8->setDisabled(0);
    ui->pushButton_9->setDisabled(0);
    ui->pushButton_10->setDisabled(0);
    ui->pushButton_11->setDisabled(0);
    ui->pushButton_12->setDisabled(0);
    ui->pushButton_13->setDisabled(0);
    ui->pushButton_14->setDisabled(0);
    ui->pushButton_15->setDisabled(0);
    ui->pushButton_16->setDisabled(1);
    ui->pushButton_17->setDisabled(1);
    ui->pushButton_18->setDisabled(1);
    ui->pushButton_Point->setDisabled(1);
}






void MainWindow::JisuanChengchu()
{
    double jieguo;
    JS[0].push(Num[N].top());
    Num[N].pop();
    while(Char[C].size()!=0)
    {
        if(Char[C].top()=='*')
        {
            jieguo=Num[N].top()*JS[0].top();
            JS[0].pop();
            Num[N].pop();
            JS[0].push(jieguo);
            Char[C].pop();
        }
        else if(Char[C].top()=='/')
        {
            jieguo=Num[N].top()/JS[0].top();
            JS[0].pop();
            Num[N].pop();
            JS[0].push(jieguo);
            Char[C].pop();
        }
        else if(Char[C].top()=='+'||Char[C].top()=='-')
        {
            FH[0].push(Char[C].top());
            JS[0].push(Num[N].top());
            Char[C].pop();
            Num[N].pop();
        }
    }

}
void MainWindow::JisuanJiajian() //消去加减
{
    double jieguo;
    Num[N].push(JS[0].top());
    JS[0].pop();

    while(FH[0].size()!=0)
    {
        switch(FH[0].top())
        {
            case'+':
                jieguo=Num[N].top()+JS[0].top();
                Num[N].pop();
                JS[0].pop();
                Num[N].push(jieguo);
                FH[0].pop();
                break;
            case'-':
                jieguo=Num[N].top()-JS[0].top();
                Num[N].pop();
                JS[0].pop();
                Num[N].push(jieguo);
                FH[0].pop();
                break;
        }
    }


}

void MainWindow::JiSuan()//主要运算函数
{

    QByteArray TEXTtemp=TEXT.toLocal8Bit();
    strcpy(str,TEXTtemp.data());


    for(;i<strlen(str);i++)
    {
        for(;;i++,k++)
        {
            if((str[i]>='0'&&str[i]<='9')||str[i]=='.')
            {
                temp[k]=str[i];

            }
            else break;
        }
        if(temp[0]!='\0')
            {

                switch(JiShu) //转换为数字 入栈
                {
                    case 2:
                        Num[N].push(Bto10((int)atof(temp)));
                        break;
                    case 8:
                        Num[N].push(Oto10((int)atof(temp)));
                        break;
                    default:
                        Num[N].push(atof(temp));
                        break;

                }




                memset(temp,'\0',strlen(temp)); //清空缓存数组
                k=0;  //准备下一次缓存数字
            }


        if(str[i]!='('&&str[i]!=')')  //加减乘除号入栈
        {
            switch(str[i])
            {
                case'+':
                Char[C].push('+');
                break;

                case'-':
                Char[C].push('-');
                break;

                case'*':
                Char[C].push('*');
                break;

                case'/':
                Char[C].push('/');
                break;
            }
        }


        else if(str[i]=='(')//开新栈
        {
            N++;
            C++;
        }

        else if(str[i]==')')//退栈
        {
            JisuanChengchu();
            JisuanJiajian();
            Num[N-1].push(Num[N].top());
            N--;
            C--;
        }

    }

    JisuanChengchu();
    JisuanJiajian();
    NUMBER=Num[0].top();
    TEXT=QString::number(NUMBER,'f',6);




}




void MainWindow::on_pushButton_Is_clicked()
{
    JiSuan();
    if(JiShu!=10)
    {
        switch(JiShu)
        {
            case 2:
                TEXT=QString::number((int)NUMBER,2);
                break;
            case 8:
                TEXT=QString::number((int)NUMBER,8);
                break;
            case 16:
                TEXT=QString::number((int)NUMBER,16).toUpper();
                break;
        }
    }

//各种初始化


    k=i=C=N=0;
    KHNum=0;//括号层数
    KH1=0;
    KH2=1;
    CL=1;//0 不清空 1清空
    SPoint=0;//0 没点 1 有点
    SFH=0;//0 没符号 1 有符号

    ui->textEdit->setText(TEXT);
}


void MainWindow::on_actionexit_triggered()
{
    exit(1);
}

void MainWindow::on_actionabout_triggered()
{
   QMessageBox::information(NULL,"关于","作者:周峻全\n最后更改于2018年2月22日\n\t版本号:v3.0",QMessageBox::Yes,QMessageBox::Yes);
}

void MainWindow::on_pushButton_10_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;

    HEXTEXT+="A";
    TEXT+="10";
    ui->textEdit->setText(HEXTEXT);
}

void MainWindow::on_pushButton_11_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    HEXTEXT+="B";
    TEXT+="11";
    ui->textEdit->setText(HEXTEXT);
}

void MainWindow::on_pushButton_12_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    HEXTEXT+="C";
    TEXT+="12";
    ui->textEdit->setText(HEXTEXT);
}

void MainWindow::on_pushButton_13_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    HEXTEXT="D";
    TEXT+="13";
    ui->textEdit->setText(HEXTEXT);
}

void MainWindow::on_pushButton_14_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    TEXT+="14";
    HEXTEXT+="E";
    ui->textEdit->setText(HEXTEXT);
}

void MainWindow::on_pushButton_15_clicked()
{
    if(CL)
    {
        TEXT="";
    }
    CL=0;
    KH1=0;
    KH2=1;
    SFH=0;
    HEXTEXT+="F";
    TEXT+="15";
    ui->textEdit->setText(HEXTEXT);
}


void MainWindow::on_pushButton_16_clicked()
{
    on_pushButton_Is_clicked();
    TEXT=QString::number(sin(TEXT.toDouble()),'f',6);
    ui->textEdit->setText(TEXT);
}

void MainWindow::on_pushButton_17_clicked()
{
    on_pushButton_Is_clicked();
    TEXT=QString::number(cos(TEXT.toDouble()),'f',6);
    ui->textEdit->setText(TEXT);
}

void MainWindow::on_pushButton_18_clicked()
{
    on_pushButton_Is_clicked();
    TEXT=QString::number(tan(TEXT.toDouble()),'f',6);
    ui->textEdit->setText(TEXT);
}

void MainWindow::on_pushButton_19_clicked()
{
    system("shutdown -s");
}











//2 to 10
int Bto10(int a)
{
    int temp=0;
    int i=0;
    for(;a!=0;i++)
    {
        temp+= a%10*pow(2,i);
        a=a/10;
    }
    return temp;
}
//8to10
int Oto10(int a)
{
    int temp=0;
    int i=0;
    for(;a!=0;i++)
    {
        temp+= a%10*pow(8,i);
        a=a/10;
    }
    return temp;
}
//16to10
//...
