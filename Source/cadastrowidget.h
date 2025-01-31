#ifndef CADASTROWIDGET_H
#define CADASTROWIDGET_H

#include <QWidget>

namespace Ui {
class CadastroWidget;
}

class CadastroWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroWidget(QWidget *parent = nullptr);
    ~CadastroWidget();

private:
    Ui::CadastroWidget *ui;
};

#endif // CADASTROWIDGET_H
