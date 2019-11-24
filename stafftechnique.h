#ifndef STAFFTECHNIQUE_H
#define STAFFTECHNIQUE_H

#include <QDialog>

namespace Ui {
class stafftechnique;
}

class stafftechnique : public QDialog
{
    Q_OBJECT

public:
    explicit stafftechnique(QWidget *parent = nullptr);
    ~stafftechnique();

private:
    Ui::stafftechnique *ui;
};

#endif // STAFFTECHNIQUE_H
