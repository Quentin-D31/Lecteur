#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSound>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // initialisation
    PlayPause = false;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PlayPause_clicked()
{
    static QSound bells("musique.wav");
    if ( bells.isFinished() ) {
        ui->PlayPause->setText("Pause");
        bells.play();
    }
    else
    {
        ui->PlayPause->setText("play");
        bells.stop();
    }
}

