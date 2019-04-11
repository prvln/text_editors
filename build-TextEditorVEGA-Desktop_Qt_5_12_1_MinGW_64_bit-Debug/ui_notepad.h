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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
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
    QFontComboBox *fontComboBox;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName(QString::fromUtf8("NotePad"));
        NotePad->resize(715, 507);
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
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        gridLayout->addWidget(fontComboBox, 0, 0, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 3);

        NotePad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotePad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 715, 21));
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
        menuFile->setTitle(QApplication::translate("NotePad", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
