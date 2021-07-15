/********************************************************************************
** Form generated from reading UI file 'facturacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURACION_H
#define UI_FACTURACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Facturacion
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *datosBox;
    QFormLayout *formLayout_3;
    QLabel *Cedulatxt;
    QLineEdit *inCedula;
    QLabel *Nombretxt;
    QLineEdit *inNombre;
    QLabel *Telefonotxt;
    QLineEdit *inTelefono;
    QLabel *Emailtxt;
    QLineEdit *inEmail;
    QLabel *Direcciontxt;
    QTextEdit *inDireccion;
    QPushButton *cmdFacturar;

    void setupUi(QWidget *Facturacion)
    {
        if (Facturacion->objectName().isEmpty())
            Facturacion->setObjectName(QString::fromUtf8("Facturacion"));
        Facturacion->resize(981, 567);
        horizontalLayout = new QHBoxLayout(Facturacion);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        datosBox = new QGroupBox(Facturacion);
        datosBox->setObjectName(QString::fromUtf8("datosBox"));
        datosBox->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Leelawadee"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        datosBox->setFont(font);
        datosBox->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 243, 207 );\n"
"color: rgb(255);"));
        formLayout_3 = new QFormLayout(datosBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        Cedulatxt = new QLabel(datosBox);
        Cedulatxt->setObjectName(QString::fromUtf8("Cedulatxt"));
        Cedulatxt->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("System"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Cedulatxt->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, Cedulatxt);

        inCedula = new QLineEdit(datosBox);
        inCedula->setObjectName(QString::fromUtf8("inCedula"));
        inCedula->setMinimumSize(QSize(400, 0));
        inCedula->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        inCedula->setMaxLength(10);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, inCedula);

        Nombretxt = new QLabel(datosBox);
        Nombretxt->setObjectName(QString::fromUtf8("Nombretxt"));
        Nombretxt->setMinimumSize(QSize(100, 0));
        Nombretxt->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, Nombretxt);

        inNombre = new QLineEdit(datosBox);
        inNombre->setObjectName(QString::fromUtf8("inNombre"));
        inNombre->setMinimumSize(QSize(400, 0));
        inNombre->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, inNombre);

        Telefonotxt = new QLabel(datosBox);
        Telefonotxt->setObjectName(QString::fromUtf8("Telefonotxt"));
        Telefonotxt->setMinimumSize(QSize(100, 0));
        Telefonotxt->setFont(font1);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, Telefonotxt);

        inTelefono = new QLineEdit(datosBox);
        inTelefono->setObjectName(QString::fromUtf8("inTelefono"));
        inTelefono->setMinimumSize(QSize(400, 0));
        inTelefono->setStyleSheet(QString::fromUtf8("vcolor: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, inTelefono);

        Emailtxt = new QLabel(datosBox);
        Emailtxt->setObjectName(QString::fromUtf8("Emailtxt"));
        Emailtxt->setMinimumSize(QSize(100, 0));
        Emailtxt->setFont(font1);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, Emailtxt);

        inEmail = new QLineEdit(datosBox);
        inEmail->setObjectName(QString::fromUtf8("inEmail"));
        inEmail->setMinimumSize(QSize(400, 0));
        inEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, inEmail);

        Direcciontxt = new QLabel(datosBox);
        Direcciontxt->setObjectName(QString::fromUtf8("Direcciontxt"));
        Direcciontxt->setMinimumSize(QSize(100, 0));
        Direcciontxt->setFont(font1);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, Direcciontxt);

        inDireccion = new QTextEdit(datosBox);
        inDireccion->setObjectName(QString::fromUtf8("inDireccion"));
        inDireccion->setMinimumSize(QSize(400, 50));
        inDireccion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, inDireccion);

        cmdFacturar = new QPushButton(datosBox);
        cmdFacturar->setObjectName(QString::fromUtf8("cmdFacturar"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, cmdFacturar);


        horizontalLayout->addWidget(datosBox);


        retranslateUi(Facturacion);

        QMetaObject::connectSlotsByName(Facturacion);
    } // setupUi

    void retranslateUi(QWidget *Facturacion)
    {
        Facturacion->setWindowTitle(QApplication::translate("Facturacion", "Form", nullptr));
        datosBox->setTitle(QApplication::translate("Facturacion", "Cliente", nullptr));
        Cedulatxt->setText(QApplication::translate("Facturacion", "C\303\251dula:", nullptr));
        Nombretxt->setText(QApplication::translate("Facturacion", "Nombre:", nullptr));
        Telefonotxt->setText(QApplication::translate("Facturacion", "Tel\303\251fono:", nullptr));
        Emailtxt->setText(QApplication::translate("Facturacion", "E-mail:", nullptr));
        Direcciontxt->setText(QApplication::translate("Facturacion", "Direcci\303\263n:", nullptr));
        cmdFacturar->setText(QApplication::translate("Facturacion", "Facturacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Facturacion: public Ui_Facturacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURACION_H
