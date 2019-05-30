#include "notepad.h"
#include "ui_notepad.h"


NotePad::NotePad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotePad) {
    ui->setupUi(this);
    this->setWindowTitle("TextEditor v.0.2");
    _font = new Font(ui->textEdit);

    connect(ui->setBackgroundButton, &QPushButton::released, this);
}

void NotePad::on_actionOpen_triggered() {
 QString file_name = QFileDialog::getOpenFileName(this,"Open a file");
 QFile file (file_name);
 file_path=file_name;

  if(!file.open(QFile::ReadOnly | QFile::Text)) {
    QMessageBox::critical(this,"Error Opening File","File Cannot be Opened!");
    return;
  }
  else {
    //Read the file
    QTextStream inputData(&file);
    QString fileText = inputData.readAll();
    ui->textEdit->setHtml(fileText);
    file.close();
  }
}

void NotePad::on_actionSave_triggered() {
     QFile file(file_path);
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

void NotePad::on_actionSave_as_triggered() {
    QString file_name = QFileDialog::getSaveFileName(this,"Save a file");
    QFile file (file_name);
    file_path = file_name;
    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        return;
     }
     else {
       //Read the file
       QTextStream writeData(&file);
       QString fileText = ui->textEdit->toHtml();
       writeData << fileText;
       file.flush();
       file.close();
     }
}

void NotePad::on_actionNew_triggered() {
    file_path="";
    ui->textEdit->setText("");
}



void NotePad::on_undo_clicked() {
    ui->textEdit->undo();
}

void NotePad::on_redo_clicked() {
    ui->textEdit->redo();
}

void NotePad::on_button_copy_clicked() {
    ui->textEdit->copy();
}

void NotePad::on_button_paste_clicked() {
    ui->textEdit->paste();
}

NotePad::~NotePad() {
    delete ui;
}
