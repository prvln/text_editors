#ifndef NOTEPAD_H
#define NOTEPAD_H

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

namespace Ui {
class NotePad;
}

class NotePad : public QMainWindow
{
    Q_OBJECT

public:
    explicit NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
    void on_undo_clicked();
    void on_redo_clicked();
    void setBackgroundColorSlot();
    void on_set_style_button_clicked();
    void on_actionNew_triggered();

    void on_button_copy_clicked();

    void on_button_paste_clicked();

private:
    Ui::NotePad *ui;
    QString file_path;
};

#endif // NOTEPAD_H
