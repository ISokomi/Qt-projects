#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int first_num, second_num, result;

void MainWindow::on_add_button_clicked()
{
    first_num = ui->first_txt->text().toInt();
    second_num = ui->second_txt->text().toInt();

    result = first_num + second_num;

    ui->result_txt->setText(QString::number(result));
}


void MainWindow::on_subtract_button_clicked()
{
    first_num = ui->first_txt->text().toInt();
    second_num = ui->second_txt->text().toInt();

    result = first_num - second_num;

    ui->result_txt->setText(QString::number(result));
}


void MainWindow::on_multiply_button_clicked()
{
    first_num = ui->first_txt->text().toInt();
    second_num = ui->second_txt->text().toInt();

    result = first_num * second_num;

    ui->result_txt->setText(QString::number(result));
}


void MainWindow::on_divide_button_clicked()
{
    first_num = ui->first_txt->text().toInt();
    second_num = ui->second_txt->text().toInt();

    if (second_num != 0) {
        result = first_num / second_num;
    }

    ui->result_txt->setText(QString::number(result));
}

