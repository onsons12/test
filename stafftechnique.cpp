#include "stafftechnique.h"
#include "ui_stafftechnique.h"

stafftechnique::stafftechnique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stafftechnique)
{
    ui->setupUi(this);
}

stafftechnique::~stafftechnique()
{
    delete ui;
}
