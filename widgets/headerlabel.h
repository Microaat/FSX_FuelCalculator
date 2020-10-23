#ifndef HEADERLABEL_H
#define HEADERLABEL_H

#include "baselabel.h"

class HeaderLabel : public BaseLabel {
public:
    HeaderLabel(const QString &text, QWidget *parent = nullptr);
    HeaderLabel(QWidget *parent = nullptr);
};

#endif // HEADERLABEL_H
