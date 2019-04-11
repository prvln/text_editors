#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <qtextedit.h>
#include <QFontDialog>
#include <QFont>
#include <QFontDatabase>
#include <QTextCursor>
#include <QColor>
#include <QColorDialog>
#include <QSyntaxHighlighter>
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
    void on_actionSave_as_triggered();



private:
    Ui::NotePad *ui;
    QString file_path;
};

#endif // NOTEPAD_H
