/********************************************************************************
** Form generated from reading UI file 'cadastrowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROWIDGET_H
#define UI_CADASTROWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroWidget
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
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *CadastroWidget)
    {
        if (CadastroWidget->objectName().isEmpty())
            CadastroWidget->setObjectName("CadastroWidget");
        CadastroWidget->resize(842, 501);
        gridLayout = new QGridLayout(CadastroWidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label = new QLabel(CadastroWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        nomeLabel = new QLabel(CadastroWidget);
        nomeLabel->setObjectName("nomeLabel");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, nomeLabel);

        nomeLineEdit = new QLineEdit(CadastroWidget);
        nomeLineEdit->setObjectName("nomeLineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, nomeLineEdit);

        emailLabel = new QLabel(CadastroWidget);
        emailLabel->setObjectName("emailLabel");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(CadastroWidget);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        telefoneLabel = new QLabel(CadastroWidget);
        telefoneLabel->setObjectName("telefoneLabel");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, telefoneLabel);

        telefoneLineEdit = new QLineEdit(CadastroWidget);
        telefoneLineEdit->setObjectName("telefoneLineEdit");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, telefoneLineEdit);

        endereOLabel = new QLabel(CadastroWidget);
        endereOLabel->setObjectName("endereOLabel");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, endereOLabel);

        endereOLineEdit = new QLineEdit(CadastroWidget);
        endereOLineEdit->setObjectName("endereOLineEdit");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, endereOLineEdit);


        verticalLayout_6->addLayout(formLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_2 = new QPushButton(CadastroWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(CadastroWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_6->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);


        retranslateUi(CadastroWidget);

        QMetaObject::connectSlotsByName(CadastroWidget);
    } // setupUi

    void retranslateUi(QWidget *CadastroWidget)
    {
        CadastroWidget->setWindowTitle(QCoreApplication::translate("CadastroWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("CadastroWidget", "Cadastrar Institui\303\247\303\243o", nullptr));
        nomeLabel->setText(QCoreApplication::translate("CadastroWidget", "Nome", nullptr));
        emailLabel->setText(QCoreApplication::translate("CadastroWidget", "Email", nullptr));
        telefoneLabel->setText(QCoreApplication::translate("CadastroWidget", "Telefone", nullptr));
        endereOLabel->setText(QCoreApplication::translate("CadastroWidget", "Endere\303\247o", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CadastroWidget", "Cancelar", nullptr));
        pushButton->setText(QCoreApplication::translate("CadastroWidget", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroWidget: public Ui_CadastroWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROWIDGET_H
