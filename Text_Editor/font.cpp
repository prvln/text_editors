#include "font.h"


#include <QPalette>

Font::Font(QTextEdit *textEdit) {

    _textEdit = textEdit;
    backgroundColorNow = Qt::white;
    fontColorNow = Qt::black;

}


Font::~Font() {
    delete _textEdit;
}
