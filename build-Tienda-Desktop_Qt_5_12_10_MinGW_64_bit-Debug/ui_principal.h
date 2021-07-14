/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *datosBox;
    QFormLayout *formLayout_2;
    QLabel *Cedulatxt;
    QLabel *Nombretxt;
    QLineEdit *inNombre;
    QLabel *Telefonotxt;
    QLineEdit *inTelefono;
    QLabel *Emailtxt;
    QLineEdit *inEmail;
    QLabel *Direcciontxt;
    QTextEdit *inDireccion;
    QLineEdit *inCedula;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QLabel *PNombretxt;
    QComboBox *inProducto;
    QLabel *PCantidadtxt;
    QSpinBox *inCantidad;
    QLabel *PPreciotxt;
    QLabel *outPrecio;
    QPushButton *cmdAgregar;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *outDetalle;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QFormLayout *formLayout;
    QLabel *Subtotaltxt;
    QLabel *outSubtotal;
    QLabel *IVAtxt;
    QLabel *outIva;
    QLabel *Totaltxt;
    QLabel *outTotal;
    QPushButton *cmdFacturar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(779, 538);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/resources/recursos/tienda.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        Principal->setStyleSheet(QString::fromUtf8("background-color: rgb(255 );\n"
"background-color: rgb(253, 235, 208);"));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(300, 0));
        widget->setMaximumSize(QSize(400, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        datosBox = new QGroupBox(widget);
        datosBox->setObjectName(QString::fromUtf8("datosBox"));
        datosBox->setMaximumSize(QSize(16777215, 250));
        QFont font;
        font.setFamily(QString::fromUtf8("Leelawadee"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        datosBox->setFont(font);
        datosBox->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 243, 207 );\n"
"color: rgb(255);"));
        formLayout_2 = new QFormLayout(datosBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        Cedulatxt = new QLabel(datosBox);
        Cedulatxt->setObjectName(QString::fromUtf8("Cedulatxt"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("System"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Cedulatxt->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, Cedulatxt);

        Nombretxt = new QLabel(datosBox);
        Nombretxt->setObjectName(QString::fromUtf8("Nombretxt"));
        Nombretxt->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, Nombretxt);

        inNombre = new QLineEdit(datosBox);
        inNombre->setObjectName(QString::fromUtf8("inNombre"));
        inNombre->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, inNombre);

        Telefonotxt = new QLabel(datosBox);
        Telefonotxt->setObjectName(QString::fromUtf8("Telefonotxt"));
        Telefonotxt->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, Telefonotxt);

        inTelefono = new QLineEdit(datosBox);
        inTelefono->setObjectName(QString::fromUtf8("inTelefono"));
        inTelefono->setStyleSheet(QString::fromUtf8("vcolor: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, inTelefono);

        Emailtxt = new QLabel(datosBox);
        Emailtxt->setObjectName(QString::fromUtf8("Emailtxt"));
        Emailtxt->setFont(font1);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, Emailtxt);

        inEmail = new QLineEdit(datosBox);
        inEmail->setObjectName(QString::fromUtf8("inEmail"));
        inEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, inEmail);

        Direcciontxt = new QLabel(datosBox);
        Direcciontxt->setObjectName(QString::fromUtf8("Direcciontxt"));
        Direcciontxt->setFont(font1);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, Direcciontxt);

        inDireccion = new QTextEdit(datosBox);
        inDireccion->setObjectName(QString::fromUtf8("inDireccion"));
        inDireccion->setMinimumSize(QSize(60, 0));
        inDireccion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, inDireccion);

        inCedula = new QLineEdit(datosBox);
        inCedula->setObjectName(QString::fromUtf8("inCedula"));
        inCedula->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inCedula);


        verticalLayout->addWidget(datosBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 180));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Georgia"));
        font2.setPointSize(14);
        groupBox_2->setFont(font2);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 243, 207);\n"
"color: rgb(0,0,0);"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        PNombretxt = new QLabel(groupBox_2);
        PNombretxt->setObjectName(QString::fromUtf8("PNombretxt"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Eras Demi ITC"));
        font3.setPointSize(9);
        PNombretxt->setFont(font3);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, PNombretxt);

        inProducto = new QComboBox(groupBox_2);
        inProducto->setObjectName(QString::fromUtf8("inProducto"));
        inProducto->setCursor(QCursor(Qt::PointingHandCursor));
        inProducto->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, inProducto);

        PCantidadtxt = new QLabel(groupBox_2);
        PCantidadtxt->setObjectName(QString::fromUtf8("PCantidadtxt"));
        PCantidadtxt->setFont(font3);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, PCantidadtxt);

        inCantidad = new QSpinBox(groupBox_2);
        inCantidad->setObjectName(QString::fromUtf8("inCantidad"));
        inCantidad->setCursor(QCursor(Qt::PointingHandCursor));
        inCantidad->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, inCantidad);

        PPreciotxt = new QLabel(groupBox_2);
        PPreciotxt->setObjectName(QString::fromUtf8("PPreciotxt"));
        PPreciotxt->setFont(font3);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, PPreciotxt);

        outPrecio = new QLabel(groupBox_2);
        outPrecio->setObjectName(QString::fromUtf8("outPrecio"));
        outPrecio->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, outPrecio);

        cmdAgregar = new QPushButton(groupBox_2);
        cmdAgregar->setObjectName(QString::fromUtf8("cmdAgregar"));
        cmdAgregar->setMinimumSize(QSize(0, 50));
        cmdAgregar->setCursor(QCursor(Qt::PointingHandCursor));
        cmdAgregar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, cmdAgregar);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 229, 211);\n"
