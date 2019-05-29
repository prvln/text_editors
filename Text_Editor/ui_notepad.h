/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotePad
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionNew;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *set_style_button;
    QPushButton *setBackgroundButton;
    QTextEdit *textEdit;
    QPushButton *button_copy;
    QPushButton *redo;
    QPushButton *button_paste;
    QPushButton *undo;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName(QString::fromUtf8("NotePad"));
        NotePad->resize(678, 511);
        actionOpen = new QAction(NotePad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(NotePad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(NotePad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionNew = new QAction(NotePad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        centralWidget = new QWidget(NotePad);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 7, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 8, 1, 1);

        set_style_button = new QPushButton(centralWidget);
        set_style_button->setObjectName(QString::fromUtf8("set_style_button"));

        gridLayout->addWidget(set_style_button, 0, 5, 1, 1);

        setBackgroundButton = new QPushButton(centralWidget);
        setBackgroundButton->setObjectName(QString::fromUtf8("setBackgroundButton"));

        gridLayout->addWidget(setBackgroundButton, 0, 6, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 9);

        button_copy = new QPushButton(centralWidget);
        button_copy->setObjectName(QString::fromUtf8("button_copy"));

        gridLayout->addWidget(button_copy, 0, 3, 1, 1);

        redo = new QPushButton(centralWidget);
        redo->setObjectName(QString::fromUtf8("redo"));

        gridLayout->addWidget(redo, 0, 2, 1, 1);

        button_paste = new QPushButton(centralWidget);
        button_paste->setObjectName(QString::fromUtf8("button_paste"));

        gridLayout->addWidget(button_paste, 0, 4, 1, 1);

        undo = new QPushButton(centralWidget);
        undo->setObjectName(QString::fromUtf8("undo"));

        gridLayout->addWidget(undo, 0, 1, 1, 1);

        NotePad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotePad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 678, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        NotePad->setMenuBar(menuBar);
        statusBar = new QStatusBar(NotePad);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        NotePad->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionNew);

        retranslateUi(NotePad);

        QMetaObject::connectSlotsByName(NotePad);
    } // setupUi

    void retranslateUi(QMainWindow *NotePad)
    {
        NotePad->setWindowTitle(QApplication::translate("NotePad", "NotePad", nullptr));
        actionOpen->setText(QApplication::translate("NotePad", "Open", nullptr));
        actionSave->setText(QApplication::translate("NotePad", "Save", nullptr));
        actionSave_as->setText(QApplication::translate("NotePad", "Save as", nullptr));
        actionNew->setText(QApplication::translate("NotePad", "New", nullptr));
        set_style_button->setText(QApplication::translate("NotePad", "Set style", nullptr));
        setBackgroundButton->setText(QApplication::translate("NotePad", "Set BackGround", nullptr));
        button_copy->setText(QApplication::translate("NotePad", "Copy", nullptr));
        redo->setText(QApplication::translate("NotePad", "Redo", nullptr));
        button_paste->setText(QApplication::translate("NotePad", "Paste", nullptr));
        undo->setText(QApplication::translate("NotePad", "Undo", nullptr));
        menuFile->setTitle(QApplication::translate("NotePad", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
