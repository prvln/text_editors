#ifndef FONT_H
#define FONT_H
#pragma once


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
#include <QTextEdit>
#include <QPalette>


class Font : QWidget
{
public:

    Font(QTextEdit *textEdit);

    void on_BackGround_Colour_button_clicked();

    void on_setTextColor_button_clicked();

    void on_setTextBackgroundColor_button_clicked();

    void on_set_style_button_clicked();

    ~Font();

private slots:

    QColor backgroundColorNow;
    QColor fontColorNow;

private:
    QTextEdit* _textEdit;

};

#endif // FONT_H
