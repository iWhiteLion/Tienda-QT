#ifndef FACTURACION_H
#define FACTURACION_H

#include <QWidget>
#include <QMessageBox>
namespace Ui {
class Facturacion;
}

class Facturacion : public QWidget
{
    Q_OBJECT

public:
    explicit Facturacion(QWidget *parent = nullptr);
    ~Facturacion();
    void validacionCI();
    bool verificador(QString);
    QString resultado();

private slots:
    void on_cmdFacturar_released();


private:
    Ui::Facturacion *ui;
};

#endif // FACTURACION_H
