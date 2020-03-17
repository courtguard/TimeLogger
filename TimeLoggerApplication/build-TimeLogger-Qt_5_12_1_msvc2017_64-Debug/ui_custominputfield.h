/********************************************************************************
** Form generated from reading UI file 'custominputfield.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMINPUTFIELD_H
#define UI_CUSTOMINPUTFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CustomInputField
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QFrame *CustomInputField)
    {
        if (CustomInputField->objectName().isEmpty())
            CustomInputField->setObjectName(QString::fromUtf8("CustomInputField"));
        CustomInputField->resize(390, 41);
        horizontalLayout = new QHBoxLayout(CustomInputField);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CustomInputField);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(CustomInputField);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(CustomInputField);

        QMetaObject::connectSlotsByName(CustomInputField);
    } // setupUi

    void retranslateUi(QFrame *CustomInputField)
    {
        CustomInputField->setWindowTitle(QApplication::translate("CustomInputField", "Frame", nullptr));
        label->setText(QApplication::translate("CustomInputField", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomInputField: public Ui_CustomInputField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMINPUTFIELD_H
