#ifndef NOTEPAD_H
#define NOTEPAD_H
#pragma once

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QFontDialog>
#include <QFont>
#include <QFontDatabase>
#include <QTextCursor>
#include <QColor>
#include <QColorDialog>
#include <QtGui>
#include <QApplication>

#include <font.h>

namespace Ui {
class NotePad;
}

class NotePad : public QMainWindow
{
    Q_OBJECT

public:
    explicit NotePad(QWidget *parent = nullptr);
    ~NotePad();

    Ui::NotePad *ui;
private slots:
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
    void on_undo_clicked();
    void on_redo_clicked();


    void on_actionNew_triggered();

    void on_button_copy_clicked();

    void on_button_paste_clicked();


private:

    QString file_path;
    Font *_font;
};

#endif // NOTEPAD_H
