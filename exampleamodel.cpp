#include "exampleamodel.h"

ExampleAModel::ExampleAModel() {}

int ExampleAModel::id() const { return _id; }

void ExampleAModel::setId(int id) { _id = id; }

QString ExampleAModel::name() const { return _name; }

void ExampleAModel::setName(const QString &name) { _name = name; }

QDate ExampleAModel::dtAtual() const { return _dtAtual; }

void ExampleAModel::setDtAtual(const QDate &dtAtual) { _dtAtual = dtAtual; }
