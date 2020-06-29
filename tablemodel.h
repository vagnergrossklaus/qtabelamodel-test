#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>

#include "exampleamodel.h"

class TableModel : public QAbstractTableModel {
public:
  explicit TableModel(const QList<ExampleAModel *> &examples);

  int rowCount(const QModelIndex &parent) const override;
  int columnCount(const QModelIndex &parent) const override;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role = Qt::DisplayRole) const override;
  QVariant data(const QModelIndex &index, int role) const override;

private:
  QList<ExampleAModel *> _examples = {};
};

#endif // TABLEMODEL_H
