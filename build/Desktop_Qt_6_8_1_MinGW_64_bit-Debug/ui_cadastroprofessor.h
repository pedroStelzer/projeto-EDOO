/********************************************************************************
** Form generated from reading UI file 'cadastroprofessor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROPROFESSOR_H
#define UI_CADASTROPROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroProfessor
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nomeLabel;
    QLineEdit *nomeLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *telefoneLabel;
    QLineEdit *telefoneLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoCancelaProfessor;
    QPushButton *botaoCadastraProfessor;
    QPushButton *botaoSelecionaHorariosProfessor;

    void setupUi(QDialog *CadastroProfessor)
    {
        if (CadastroProfessor->objectName().isEmpty())
            CadastroProfessor->setObjectName("CadastroProfessor");
        CadastroProfessor->resize(400, 300);
        verticalLayoutWidget = new QWidget(CadastroProfessor);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 60, 363, 169));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        nomeLabel = new QLabel(verticalLayoutWidget);
        nomeLabel->setObjectName("nomeLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, nomeLabel);

        nomeLineEdit = new QLineEdit(verticalLayoutWidget);
        nomeLineEdit->setObjectName("nomeLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nomeLineEdit);

        emailLabel = new QLabel(verticalLayoutWidget);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(verticalLayoutWidget);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        telefoneLabel = new QLabel(verticalLayoutWidget);
        telefoneLabel->setObjectName("telefoneLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, telefoneLabel);

        telefoneLineEdit = new QLineEdit(verticalLayoutWidget);
        telefoneLineEdit->setObjectName("telefoneLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, telefoneLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        botaoCancelaProfessor = new QPushButton(verticalLayoutWidget);
        botaoCancelaProfessor->setObjectName("botaoCancelaProfessor");

        horizontalLayout->addWidget(botaoCancelaProfessor);

        botaoCadastraProfessor = new QPushButton(verticalLayoutWidget);
        botaoCadastraProfessor->setObjectName("botaoCadastraProfessor");

        horizontalLayout->addWidget(botaoCadastraProfessor);

        botaoSelecionaHorariosProfessor = new QPushButton(verticalLayoutWidget);
        botaoSelecionaHorariosProfessor->setObjectName("botaoSelecionaHorariosProfessor");

        horizontalLayout->addWidget(botaoSelecionaHorariosProfessor);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CadastroProfessor);

        QMetaObject::connectSlotsByName(CadastroProfessor);
    } // setupUi

    void retranslateUi(QDialog *CadastroProfessor)
    {
        CadastroProfessor->setWindowTitle(QCoreApplication::translate("CadastroProfessor", "Dialog", nullptr));
        nomeLabel->setText(QCoreApplication::translate("CadastroProfessor", "Nome", nullptr));
        emailLabel->setText(QCoreApplication::translate("CadastroProfessor", "Email", nullptr));
        telefoneLabel->setText(QCoreApplication::translate("CadastroProfessor", "Telefone", nullptr));
        botaoCancelaProfessor->setText(QCoreApplication::translate("CadastroProfessor", "Cancelar", nullptr));
        botaoCadastraProfessor->setText(QCoreApplication::translate("CadastroProfessor", "Cadastrar", nullptr));
        botaoSelecionaHorariosProfessor->setText(QCoreApplication::translate("CadastroProfessor", "Selecionar \n"
" Hor\303\241rios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroProfessor: public Ui_CadastroProfessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROPROFESSOR_H
