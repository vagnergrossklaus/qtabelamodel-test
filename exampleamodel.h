#ifndef EXAMPLEAMODEL_H
#define EXAMPLEAMODEL_H

#include <QDate>
#include <QString>

class ExampleAModel {
public:
  ExampleAModel();

  int id() const;
  void setId(int id);

  QString name() const;
  void setName(const QString &name);

  QDate dtAtual() const;
  void setDtAtual(const QDate &dtAtual);

private:
  int _id = 0;
  QString _name = "";
  QDate _dtAtual = QDate::currentDate();
};

#endif // EXAMPLEAMODEL_H
