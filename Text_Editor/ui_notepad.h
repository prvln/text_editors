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
#include <QtWidgets/QFontComboBox>
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
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QPushButton *redo;
    QSpacerItem *horizontalSpacer;
    QFontComboBox *fontComboBox;
    QPushButton *undo;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName(QString::fromUtf8("NotePad"));
        NotePad->resize(552, 427);
        actionOpen = new QAction(NotePad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(NotePad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(NotePad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        centralWidget = new QWidget(NotePad);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 3, 1, 1);

        redo = new QPushButton(centralWidget);
        redo->setObjectName(QString::fromUtf8("redo"));

        gridLayout->addWidget(redo, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        gridLayout->addWidget(fontComboBox, 0, 4, 1, 1);

        undo = new QPushButton(centralWidget);
        undo->setObjectName(QString::fromUtf8("undo"));

        gridLayout->addWidget(undo, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 6);

        NotePad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotePad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 552, 21));
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

        retranslateUi(NotePad);

        QMetaObject::connectSlotsByName(NotePad);
    } // setupUi

    void retranslateUi(QMainWindow *NotePad)
    {
        NotePad->setWindowTitle(QApplication::translate("NotePad", "NotePad", nullptr));
        actionOpen->setText(QApplication::translate("NotePad", "Open", nullptr));
        actionSave->setText(QApplication::translate("NotePad", "Save", nullptr));
        actionSave_as->setText(QApplication::translate("NotePad", "Save as", nullptr));
        redo->setText(QApplication::translate("NotePad", "Redo", nullptr));
        undo->setText(QApplication::translate("NotePad", "Undo", nullptr));
        menuFile->setTitle(QApplication::translate("NotePad", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
