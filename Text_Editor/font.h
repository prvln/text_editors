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
#include <QColor>
#include <QTextEdit>
#include <QFontDialog>
#include <QFontDialog>
#include <QPalette>


class Font : QWidget
{
public:
    Font(QTextEdit *textEdit);
    ~Font();

    void setBackgroundColorSlot();

private slots:



    QColor backgroundColorNow;
    QColor fontColorNow;

    void on_comboBox_currentTextChanged();

    void on_comboBox_2_currentTextChanged();

    void on_set_style_button_clicked();


private:
    QTextEdit *_textEdit;

};


#endif // FONT_H
