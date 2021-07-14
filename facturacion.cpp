#include "facturacion.h"
#include "ui_facturacion.h"

Facturacion::Facturacion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Facturacion)
{
    ui->setupUi(this);
}

Facturacion::~Facturacion()
{
    delete ui;
}
