#include "cadastrowidget.h"
#include "ui_cadastrowidget.h"

CadastroWidget::CadastroWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CadastroWidget)
{
    ui->setupUi(this);
}

CadastroWidget::~CadastroWidget()
{
    delete ui;
}
