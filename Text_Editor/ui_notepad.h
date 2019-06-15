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
#include <QtWidgets/QLabel>
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
    QPushButton *redo;
    QPushButton *button_copy;
    QPushButton *setBackgroundButton;
    QLabel *label_3;
    QPushButton *set_style_button;
    QPushButton *button_paste;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;
    QPushButton *undo;
    QPushButton *set_color;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName(QString::fromUtf8("NotePad"));
        NotePad->resize(712, 572);
        actionOpen = new QAction(NotePad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(NotePad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(true);
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
        redo = new QPushButton(centralWidget);
        redo->setObjectName(QString::fromUtf8("redo"));

        gridLayout->addWidget(redo, 2, 2, 1, 1);

        button_copy = new QPushButton(centralWidget);
        button_copy->setObjectName(QString::fromUtf8("button_copy"));

        gridLayout->addWidget(button_copy, 2, 3, 1, 1);

        setBackgroundButton = new QPushButton(centralWidget);
        setBackgroundButton->setObjectName(QString::fromUtf8("setBackgroundButton"));

        gridLayout->addWidget(setBackgroundButton, 2, 6, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 6, 1, 1);

        set_style_button = new QPushButton(centralWidget);
        set_style_button->setObjectName(QString::fromUtf8("set_style_button"));

        gridLayout->addWidget(set_style_button, 2, 5, 1, 1);

        button_paste = new QPushButton(centralWidget);
        button_paste->setObjectName(QString::fromUtf8("button_paste"));

        gridLayout->addWidget(button_paste, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 10, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 3, 0, 1, 11);

        undo = new QPushButton(centralWidget);
        undo->setObjectName(QString::fromUtf8("undo"));

        gridLayout->addWidget(undo, 2, 1, 1, 1);

        set_color = new QPushButton(centralWidget);
        set_color->setObjectName(QString::fromUtf8("set_color"));

        gridLayout->addWidget(set_color, 2, 8, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 5, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 9, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 9, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 8, 1, 1);

        NotePad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotePad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 21));
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
        redo->setText(QApplication::translate("NotePad", "Redo", nullptr));
        button_copy->setText(QApplication::translate("NotePad", "Copy", nullptr));
        setBackgroundButton->setText(QApplication::translate("NotePad", "Set TextColor", nullptr));
        label_3->setText(QApplication::translate("NotePad", "   Font Colour", nullptr));
        set_style_button->setText(QApplication::translate("NotePad", "Set Style", nullptr));
        button_paste->setText(QApplication::translate("NotePad", "Paste", nullptr));
        undo->setText(QApplication::translate("NotePad", "Undo", nullptr));
        set_color->setText(QApplication::translate("NotePad", "Line clr", nullptr));
        label_4->setText(QApplication::translate("NotePad", "       Font", nullptr));
        comboBox->setItemText(0, QApplication::translate("NotePad", "white", nullptr));
        comboBox->setItemText(1, QApplication::translate("NotePad", "black", nullptr));
        comboBox->setItemText(2, QApplication::translate("NotePad", "green", nullptr));
        comboBox->setItemText(3, QApplication::translate("NotePad", "blue", nullptr));
        comboBox->setItemText(4, QApplication::translate("NotePad", "grey", nullptr));
        comboBox->setItemText(5, QApplication::translate("NotePad", "yellow", nullptr));

        label_2->setText(QApplication::translate("NotePad", "BackGround clr", nullptr));
        label->setText(QApplication::translate("NotePad", "  Text Line clr", nullptr));
        menuFile->setTitle(QApplication::translate("NotePad", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
