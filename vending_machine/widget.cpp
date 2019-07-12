#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->a1->setEnabled(false);
    ui->a2->setEnabled(false);
    ui->a3->setEnabled(false);
    ui->a4->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int n){
      money+=n;
    ui->lcdNumber->display(QString::number(money));
    //
    //QMessageBox msg;
    //msg.information(nullptr,"title", "text");
    if(money < 10){
      ui->a1->setEnabled(false);
    }
    else{
        ui->a1->setEnabled(true);
    }
    if(money < 50){
      ui->a2->setEnabled(false);
    }
    else{
        ui->a2->setEnabled(true);
    }
    if(money < 100){
      ui->a3->setEnabled(false);
    }
    else{
        ui->a3->setEnabled(true);
    }
    if(money < 500){
      ui->a4->setEnabled(false);
    }
    else{
        ui->a4->setEnabled(true);
    }

}

void Widget::on_pb10_clicked()
{

    changeMoney(10);

    ui->lcdNumber->display(QString::number(money));
    ui->w500l->display(QString::number(0));
    ui->w100l->display(QString::number(0));
    ui->w50l->display(QString::number(0));
    ui->w10l->display(QString::number(0));
}

void Widget::on_pb50_clicked()
{

    changeMoney(50);
    ui->w500l->display(QString::number(0));
    ui->w100l->display(QString::number(0));
    ui->w50l->display(QString::number(0));
    ui->w10l->display(QString::number(0));
    ui->lcdNumber->display(QString::number(money));
}

void Widget::on_pb100_clicked()
{

    changeMoney(100);
    ui->lcdNumber->display(QString::number(money));
    ui->w500l->display(QString::number(0));
    ui->w100l->display(QString::number(0));
    ui->w50l->display(QString::number(0));
    ui->w10l->display(QString::number(0));
}

void Widget::on_pb500_clicked()
{

    changeMoney(500);
    ui->w500l->display(QString::number(0));
    ui->w100l->display(QString::number(0));
    ui->w50l->display(QString::number(0));
    ui->w10l->display(QString::number(0));
    ui->lcdNumber->display(QString::number(money));
}

void Widget::on_a1_clicked()
{
     changeMoney(-10);

     ui->lcdNumber->display(QString::number(money));
}

void Widget::on_a2_clicked()
{
 changeMoney(-50);

 ui->lcdNumber->display(QString::number(money));
}

void Widget::on_a3_clicked()
{
 changeMoney(-100);

 ui->lcdNumber->display(QString::number(money));
}

void Widget::on_a4_clicked()
{
 changeMoney(-500);

 ui->lcdNumber->display(QString::number(money));
}

void Widget::on_refund_clicked()
{
   int k =  (money - money%500)/500;
    ui->w500l->display(QString::number(k));

    int k1 =  (money%500 - money%100)/100;
    ui->w100l->display(QString::number(k1));
    int k2 =  (money%100 - money%50)/50;
    ui->w50l->display(QString::number(k2));
    int k3 =  (money%50 - money%10)/10;
    ui->w10l->display(QString::number(k3));
    QMessageBox msg;
    QString status = QString("500w : %1 \n100w : %2 \n 50w : %3 \n 10w : %4").arg(k).arg(k1).arg(k2).arg(k3);
    msg.information(nullptr,"return",status);
    money = 0;
    ui->lcdNumber->display(QString::number(money));
    ui->a1->setEnabled(false);
    ui->a2->setEnabled(false);
    ui->a3->setEnabled(false);
    ui->a4->setEnabled(false);

}
