/********************************************************************************
** Form generated from reading UI file 'cadastroaluno.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROALUNO_H
#define UI_CADASTROALUNO_H

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

class Ui_CadastroAluno
{
public:
    QHBoxLayout *horizontalLayout_2;
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
    QPushButton *botaoCancelarAluno;
    QPushButton *botaoCadastrarAluno;
    QPushButton *botaoSelecionarHorariosAluno;

    void setupUi(QDialog *CadastroAluno)
    {
        if (CadastroAluno->objectName().isEmpty())
            CadastroAluno->setObjectName("CadastroAluno");
        CadastroAluno->resize(418, 195);
        horizontalLayout_2 = new QHBoxLayout(CadastroAluno);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        nomeLabel = new QLabel(CadastroAluno);
        nomeLabel->setObjectName("nomeLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, nomeLabel);

        nomeLineEdit = new QLineEdit(CadastroAluno);
        nomeLineEdit->setObjectName("nomeLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nomeLineEdit);

        emailLabel = new QLabel(CadastroAluno);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(CadastroAluno);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        telefoneLabel = new QLabel(CadastroAluno);
        telefoneLabel->setObjectName("telefoneLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, telefoneLabel);

        telefoneLineEdit = new QLineEdit(CadastroAluno);
        telefoneLineEdit->setObjectName("telefoneLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, telefoneLineEdit);

        moduloAtualLabel = new QLabel(CadastroAluno);
        moduloAtualLabel->setObjectName("moduloAtualLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, moduloAtualLabel);

        moduloAtualLineEdit = new QLineEdit(CadastroAluno);
        moduloAtualLineEdit->setObjectName("moduloAtualLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, moduloAtualLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        botaoCancelarAluno = new QPushButton(CadastroAluno);
        botaoCancelarAluno->setObjectName("botaoCancelarAluno");

        horizontalLayout->addWidget(botaoCancelarAluno);

        botaoCadastrarAluno = new QPushButton(CadastroAluno);
        botaoCadastrarAluno->setObjectName("botaoCadastrarAluno");

        horizontalLayout->addWidget(botaoCadastrarAluno);

        botaoSelecionarHorariosAluno = new QPushButton(CadastroAluno);
        botaoSelecionarHorariosAluno->setObjectName("botaoSelecionarHorariosAluno");

        horizontalLayout->addWidget(botaoSelecionarHorariosAluno);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(CadastroAluno);

        QMetaObject::connectSlotsByName(CadastroAluno);
    } // setupUi

    void retranslateUi(QDialog *CadastroAluno)
    {
        CadastroAluno->setWindowTitle(QCoreApplication::translate("CadastroAluno", "Dialog", nullptr));
        nomeLabel->setText(QCoreApplication::translate("CadastroAluno", "Nome", nullptr));
        emailLabel->setText(QCoreApplication::translate("CadastroAluno", "Email", nullptr));
        telefoneLabel->setText(QCoreApplication::translate("CadastroAluno", "Telefone", nullptr));
        moduloAtualLabel->setText(QCoreApplication::translate("CadastroAluno", "M\303\263dulo Atual", nullptr));
        botaoCancelarAluno->setText(QCoreApplication::translate("CadastroAluno", "Cancelar", nullptr));
        botaoCadastrarAluno->setText(QCoreApplication::translate("CadastroAluno", "Cadastrar", nullptr));
        botaoSelecionarHorariosAluno->setText(QCoreApplication::translate("CadastroAluno", "Selecionar \n"
" Hor\303\241rios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroAluno: public Ui_CadastroAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNO_H
