#include "principal.h"
#include "ui_principal.h"

#include <QDebug>

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    // Lista de productos
    m_productos.append(new Producto(1,"Leche",0.85));
    m_productos.append(new Producto(2,"Pan",0.15));
    m_productos.append(new Producto(3,"Queso",2.00));
    // Mostrar la lista en la ventana
    for (int i = 0; i < m_productos.size(); ++i) {
       ui->inProducto->addItem(m_productos.at(i)->nombre());
    }
    // Colocar cabecera de la tabla
    QStringList cabecera = {"Cantidad", "Producto", "Subtotal"};
    ui->outDetalle->setColumnCount(3);
    ui->outDetalle->setHorizontalHeaderLabels(cabecera);
    // Inicializar subtotal global
    m_subtotal = 0;
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_cmdAgregar_released()
{
int cantidad = ui->inCantidad->value();
    if (cantidad == 0){
            QMessageBox::warning(this, "Tienda","No se pueden ingresar 0 productos");
            return;
        }
    // Obtener datos de la GUI
    int index = ui->inProducto->currentIndex();
    Producto *p = m_productos.at(index);

    //Validacion
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
    validacionCI();

    // Calcular el subtotal del producto
    float subtotal = cantidad * p->precio();

    // Agregar datos a la tabla
    int fila = ui->outDetalle->rowCount();
    ui->outDetalle->insertRow(fila);
    ui->outDetalle->setItem(fila,0,new QTableWidgetItem(QString::number(cantidad)));
    ui->outDetalle->setItem(fila,1,new QTableWidgetItem(p->nombre()));
    ui->outDetalle->setItem(fila,2,new QTableWidgetItem(QString::number(subtotal,'f',2)));

    // Limpiar datos
    ui->inCantidad->setValue(0);
    ui->inProducto->setFocus();

    // Invocar a calcular
    calcular(subtotal);
}

void Principal::on_inProducto_currentIndexChanged(int index)
{
    // Obtener el precio del producto
    float precio = m_productos.at(index)->precio();
    // Mostrar el precio
    ui->outPrecio->setText("$ " + QString::number(precio,'f',2));
}

void Principal::calcular(float stProducto)
{
    m_subtotal += stProducto;
    float iva = m_subtotal * IVA / 100;
    float total = m_subtotal + iva;

    ui->outSubtotal->setText(QString::number(m_subtotal,'f',2));
    ui->outIva->setText(QString::number(iva,'f',2));
    ui->outTotal->setText(QString::number(total,'f',2));
}

void Principal::validacionCI()
{
    float cedula=0,pares,impares,total,dec=0;
    int a,b,c,d,e,f,g,h,i,j;

    a=cedula/1000000000;
    cedula=cedula-(a*1000000000);
    b=cedula/100000000;
    cedula=cedula-(b*100000000);
    c=cedula/10000000;
    cedula=cedula-(c*10000000);
    d=cedula/1000000;
    cedula=cedula-(d*1000000);
    e=cedula/100000;
    cedula=cedula-(e*100000);
    f=cedula/10000;
    cedula=cedula-(f*10000);
    g=cedula/1000;
    cedula=cedula-(g*1000);
    h=cedula/100;
    cedula=cedula-(h*100);
    i=cedula/10;
    cedula=cedula-(i*10);
    j=cedula/1;
    cedula=cedula-(j*1);

    if (cedula>2400000000){
        ui->inCedula->setStyleSheet("color : green");
    }else{
        pares=b+d+f+h;
        a=a*2;
        if (a>9){
            a=a%10+a/10;
        }
        c=c*2;
        if (c>9){
            c=c%10+c/10;
        }
        e=e*2;
        if (e>9){
            e=e%10+e/10;
        }
        g=g*2;
        if (g>9){
            g=g%10+g/10;
        }
        i=i*2;
        if (i>9){
            i=i%10+i/10;
        }
        impares=a+c+e+g+i;
        total=pares+impares;
        while (dec-total!=j && dec<total+10){
            dec=dec+10;
        }
        if (dec-total==j){
            ui->inCedula->setStyleSheet("color : green");
        }else {
            QMessageBox::warning(this, "Tienda"," Error: CI incorrecta");
            ui->inCedula->setStyleSheet("color : red");
            ui->inCantidad->setValue(0);
            ui->inProducto->setFocus();
        }
    }
}


void Principal::on_cmdFacturar_clicked()
{
    f.show();
}
