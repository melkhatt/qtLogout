#ifndef QLHELP_H
#define QLHELP_H

#include <QFrame>

namespace Ui {
    class qlHelp;
}

class qlHelp : public QFrame
{
    Q_OBJECT

public:
    explicit qlHelp(QWidget *parent = 0);
    ~qlHelp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::qlHelp *ui;
};

#endif // QLHELP_H
