#ifndef ITEMLABEL_H
#define ITEMLABEL_H

#include "baselabel.h"

class ItemLabel : public BaseLabel {
public:
    ItemLabel(const QString& text, QWidget* parent = nullptr);
    ItemLabel(QWidget* parent = nullptr);
};

#endif // ITEMLABEL_H
