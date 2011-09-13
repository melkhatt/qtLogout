#include "qtlogout.h"
#include "ui_qtlogout.h"

#include "commands.h"
#include "qlhelp.h"

#include <QDesktopWidget>

qtLogout::qtLogout(QWidget *parent) :
    QMainWindow(parent, Qt::Window | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint),
    ui(new Ui::qtLogout)
{
    ui->setupUi(this);
    QRect winposition = frameGeometry();
    winposition.moveCenter(QDesktopWidget().availableGeometry().center());
    move(winposition.topLeft());

    setStyleSheet(QString::fromUtf8(
    "QWidget {background-color: rgba(0,0,0,0); color: #fff}" // Global attributes
    "QWidget#centralWidget {"
                      "border: 1px solid qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(255, 255, 255, 130), stop:1 rgba(0, 0, 0, 0)); border-top: 0; border-bottom: 0;"
                      "background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 0), stop:0.45 rgba(255, 255, 255, 60), stop:0.55 rgba(255, 255, 255, 60), stop:1 rgba(0, 0, 0, 0));"
                      "}"
    "QToolButton {background: transparent; color: #ddd; border: 0; border-radius: 8px; margin: 0;}"
    "QToolButton:hover {background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 255, 255, 16), stop:1 rgba(255, 255, 255, 48)); color: #fff;}"
    "QToolButton:pressed {background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 255, 255, 32), stop:1 rgba(255, 255, 255, 64)); color: #fff;}"
    ));
    setAttribute(Qt::WA_TranslucentBackground ,true);


}

qtLogout::~qtLogout()
{
    delete ui;
}

void qtLogout::on_logout_btn_clicked()
{
    system(LOGOUT_CMD);
    qApp->quit();
}

void qtLogout::on_reboot_btn_clicked()
{
    system(REBOOT_CMD);
    qApp->quit();
}

void qtLogout::on_shutdown_btn_clicked()
{
    system(POWEROFF_CMD);
    qApp->quit();
}

void qtLogout::on_suspend_btn_clicked()
{
    system(SUSPEND_CMD);
    qApp->quit();
}

void qtLogout::on_hibernate_btn_clicked()
{
    system(HIBERNATE_CMD);
    qApp->quit();
}

void qtLogout::on_cancel_btn_clicked()
{
    qApp->quit();
}

void qtLogout::on_about_btn_clicked() {

    //setDisabled(true);
    qlHelp *show_help = new qlHelp();
    show_help->show();

}

