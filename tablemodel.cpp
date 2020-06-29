#include "tablemodel.h"

TableModel::TableModel(const QList<ExampleAModel *> &examples)
    : _examples(examples) {}

int TableModel::rowCount(const QModelIndex & /*parent*/) const {
  return _examples.count();
}

int TableModel::columnCount(const QModelIndex & /*parent*/) const { return 3; }

QVariant TableModel::headerData(int section, Qt::Orientation orientation,
                                int role) const {
  QVariant variant;

  switch (role) {
  case Qt::DisplayRole:
    if (orientation == Qt::Orientation::Horizontal) {
      switch (section) {
      case 0:
        variant = "Id";
        break;
      case 1:
        variant = "Descrição";
        break;
      case 2:
        variant = "Data";
        break;
      }
    } else if (orientation == Qt::Orientation::Vertical) {
      variant = section + 1;
    }

    break;
  }

  return variant;
}

QVariant TableModel::data(const QModelIndex &index, int role) const {
  QVariant variant;

  switch (role) {
  case Qt::DisplayRole: {
    switch (index.column()) {
    case 0:
      variant = _examples.at(index.row())->id();
      break;
    case 1:
      variant = _examples.at(index.row())->name();
      break;
    case 2:
      variant = _examples.at(index.row())->dtAtual();
      break;
    }

    break;
  }
  case Qt::TextAlignmentRole: {
    switch (index.column()) {
    case 0:
      variant = Qt::AlignRight;
      break;
    case 1:
      variant = Qt::AlignLeft;
      break;
    case 2:
      variant = Qt::AlignCenter;
      break;
    }

    break;
  }
  }

  return variant;
}
