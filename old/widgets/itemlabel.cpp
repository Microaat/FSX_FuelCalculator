#include "itemlabel.h"

ItemLabel::ItemLabel(const QString &text, QWidget *parent):
    BaseLabel(text, parent)
{
    QFont f = font();
    f.setPointSize(10);
    setFont(f);

    setMinimumWidth(80);
    setMaximumWidth(80);
}

ItemLabel::ItemLabel(QWidget* parent):
    ItemLabel("", parent)
{}
