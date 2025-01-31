/********************************************************************************
** Form generated from reading UI file 'editarprofessor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARPROFESSOR_H
#define UI_EDITARPROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditarProfessor
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nomeLabel;
    QLineEdit *nomeLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *telefoneLabel;
    QLineEdit *telefoneLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoCancelar;
    QPushButton *botaoConfirmar;
    QPushButton *botaoEditarHorarios;

    void setupUi(QDialog *EditarProfessor)
    {
        if (EditarProfessor->objectName().isEmpty())
            EditarProfessor->setObjectName("EditarProfessor");
        EditarProfessor->resize(489, 189);
        verticalLayout_2 = new QVBoxLayout(EditarProfessor);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        nomeLabel = new QLabel(EditarProfessor);
        nomeLabel->setObjectName("nomeLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, nomeLabel);

        nomeLineEdit = new QLineEdit(EditarProfessor);
        nomeLineEdit->setObjectName("nomeLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, nomeLineEdit);

        emailLabel = new QLabel(EditarProfessor);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(EditarProfessor);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, emailLineEdit);

        telefoneLabel = new QLabel(EditarProfessor);
        telefoneLabel->setObjectName("telefoneLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, telefoneLabel);

        telefoneLineEdit = new QLineEdit(EditarProfessor);
        telefoneLineEdit->setObjectName("telefoneLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, telefoneLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        botaoCancelar = new QPushButton(EditarProfessor);
        botaoCancelar->setObjectName("botaoCancelar");

        horizontalLayout->addWidget(botaoCancelar);

        botaoConfirmar = new QPushButton(EditarProfessor);
        botaoConfirmar->setObjectName("botaoConfirmar");

        horizontalLayout->addWidget(botaoConfirmar);

        botaoEditarHorarios = new QPushButton(EditarProfessor);
        botaoEditarHorarios->setObjectName("botaoEditarHorarios");

        horizontalLayout->addWidget(botaoEditarHorarios);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EditarProfessor);

        QMetaObject::connectSlotsByName(EditarProfessor);
    } // setupUi

    void retranslateUi(QDialog *EditarProfessor)
    {
        EditarProfessor->setWindowTitle(QCoreApplication::translate("EditarProfessor", "Dialog", nullptr));
        nomeLabel->setText(QCoreApplication::translate("EditarProfessor", "Nome", nullptr));
        emailLabel->setText(QCoreApplication::translate("EditarProfessor", "Email", nullptr));
        telefoneLabel->setText(QCoreApplication::translate("EditarProfessor", "Telefone", nullptr));
        botaoCancelar->setText(QCoreApplication::translate("EditarProfessor", "Cancelar", nullptr));
        botaoConfirmar->setText(QCoreApplication::translate("EditarProfessor", "Confirmar", nullptr));
        botaoEditarHorarios->setText(QCoreApplication::translate("EditarProfessor", "Editar \n"
" Hor\303\241rios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarProfessor: public Ui_EditarProfessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARPROFESSOR_H
