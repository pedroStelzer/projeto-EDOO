/********************************************************************************
** Form generated from reading UI file 'editarturma.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARTURMA_H
#define UI_EDITARTURMA_H

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

class Ui_EditarTurma
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
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tabelaSelecionaAlunos;
    QTableWidget *tabelaSelecionaProfessores;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoCancelar;
    QPushButton *botaoConfirmar;
    QPushButton *botaoEditarHorarios;

    void setupUi(QDialog *EditarTurma)
    {
        if (EditarTurma->objectName().isEmpty())
            EditarTurma->setObjectName("EditarTurma");
        EditarTurma->resize(1006, 560);
        verticalLayout_2 = new QVBoxLayout(EditarTurma);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        cursoLabel = new QLabel(EditarTurma);
        cursoLabel->setObjectName("cursoLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, cursoLabel);

        cursoLineEdit = new QLineEdit(EditarTurma);
        cursoLineEdit->setObjectName("cursoLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, cursoLineEdit);

        moduloLabel = new QLabel(EditarTurma);
        moduloLabel->setObjectName("moduloLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, moduloLabel);

        moduloLineEdit = new QLineEdit(EditarTurma);
        moduloLineEdit->setObjectName("moduloLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, moduloLineEdit);

        statusDaTurmaLabel = new QLabel(EditarTurma);
        statusDaTurmaLabel->setObjectName("statusDaTurmaLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, statusDaTurmaLabel);

        statusDaTurmaLineEdit = new QLineEdit(EditarTurma);
        statusDaTurmaLineEdit->setObjectName("statusDaTurmaLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, statusDaTurmaLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tabelaSelecionaAlunos = new QTableWidget(EditarTurma);
        tabelaSelecionaAlunos->setObjectName("tabelaSelecionaAlunos");

        horizontalLayout_2->addWidget(tabelaSelecionaAlunos);

        tabelaSelecionaProfessores = new QTableWidget(EditarTurma);
        tabelaSelecionaProfessores->setObjectName("tabelaSelecionaProfessores");

        horizontalLayout_2->addWidget(tabelaSelecionaProfessores);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        botaoCancelar = new QPushButton(EditarTurma);
        botaoCancelar->setObjectName("botaoCancelar");

        horizontalLayout->addWidget(botaoCancelar);

        botaoConfirmar = new QPushButton(EditarTurma);
        botaoConfirmar->setObjectName("botaoConfirmar");

        horizontalLayout->addWidget(botaoConfirmar);

        botaoEditarHorarios = new QPushButton(EditarTurma);
        botaoEditarHorarios->setObjectName("botaoEditarHorarios");

        horizontalLayout->addWidget(botaoEditarHorarios);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EditarTurma);

        QMetaObject::connectSlotsByName(EditarTurma);
    } // setupUi

    void retranslateUi(QDialog *EditarTurma)
    {
        EditarTurma->setWindowTitle(QCoreApplication::translate("EditarTurma", "Dialog", nullptr));
        cursoLabel->setText(QCoreApplication::translate("EditarTurma", "Curso", nullptr));
        moduloLabel->setText(QCoreApplication::translate("EditarTurma", "M\303\263dulo", nullptr));
        statusDaTurmaLabel->setText(QCoreApplication::translate("EditarTurma", "Status da Turma", nullptr));
        botaoCancelar->setText(QCoreApplication::translate("EditarTurma", "Cancelar", nullptr));
        botaoConfirmar->setText(QCoreApplication::translate("EditarTurma", "Confirmar", nullptr));
        botaoEditarHorarios->setText(QCoreApplication::translate("EditarTurma", "Editar \n"
" Hor\303\241rios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarTurma: public Ui_EditarTurma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARTURMA_H
