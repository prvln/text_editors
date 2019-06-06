#include "font.h"


Font::Font(QTextEdit *textEdit) {

    _textEdit = textEdit;
    backgroundColorNow = Qt::white;
    fontColorNow = Qt::black;
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

void Font::on_set_color_button_clicked() {
    _textEdit->setTextBackgroundColor(QColorDialog::getColor(Qt::black, this));
}

void Font::setBackgroundColorSlot() {
    _textEdit->setTextColor(QColorDialog::getColor(Qt::black, this));
}

Font::~Font() {
    delete _textEdit;
}

