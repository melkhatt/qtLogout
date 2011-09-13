#ifndef QTLOGOUT_H
#define QTLOGOUT_H

#include <QMainWindow>

namespace Ui {
    class qtLogout;
}

class qtLogout : public QMainWindow
{
    Q_OBJECT

public:
    explicit qtLogout(QWidget *parent = 0);
    ~qtLogout();

private slots:
    void on_logout_btn_clicked();

    void on_reboot_btn_clicked();

    void on_shutdown_btn_clicked();

    void on_suspend_btn_clicked();

    void on_cancel_btn_clicked();

    void on_about_btn_clicked();

    void on_hibernate_btn_clicked();

private:
    Ui::qtLogout *ui;
};

#endif // QTLOGOUT_H
