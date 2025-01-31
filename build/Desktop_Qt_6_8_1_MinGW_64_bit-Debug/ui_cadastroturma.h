/********************************************************************************
** Form generated from reading UI file 'cadastroturma.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROTURMA_H
#define UI_CADASTROTURMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CadastroTurma
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *cursoLabel;
    QLineEdit *cursoLineEdit;
    QLabel *moduloLabel;
    QLineEdit *moduloLineEdit;
    QLabel *statusDaTurmaLabel;
    QLineEdit *statusDaTurmaLineEdit;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tabelaSelecionaAlunos;
    QTableWidget *tabelaSelecionaProfessores;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *botaoCancelar;
    QPushButton *botaoCadastrar;
    QPushButton *botaoSelecionarHorarios;

    void setupUi(QDialog *CadastroTurma)
    {
        if (CadastroTurma->objectName().isEmpty())
            CadastroTurma->setObjectName("CadastroTurma");
        CadastroTurma->resize(1187, 379);
        verticalLayout_2 = new QVBoxLayout(CadastroTurma);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        cursoLabel = new QLabel(CadastroTurma);
        cursoLabel->setObjectName("cursoLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, cursoLabel);

        cursoLineEdit = new QLineEdit(CadastroTurma);
        cursoLineEdit->setObjectName("cursoLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, cursoLineEdit);

        moduloLabel = new QLabel(CadastroTurma);
        moduloLabel->setObjectName("moduloLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, moduloLabel);

        moduloLineEdit = new QLineEdit(CadastroTurma);
        moduloLineEdit->setObjectName("moduloLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, moduloLineEdit);

        statusDaTurmaLabel = new QLabel(CadastroTurma);
        statusDaTurmaLabel->setObjectName("statusDaTurmaLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, statusDaTurmaLabel);

        statusDaTurmaLineEdit = new QLineEdit(CadastroTurma);
        statusDaTurmaLineEdit->setObjectName("statusDaTurmaLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, statusDaTurmaLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tabelaSelecionaAlunos = new QTableWidget(CadastroTurma);
        tabelaSelecionaAlunos->setObjectName("tabelaSelecionaAlunos");

        horizontalLayout->addWidget(tabelaSelecionaAlunos);

        tabelaSelecionaProfessores = new QTableWidget(CadastroTurma);
        tabelaSelecionaProfessores->setObjectName("tabelaSelecionaProfessores");

        horizontalLayout->addWidget(tabelaSelecionaProfessores);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        botaoCancelar = new QPushButton(CadastroTurma);
        botaoCancelar->setObjectName("botaoCancelar");

        horizontalLayout_2->addWidget(botaoCancelar);

        botaoCadastrar = new QPushButton(CadastroTurma);
        botaoCadastrar->setObjectName("botaoCadastrar");

        horizontalLayout_2->addWidget(botaoCadastrar);

        botaoSelecionarHorarios = new QPushButton(CadastroTurma);
        botaoSelecionarHorarios->setObjectName("botaoSelecionarHorarios");

        horizontalLayout_2->addWidget(botaoSelecionarHorarios);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(CadastroTurma);

        QMetaObject::connectSlotsByName(CadastroTurma);
    } // setupUi

    void retranslateUi(QDialog *CadastroTurma)
    {
        CadastroTurma->setWindowTitle(QCoreApplication::translate("CadastroTurma", "Dialog", nullptr));
        cursoLabel->setText(QCoreApplication::translate("CadastroTurma", "Curso", nullptr));
        moduloLabel->setText(QCoreApplication::translate("CadastroTurma", "M\303\263dulo", nullptr));
        statusDaTurmaLabel->setText(QCoreApplication::translate("CadastroTurma", "Status da Turma", nullptr));
        botaoCancelar->setText(QCoreApplication::translate("CadastroTurma", "Cancelar", nullptr));
        botaoCadastrar->setText(QCoreApplication::translate("CadastroTurma", "Cadastrar", nullptr));
        botaoSelecionarHorarios->setText(QCoreApplication::translate("CadastroTurma", "Selecionar \n"
" Hor\303\241rios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroTurma: public Ui_CadastroTurma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROTURMA_H
