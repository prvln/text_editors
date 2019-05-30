#include "font.h"


Font::Font(QTextEdit *textEdit) {

    _textEdit = textEdit;
    backgroundColorNow = Qt::white;
    fontColorNow = Qt::black;
}


Font::~Font() {
    delete _textEdit;
}


void Font::on_set_style_button_clicked() {
        bool ok;

        QFont fontStyle = QFontDialog::getFont(&ok,this);

        if(ok) {
                _textEdit->setCurrentFont(fontStyle);
        }

        else {
                return;
        }
}

void Font::setBackgroundColorSlot() {
    _textEdit->setTextColor(QColorDialog::getColor(Qt::black, this));
}

void Font::on_comboBox_currentTextChanged()
{
    //_textEdit->setStyleSheet("background-color: " + ->comboBox->currentText());

}

void Font::on_comboBox_2_currentTextChanged()
{
    //_textEdit->setStyleSheet("selection-background-color: " + ui->comboBox_2->currentText());
}
