#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCalc_clicked(){
    int trip_fuel = static_cast<int>(ui->spnMaxFuel->value()
        * (static_cast<double>(ui->spnTripDist->value())
            / ui->spnRange->value() + 0.22) + 0.5);

    // Display the fuel required to travel to destination.
    ui->txtResultFuel->setText(QString::number(trip_fuel));

    // Display the max cargo the aircraft can carry to the destination.
    ui->txtResultCargo->setText(QString::number(
        ui->spnWeightMax->value() - (ui->spnWeightMin->value() + trip_fuel)
    ));
}
