#ifndef FORMDELETE_H
#define FORMDELETE_H

#include <QWidget>
#include <QListView>
#include <QStringListModel>

namespace Ui {
class FormDelete;
}

class FormDelete : public QWidget
{
    Q_OBJECT

public:
    explicit FormDelete(QWidget *parent = nullptr);
    ~FormDelete();

    void setModelData(const QStringList &items);

private slots:
    void on_buttonBox_rejected();
    void on_buttonBox_accepted();

private:
    Ui::FormDelete *ui;
    QStringListModel *model;

signals:
    void removeItemSignal(const QString &item);
};

#endif // FORMDELETE_H