"font: 11pt \"Georgia\";"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        outDetalle = new QTableWidget(groupBox_3);
        outDetalle->setObjectName(QString::fromUtf8("outDetalle"));
        outDetalle->setMinimumSize(QSize(400, 0));
        outDetalle->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(outDetalle);


        verticalLayout_2->addWidget(groupBox_3);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(7, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8(""));
        formLayout = new QFormLayout(widget_4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Subtotaltxt = new QLabel(widget_4);
        Subtotaltxt->setObjectName(QString::fromUtf8("Subtotaltxt"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Subtotaltxt);

        outSubtotal = new QLabel(widget_4);
        outSubtotal->setObjectName(QString::fromUtf8("outSubtotal"));
        outSubtotal->setMinimumSize(QSize(100, 0));
        outSubtotal->setLayoutDirection(Qt::LeftToRight);
        outSubtotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, outSubtotal);

        IVAtxt = new QLabel(widget_4);
        IVAtxt->setObjectName(QString::fromUtf8("IVAtxt"));

        formLayout->setWidget(1, QFormLayout::LabelRole, IVAtxt);

        outIva = new QLabel(widget_4);
        outIva->setObjectName(QString::fromUtf8("outIva"));
        outIva->setMinimumSize(QSize(100, 0));
        outIva->setLayoutDirection(Qt::LeftToRight);
        outIva->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, outIva);

        Totaltxt = new QLabel(widget_4);
        Totaltxt->setObjectName(QString::fromUtf8("Totaltxt"));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        Totaltxt->setFont(font4);

        formLayout->setWidget(2, QFormLayout::LabelRole, Totaltxt);

        outTotal = new QLabel(widget_4);
        outTotal->setObjectName(QString::fromUtf8("outTotal"));
        outTotal->setMinimumSize(QSize(100, 0));
        outTotal->setFont(font4);
        outTotal->setLayoutDirection(Qt::LeftToRight);
        outTotal->setStyleSheet(QString::fromUtf8("color: rgb(224, 27, 36);\n"
"background-color: rgb(255, 255, 255);"));
        outTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, outTotal);

        cmdFacturar = new QPushButton(widget_4);
        cmdFacturar->setObjectName(QString::fromUtf8("cmdFacturar"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cmdFacturar);


        horizontalLayout_2->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_3);


        horizontalLayout->addWidget(widget_2);

        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 779, 25));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Tienda", nullptr));
        datosBox->setTitle(QApplication::translate("Principal", "Cliente", nullptr));
        Cedulatxt->setText(QApplication::translate("Principal", "C\303\251dula:", nullptr));
        Nombretxt->setText(QApplication::translate("Principal", "Nombre:", nullptr));
        Telefonotxt->setText(QApplication::translate("Principal", "Tel\303\251fono:", nullptr));
        Emailtxt->setText(QApplication::translate("Principal", "E-mail:", nullptr));
        Direcciontxt->setText(QApplication::translate("Principal", "Direcci\303\263n:", nullptr));
        groupBox_2->setTitle(QApplication::translate("Principal", "Productos", nullptr));
        PNombretxt->setText(QApplication::translate("Principal", "Nombre:", nullptr));
        PCantidadtxt->setText(QApplication::translate("Principal", "Cantidad:", nullptr));
        PPreciotxt->setText(QApplication::translate("Principal", "Precio:", nullptr));
        outPrecio->setText(QApplication::translate("Principal", "0.0", nullptr));
        cmdAgregar->setText(QApplication::translate("Principal", "Agregar", nullptr));
        groupBox_3->setTitle(QApplication::translate("Principal", "Detalle de la compra", nullptr));
        Subtotaltxt->setText(QApplication::translate("Principal", "Subtotal:", nullptr));
        outSubtotal->setText(QApplication::translate("Principal", "0.0", nullptr));
        IVAtxt->setText(QApplication::translate("Principal", "IVA (12%):", nullptr));
        outIva->setText(QApplication::translate("Principal", "0.0", nullptr));
        Totaltxt->setText(QApplication::translate("Principal", "TOTAL:", nullptr));
        outTotal->setText(QApplication::translate("Principal", "0.0", nullptr));
        cmdFacturar->setText(QApplication::translate("Principal", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
