#include "headerlabel.h"


HeaderLabel::HeaderLabel(const QString &text, QWidget *parent):
    BaseLabel(text, parent)
{
    QFont f = font();
    f.setBold(true);
    f.setPointSize(10);
    setFont(f);
}

HeaderLabel::HeaderLabel(QWidget *parent):
    HeaderLabel("", parent)
{

}
