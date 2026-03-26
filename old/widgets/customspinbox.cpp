#include "customspinbox.h"

CustomSpinBox::CustomSpinBox(QWidget *parent):
    QSpinBox(parent)
{
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    setMinimumWidth(80);
    setMaximumWidth(80);

    setRange(0, 9999999);
    setSingleStep(100);

    QFont font("serif", 10);
    font.insertSubstitution("seif", "Arial");
    setFont(font);
}
