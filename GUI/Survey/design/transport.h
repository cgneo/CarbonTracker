#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QDialog>

namespace Ui {
class Transport;
}

class Transport : public QDialog
{
    Q_OBJECT

public:
    explicit Transport(QWidget *parent = nullptr);
    ~Transport();

private:
    Ui::Transport *ui;
};

#endif // TRANSPORT_H
