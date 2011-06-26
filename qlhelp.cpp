#include "qlhelp.h"
#include "ui_qlhelp.h"
#include <QtGui/QDesktopWidget>

#include <iostream>


qlHelp::qlHelp(QWidget *parent) :
    QFrame(parent, Qt::X11BypassWindowManagerHint),
    ui(new Ui::qlHelp)
{
    ui->setupUi(this);

    const unsigned short widget_width = 360;
    const unsigned short widget_height = 160;
    const unsigned short wid_top_padding = 20;

    const int wid_cntr_pos = ((QApplication::desktop()->width()/2)-(widget_width/2));

    setGeometry( wid_cntr_pos, wid_top_padding, widget_width, widget_height );

    setStyleSheet(QString::fromUtf8(
                      "QFrame {background-color: rgba(0,0,0,0);}"
                      "QFrame#background_frame {border: 1px solid qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(255, 255, 255, 130), stop:1 rgba(0, 0, 0, 0)); border-top: 0; border-bottom: 0;"
                        "background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(255, 255, 255, 65), stop:1 rgba(0, 0, 0, 0));"
                      "}"
                      "QTextBrowser {background-color: rgba(255,255,255,192); border: 1px solid rgba(0,0,0,64); selection-background-color: #abd;}"
                      "QPushButton {background: transparent; color: #ddd; border: 0; border-radius: 8px; margin: 0;}"
                      "QPushButton:hover {background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 255, 255, 16), stop:1 rgba(255, 255, 255, 48)); color: #fff;}"
                      "QPushButton:pressed {background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 255, 255, 32), stop:1 rgba(255, 255, 255, 64)); color: #fff;}"

    ));

    setAttribute(Qt::WA_TranslucentBackground ,true);

}

qlHelp::~qlHelp()
{
    delete ui;
}

void qlHelp::on_pushButton_clicked()
{

}
