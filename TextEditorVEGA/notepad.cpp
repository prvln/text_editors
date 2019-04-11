#include "notepad.h"
#include "ui_notepad.h"

NotePad::NotePad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotePad)
{
    ui->setupUi(this);
     this->setWindowTitle("TextEditor");
}

NotePad::~NotePad()
{
    delete ui;
}
