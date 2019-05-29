#ifndef FONT_H
#define FONT_H

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
#include <QColor>
#include <QTextEdit>

class Font
{
public:
    Font(QTextEdit *textEdit);
    ~Font();

private slots:

    void setBackgroundColorSlot();

    QColor backgroundColorNow;
    QColor fontColorNow;

private:
    QTextEdit *_textEdit;

};

#endif // FONT_H
