#ifndef BASELABEL_H
#define BASELABEL_H

#include <QLabel>

class BaseLabel : public QLabel {
public:
    BaseLabel(const QString& text, QWidget* parent = nullptr);
    BaseLabel(QWidget *parent = nullptr);
};

#endif // BASELABEL_H
