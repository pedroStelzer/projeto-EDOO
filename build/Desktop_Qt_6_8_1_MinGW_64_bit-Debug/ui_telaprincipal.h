/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_alunos;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pesquisa_aluno;
    QTableWidget *tabelaAlunos;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *deleta_aluno;
    QPushButton *edita_aluno;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cadastra_aluno;
    QWidget *tab_professores;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pesquisa_professor;
    QTableWidget *tabelaProfessores;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *deleta_professor;
    QPushButton *edita_professor;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cadastra_professor;
    QWidget *tab_turmas;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pesquisa_turma;
    QTableWidget *tabelaTurmas;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *deleta_turma;
    QPushButton *edita_turma;
    QSpacerItem *horizontalSpacer;
    QPushButton *cadastra_turma;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName("TelaPrincipal");
        TelaPrincipal->resize(949, 749);
        TelaPrincipal->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        TelaPrincipal->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(TelaPrincipal);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(791, 675));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::TabPosition::West);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::TextElideMode::ElideNone);
        tab_alunos = new QWidget();
        tab_alunos->setObjectName("tab_alunos");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_alunos->sizePolicy().hasHeightForWidth());
        tab_alunos->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(tab_alunos);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pesquisa_aluno = new QPushButton(tab_alunos);
        pesquisa_aluno->setObjectName("pesquisa_aluno");

        horizontalLayout_3->addWidget(pesquisa_aluno);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabelaAlunos = new QTableWidget(tab_alunos);
        tabelaAlunos->setObjectName("tabelaAlunos");

        verticalLayout_2->addWidget(tabelaAlunos);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        deleta_aluno = new QPushButton(tab_alunos);
        deleta_aluno->setObjectName("deleta_aluno");

        horizontalLayout_4->addWidget(deleta_aluno);

        edita_aluno = new QPushButton(tab_alunos);
        edita_aluno->setObjectName("edita_aluno");

        horizontalLayout_4->addWidget(edita_aluno);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        cadastra_aluno = new QPushButton(tab_alunos);
        cadastra_aluno->setObjectName("cadastra_aluno");

        horizontalLayout_4->addWidget(cadastra_aluno);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_alunos, QString());
        tab_professores = new QWidget();
        tab_professores->setObjectName("tab_professores");
        horizontalLayout_8 = new QHBoxLayout(tab_professores);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pesquisa_professor = new QPushButton(tab_professores);
        pesquisa_professor->setObjectName("pesquisa_professor");

        horizontalLayout_6->addWidget(pesquisa_professor);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tabelaProfessores = new QTableWidget(tab_professores);
        tabelaProfessores->setObjectName("tabelaProfessores");

        verticalLayout_3->addWidget(tabelaProfessores);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        deleta_professor = new QPushButton(tab_professores);
        deleta_professor->setObjectName("deleta_professor");

        horizontalLayout_7->addWidget(deleta_professor);

        edita_professor = new QPushButton(tab_professores);
        edita_professor->setObjectName("edita_professor");

        horizontalLayout_7->addWidget(edita_professor);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        cadastra_professor = new QPushButton(tab_professores);
        cadastra_professor->setObjectName("cadastra_professor");

        horizontalLayout_7->addWidget(cadastra_professor);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_professores, QString());
        tab_turmas = new QWidget();
        tab_turmas->setObjectName("tab_turmas");
        horizontalLayout_10 = new QHBoxLayout(tab_turmas);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pesquisa_turma = new QPushButton(tab_turmas);
        pesquisa_turma->setObjectName("pesquisa_turma");

        horizontalLayout->addWidget(pesquisa_turma);


        verticalLayout_4->addLayout(horizontalLayout);

        tabelaTurmas = new QTableWidget(tab_turmas);
        tabelaTurmas->setObjectName("tabelaTurmas");

        verticalLayout_4->addWidget(tabelaTurmas);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        deleta_turma = new QPushButton(tab_turmas);
        deleta_turma->setObjectName("deleta_turma");

        horizontalLayout_9->addWidget(deleta_turma);

        edita_turma = new QPushButton(tab_turmas);
        edita_turma->setObjectName("edita_turma");

        horizontalLayout_9->addWidget(edita_turma);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        cadastra_turma = new QPushButton(tab_turmas);
        cadastra_turma->setObjectName("cadastra_turma");

        horizontalLayout_9->addWidget(cadastra_turma);


        verticalLayout_4->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_turmas, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        TelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 949, 25));
        TelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipal);
        statusbar->setObjectName("statusbar");
        TelaPrincipal->setStatusBar(statusbar);

        retranslateUi(TelaPrincipal);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QCoreApplication::translate("TelaPrincipal", "MainWindow", nullptr));
        pesquisa_aluno->setText(QCoreApplication::translate("TelaPrincipal", "Mostrar Resultados", nullptr));
        deleta_aluno->setText(QCoreApplication::translate("TelaPrincipal", "Deletar", nullptr));
        edita_aluno->setText(QCoreApplication::translate("TelaPrincipal", "Editar", nullptr));
        cadastra_aluno->setText(QCoreApplication::translate("TelaPrincipal", "Cadastrar novo \n"
" aluno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_alunos), QCoreApplication::translate("TelaPrincipal", "Alunos", nullptr));
        pesquisa_professor->setText(QCoreApplication::translate("TelaPrincipal", "Mostrar Resultados", nullptr));
        deleta_professor->setText(QCoreApplication::translate("TelaPrincipal", "Deletar", nullptr));
        edita_professor->setText(QCoreApplication::translate("TelaPrincipal", "Editar", nullptr));
        cadastra_professor->setText(QCoreApplication::translate("TelaPrincipal", "Cadastrar novo \n"
" professor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_professores), QCoreApplication::translate("TelaPrincipal", "Professores", nullptr));
        pesquisa_turma->setText(QCoreApplication::translate("TelaPrincipal", "Mostrar Resultados", nullptr));
        deleta_turma->setText(QCoreApplication::translate("TelaPrincipal", "Deletar turma", nullptr));
        edita_turma->setText(QCoreApplication::translate("TelaPrincipal", "Editar", nullptr));
        cadastra_turma->setText(QCoreApplication::translate("TelaPrincipal", "Criar nova \n"
" turma", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_turmas), QCoreApplication::translate("TelaPrincipal", "Turmas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
