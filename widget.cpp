#include "widget.h"
#include "./ui_widget.h"
#include<QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    changeStatus();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int coin){
    money += coin;
    ui->lcdNumber->display(money);
}

void Widget::changeStatus(){
    if(money < 75){
        ui->pbWater->setEnabled(false);
        ui->pbCoke->setEnabled(false);
        ui->pbTea->setEnabled(false);
        ui->pbCoffe->setEnabled(false);
    }else if( money < 150 ){
        ui->pbWater->setEnabled(true);
        ui->pbCoke->setEnabled(false);
        ui->pbTea->setEnabled(false);
        ui->pbCoffe->setEnabled(false);
    }else if( money < 200 ){
        ui->pbWater->setEnabled(true);
        ui->pbCoke->setEnabled(true);
        ui->pbTea->setEnabled(false);
        ui->pbCoffe->setEnabled(false);
    }else if( money < 300 ){
        ui->pbWater->setEnabled(true);
        ui->pbCoke->setEnabled(true);
        ui->pbTea->setEnabled(true);
        ui->pbCoffe->setEnabled(false);
    }else if( money ){
        ui->pbWater->setEnabled(true);
        ui->pbCoke->setEnabled(true);
        ui->pbTea->setEnabled(true);
        ui->pbCoffe->setEnabled(true);
    }
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
    changeStatus();
}


void Widget::on_pb50_clicked()
{
    changeMoney(50);
    changeStatus();
}


void Widget::on_pb100_clicked()
{
    changeMoney(100);
    changeStatus();
}


void Widget::on_pb500_clicked()
{
    changeMoney(500);
    changeStatus();
}


void Widget::on_pbWater_clicked()
{
    changeMoney(-75);
    changeStatus();
}


void Widget::on_pbCoke_clicked()
{
    changeMoney(-150);
    changeStatus();
}


void Widget::on_pbTea_clicked()
{
    changeMoney(-200);
    changeStatus();
}


void Widget::on_pbCoffe_clicked()
{
    changeMoney(-300);
    changeStatus();
}

void Widget::on_pbReset_clicked()
{
    QMessageBox mb;
    mb.information(nullptr,"Title","Message");
}


void Widget::on_lcdNumber_overflow()
{

}

