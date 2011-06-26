#ifndef QLBACKGROUND_H
#define QLBACKGROUND_H

#include <QFrame>

namespace Ui {
    class qlBackground;
}

class qlBackground : public QFrame
{
    Q_OBJECT

public:
    explicit qlBackground(QWidget *parent = 0);
    ~qlBackground();

private:
    Ui::qlBackground *ui;
};

#endif // QLBACKGROUND_H
