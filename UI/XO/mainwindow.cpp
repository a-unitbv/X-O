#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->playerVsPlayerButton, &QPushButton::clicked, this, &MainWindow::HandlePlayerVsPlayerButtonClicked);
    connect(ui->playerVsComputerButton, &QPushButton::clicked, this, &MainWindow::HandlePlayerVsComputerButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::HandlePlayerVsPlayerButtonClicked()
{
    bool isPlayerVsComputerMode = false;
    hide();
    xo = new XO();
    xo->show();
    xo->SetIsPlayerVsComputerMode(isPlayerVsComputerMode);
}

void MainWindow::HandlePlayerVsComputerButtonClicked()
{
    bool isPlayerVsComputerMode = true;
    hide();
    xo = new XO();
    xo->show();
    xo->SetIsPlayerVsComputerMode(isPlayerVsComputerMode);
}
