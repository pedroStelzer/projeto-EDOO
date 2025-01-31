/********************************************************************************
** Form generated from reading UI file 'horariosalunos.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HORARIOSALUNOS_H
#define UI_HORARIOSALUNOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_HorariosAlunos
{
public:

    void setupUi(QDialog *HorariosAlunos)
    {
        if (HorariosAlunos->objectName().isEmpty())
            HorariosAlunos->setObjectName("HorariosAlunos");
        HorariosAlunos->resize(400, 300);

        retranslateUi(HorariosAlunos);

        QMetaObject::connectSlotsByName(HorariosAlunos);
    } // setupUi

    void retranslateUi(QDialog *HorariosAlunos)
    {
        HorariosAlunos->setWindowTitle(QCoreApplication::translate("HorariosAlunos", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HorariosAlunos: public Ui_HorariosAlunos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HORARIOSALUNOS_H
