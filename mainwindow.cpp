#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QAbstractItemModel>

#include "exampleamodel.h"
#include "tablemodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  QList<ExampleAModel *> examples = {};
  ExampleAModel *example;

  for (int i = 0; i < 5; i++) {
    example = new ExampleAModel();
    example->setId(i);
    example->setName(QString("Example %0").arg(i));
    example->setDtAtual(example->dtAtual().addDays(i));
    examples.append(example);
  }

  //  ui->twdExample->setModel(new TableModel(examples));
  ui->tvwExample->setModel(new TableModel(examples));
}

MainWindow::~MainWindow() { delete ui; }
