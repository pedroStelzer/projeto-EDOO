/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Cadastro
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QFormLayout *formLayout_3;
    QLabel *nomeLabel;
    QLineEdit *nomeLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *telefoneLabel;
    QLineEdit *telefoneLineEdit;
    QLabel *endereOLabel;
    QLineEdit *endereOLineEdit;
    QLabel *senhaLabel;
    QLineEdit *senhaLineEdit;
    QLabel *confirmarSenhaLabel;
    QLineEdit *confirmarSenhaLineEdit;
    QLabel *mensagemErro;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName("Cadastro");
        Cadastro->resize(702, 500);
        gridLayout = new QGridLayout(Cadastro);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 99, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label = new QLabel(Cadastro);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        nomeLabel = new QLabel(Cadastro);
        nomeLabel->setObjectName("nomeLabel");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, nomeLabel);

        nomeLineEdit = new QLineEdit(Cadastro);
        nomeLineEdit->setObjectName("nomeLineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, nomeLineEdit);

        emailLabel = new QLabel(Cadastro);
        emailLabel->setObjectName("emailLabel");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(Cadastro);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        telefoneLabel = new QLabel(Cadastro);
        telefoneLabel->setObjectName("telefoneLabel");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, telefoneLabel);

        telefoneLineEdit = new QLineEdit(Cadastro);
        telefoneLineEdit->setObjectName("telefoneLineEdit");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, telefoneLineEdit);

        endereOLabel = new QLabel(Cadastro);
        endereOLabel->setObjectName("endereOLabel");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, endereOLabel);

        endereOLineEdit = new QLineEdit(Cadastro);
        endereOLineEdit->setObjectName("endereOLineEdit");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, endereOLineEdit);

        senhaLabel = new QLabel(Cadastro);
        senhaLabel->setObjectName("senhaLabel");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, senhaLabel);

        senhaLineEdit = new QLineEdit(Cadastro);
        senhaLineEdit->setObjectName("senhaLineEdit");
        senhaLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, senhaLineEdit);

        confirmarSenhaLabel = new QLabel(Cadastro);
        confirmarSenhaLabel->setObjectName("confirmarSenhaLabel");

        formLayout_3->setWidget(5, QFormLayout::LabelRole, confirmarSenhaLabel);

        confirmarSenhaLineEdit = new QLineEdit(Cadastro);
        confirmarSenhaLineEdit->setObjectName("confirmarSenhaLineEdit");
        confirmarSenhaLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, confirmarSenhaLineEdit);


        verticalLayout_6->addLayout(formLayout_3);

        mensagemErro = new QLabel(Cadastro);
        mensagemErro->setObjectName("mensagemErro");
        mensagemErro->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(mensagemErro);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_2 = new QPushButton(Cadastro);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(Cadastro);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_6->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 98, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);


        retranslateUi(Cadastro);

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QDialog *Cadastro)
    {
        Cadastro->setWindowTitle(QCoreApplication::translate("Cadastro", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Cadastro", "Cadastrar Institui\303\247\303\243o", nullptr));
        nomeLabel->setText(QCoreApplication::translate("Cadastro", "Nome", nullptr));
        emailLabel->setText(QCoreApplication::translate("Cadastro", "Email", nullptr));
        telefoneLabel->setText(QCoreApplication::translate("Cadastro", "Telefone", nullptr));
        endereOLabel->setText(QCoreApplication::translate("Cadastro", "Endere\303\247o", nullptr));
        senhaLabel->setText(QCoreApplication::translate("Cadastro", "Senha", nullptr));
        confirmarSenhaLabel->setText(QCoreApplication::translate("Cadastro", "Confirmar Senha", nullptr));
        mensagemErro->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Cadastro", "Cancelar", nullptr));
        pushButton->setText(QCoreApplication::translate("Cadastro", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
