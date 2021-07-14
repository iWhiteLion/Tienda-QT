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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Facturacion
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *datosBox;
    QFormLayout *formLayout_3;
    QLabel *Cedulatxt_3;
    QLineEdit *inCedula_3;
    QLabel *Nombretxt_3;
    QLineEdit *inNombre_3;
    QLabel *Telefonotxt_3;
    QLineEdit *inTelefono_3;
    QLabel *Emailtxt_3;
    QLineEdit *inEmail_3;
    QLabel *Direcciontxt_3;
    QTextEdit *inDireccion_3;

    void setupUi(QWidget *Facturacion)
    {
        if (Facturacion->objectName().isEmpty())
            Facturacion->setObjectName(QString::fromUtf8("Facturacion"));
        Facturacion->resize(921, 527);
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
        Cedulatxt_3 = new QLabel(datosBox);
        Cedulatxt_3->setObjectName(QString::fromUtf8("Cedulatxt_3"));
        Cedulatxt_3->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("System"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Cedulatxt_3->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, Cedulatxt_3);

        inCedula_3 = new QLineEdit(datosBox);
        inCedula_3->setObjectName(QString::fromUtf8("inCedula_3"));
        inCedula_3->setMinimumSize(QSize(400, 0));
        inCedula_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, inCedula_3);

        Nombretxt_3 = new QLabel(datosBox);
        Nombretxt_3->setObjectName(QString::fromUtf8("Nombretxt_3"));
        Nombretxt_3->setMinimumSize(QSize(100, 0));
        Nombretxt_3->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, Nombretxt_3);

        inNombre_3 = new QLineEdit(datosBox);
        inNombre_3->setObjectName(QString::fromUtf8("inNombre_3"));
        inNombre_3->setMinimumSize(QSize(400, 0));
        inNombre_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, inNombre_3);

        Telefonotxt_3 = new QLabel(datosBox);
        Telefonotxt_3->setObjectName(QString::fromUtf8("Telefonotxt_3"));
        Telefonotxt_3->setMinimumSize(QSize(100, 0));
        Telefonotxt_3->setFont(font1);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, Telefonotxt_3);

        inTelefono_3 = new QLineEdit(datosBox);
        inTelefono_3->setObjectName(QString::fromUtf8("inTelefono_3"));
        inTelefono_3->setMinimumSize(QSize(400, 0));
        inTelefono_3->setStyleSheet(QString::fromUtf8("vcolor: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, inTelefono_3);

        Emailtxt_3 = new QLabel(datosBox);
        Emailtxt_3->setObjectName(QString::fromUtf8("Emailtxt_3"));
        Emailtxt_3->setMinimumSize(QSize(100, 0));
        Emailtxt_3->setFont(font1);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, Emailtxt_3);

        inEmail_3 = new QLineEdit(datosBox);
        inEmail_3->setObjectName(QString::fromUtf8("inEmail_3"));
        inEmail_3->setMinimumSize(QSize(400, 0));
        inEmail_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, inEmail_3);

        Direcciontxt_3 = new QLabel(datosBox);
        Direcciontxt_3->setObjectName(QString::fromUtf8("Direcciontxt_3"));
        Direcciontxt_3->setMinimumSize(QSize(100, 0));
        Direcciontxt_3->setFont(font1);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, Direcciontxt_3);

        inDireccion_3 = new QTextEdit(datosBox);
        inDireccion_3->setObjectName(QString::fromUtf8("inDireccion_3"));
        inDireccion_3->setMinimumSize(QSize(400, 50));
        inDireccion_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, inDireccion_3);


        horizontalLayout->addWidget(datosBox);


        retranslateUi(Facturacion);

        QMetaObject::connectSlotsByName(Facturacion);
    } // setupUi

    void retranslateUi(QWidget *Facturacion)
    {
        Facturacion->setWindowTitle(QApplication::translate("Facturacion", "Form", nullptr));
        datosBox->setTitle(QApplication::translate("Facturacion", "Cliente", nullptr));
        Cedulatxt_3->setText(QApplication::translate("Facturacion", "C\303\251dula:", nullptr));
        Nombretxt_3->setText(QApplication::translate("Facturacion", "Nombre:", nullptr));
        Telefonotxt_3->setText(QApplication::translate("Facturacion", "Tel\303\251fono:", nullptr));
        Emailtxt_3->setText(QApplication::translate("Facturacion", "E-mail:", nullptr));
        Direcciontxt_3->setText(QApplication::translate("Facturacion", "Direcci\303\263n:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Facturacion: public Ui_Facturacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURACION_H
