#include "baselabel.h"

BaseLabel::BaseLabel(const QString &text, QWidget *parent):
    QLabel(text, parent)
{
    QFont font("serif");
    font.insertSubstitution("seif", "Arial");
    setFont(font);

    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
}

BaseLabel::BaseLabel(QWidget *parent):
    BaseLabel("", parent)
{}
