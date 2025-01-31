/********************************************************************************
** Form generated from reading UI file 'editaraluno.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARALUNO_H
#define UI_EDITARALUNO_H

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

class Ui_EditarAluno
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
    QLabel *moduloAtualLabel;
    QLineEdit *moduloAtualLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoCancelar;
    QPushButton *botaoConfirmar;
    QPushButton *botaoEditarHorarios;

    void setupUi(QDialog *EditarAluno)
    {
        if (EditarAluno->objectName().isEmpty())
            EditarAluno->setObjectName("EditarAluno");
        EditarAluno->resize(499, 219);
        verticalLayout_2 = new QVBoxLayout(EditarAluno);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        nomeLabel = new QLabel(EditarAluno);
        nomeLabel->setObjectName("nomeLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, nomeLabel);

        nomeLineEdit = new QLineEdit(EditarAluno);
        nomeLineEdit->setObjectName("nomeLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nomeLineEdit);

        emailLabel = new QLabel(EditarAluno);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(EditarAluno);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        telefoneLabel = new QLabel(EditarAluno);
        telefoneLabel->setObjectName("telefoneLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, telefoneLabel);

        telefoneLineEdit = new QLineEdit(EditarAluno);
        telefoneLineEdit->setObjectName("telefoneLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, telefoneLineEdit);

        moduloAtualLabel = new QLabel(EditarAluno);
        moduloAtualLabel->setObjectName("moduloAtualLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, moduloAtualLabel);

        moduloAtualLineEdit = new QLineEdit(EditarAluno);
        moduloAtualLineEdit->setObjectName("moduloAtualLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, moduloAtualLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        botaoCancelar = new QPushButton(EditarAluno);
        botaoCancelar->setObjectName("botaoCancelar");

        horizontalLayout->addWidget(botaoCancelar);

        botaoConfirmar = new QPushButton(EditarAluno);
        botaoConfirmar->setObjectName("botaoConfirmar");

        horizontalLayout->addWidget(botaoConfirmar);

        botaoEditarHorarios = new QPushButton(EditarAluno);
        botaoEditarHorarios->setObjectName("botaoEditarHorarios");

        horizontalLayout->addWidget(botaoEditarHorarios);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EditarAluno);

        QMetaObject::connectSlotsByName(EditarAluno);
    } // setupUi

    void retranslateUi(QDialog *EditarAluno)
    {
        EditarAluno->setWindowTitle(QCoreApplication::translate("EditarAluno", "Dialog", nullptr));
        nomeLabel->setText(QCoreApplication::translate("EditarAluno", "Nome", nullptr));
        emailLabel->setText(QCoreApplication::translate("EditarAluno", "Email", nullptr));
        telefoneLabel->setText(QCoreApplication::translate("EditarAluno", "Telefone", nullptr));
        moduloAtualLabel->setText(QCoreApplication::translate("EditarAluno", "M\303\263dulo Atual", nullptr));
        botaoCancelar->setText(QCoreApplication::translate("EditarAluno", "Cancelar", nullptr));
        botaoConfirmar->setText(QCoreApplication::translate("EditarAluno", "Confirmar", nullptr));
        botaoEditarHorarios->setText(QCoreApplication::translate("EditarAluno", "Editar \n"
" Hor\303\241rios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarAluno: public Ui_EditarAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARALUNO_H
