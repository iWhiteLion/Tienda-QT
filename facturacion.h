#ifndef FACTURACION_H
#define FACTURACION_H

#include <QWidget>

namespace Ui {
class Facturacion;
}

class Facturacion : public QWidget
{
    Q_OBJECT

public:
    explicit Facturacion(QWidget *parent = nullptr);
    ~Facturacion();

private:
    Ui::Facturacion *ui;
};

#endif // FACTURACION_H
