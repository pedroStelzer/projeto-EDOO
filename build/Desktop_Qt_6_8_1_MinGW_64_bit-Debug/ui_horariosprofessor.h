/********************************************************************************
** Form generated from reading UI file 'horariosprofessor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HORARIOSPROFESSOR_H
#define UI_HORARIOSPROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Horariosprofessor
{
public:

    void setupUi(QDialog *Horariosprofessor)
    {
        if (Horariosprofessor->objectName().isEmpty())
            Horariosprofessor->setObjectName("Horariosprofessor");
        Horariosprofessor->resize(400, 300);

        retranslateUi(Horariosprofessor);

        QMetaObject::connectSlotsByName(Horariosprofessor);
    } // setupUi

    void retranslateUi(QDialog *Horariosprofessor)
    {
        Horariosprofessor->setWindowTitle(QCoreApplication::translate("Horariosprofessor", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Horariosprofessor: public Ui_Horariosprofessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HORARIOSPROFESSOR_H
