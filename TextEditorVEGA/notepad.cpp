#include "notepad.h"
#include "ui_notepad.h"

NotePad::NotePad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotePad)
{
    ui->setupUi(this);
    this->setWindowTitle("TextEditor v.0.1");
}


void NotePad::on_actionOpen_triggered()
{
 QString file_name = QFileDialog::getOpenFileName(this,"Open a file");
 QFile file (file_name);
 file_path=file_name;

  if(!file.open(QFile::ReadOnly | QFile::Text)){
    QMessageBox::critical(this,"Error Opening File","File Cannot be Opened!");
    return;
  }
  else{
    //Read the file
    QTextStream inputData(&file);
    QString fileText = inputData.readAll();
    ui->textEdit->setHtml(fileText);
    file.close();
  }
}


void NotePad::on_actionSave_as_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this,"Save a file");
    QFile file (file_name);
    file_path = file_name;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        return;
     }
     else{
       //Read the file
       QTextStream writeData(&file);
       QString fileText = ui->textEdit->toHtml();
       writeData << fileText;
       file.flush();
       file.close();
     }
}

NotePad::~NotePad()
{
    delete ui;
}
