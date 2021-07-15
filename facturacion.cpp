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

void Facturacion::on_cmdFacturar_released()
{
    QString m_nombre = ui->inNombre->text();
    QString m_cedula = ui->inCedula->text();



    if (m_nombre.isEmpty()){
        QMessageBox::warning(this, "Tienda","Nombre del Cliente no ingresado");

        return;
    }
    else if (m_cedula.isEmpty()) {
        QMessageBox::warning(this, "Tienda","Cedula del Cliente no ingresada");
        return;
    }
    if (verificador(m_cedula)){
        ui->inCedula->setStyleSheet("color : green");
    }else{
        QMessageBox::warning(this, "Tienda"," Error: CI incorrecta");
        ui->inCedula->setStyleSheet("color : red");
    }

}


bool Facturacion::verificador(QString cedula)
{

    if (cedula == "9999999999"){//Consumidor final
        return true;
    }
    QString temp[10];
    int aux;
    int sumaPar = 0;
    int sumaImpar = 0;

    for(int i = 0; i < 9; i++)
    {

        temp[i] = cedula[i];

        aux = temp[i].toInt();

        if((i+1)%2==0)

            sumaPar += aux;

        else
        {

            if(aux * 2 > 9)

                sumaImpar = sumaImpar + ((aux * 2) - 9);
            //Si no
            else

                sumaImpar += aux * 2;
        }
    }

    int ultimoCedula = cedula.toInt()%10;

    int verificador = (sumaPar + sumaImpar)%10;

    if(verificador !=0)

        verificador = 10 - verificador;
    return ultimoCedula == verificador? true : false;
}

