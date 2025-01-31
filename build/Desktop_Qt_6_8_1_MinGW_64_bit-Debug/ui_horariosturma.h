/********************************************************************************
** Form generated from reading UI file 'horariosturma.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HORARIOSTURMA_H
#define UI_HORARIOSTURMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_HorariosTurma
{
public:

    void setupUi(QDialog *HorariosTurma)
    {
        if (HorariosTurma->objectName().isEmpty())
            HorariosTurma->setObjectName("HorariosTurma");
        HorariosTurma->resize(400, 300);

        retranslateUi(HorariosTurma);

        QMetaObject::connectSlotsByName(HorariosTurma);
    } // setupUi

    void retranslateUi(QDialog *HorariosTurma)
    {
        HorariosTurma->setWindowTitle(QCoreApplication::translate("HorariosTurma", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HorariosTurma: public Ui_HorariosTurma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HORARIOSTURMA_H
