/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_The_main_characteristic;
    QLabel *label_Class;
    QSpinBox *spinBox_mastership_bonus;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_mastership_bonus;
    QLabel *label_health;
    QLineEdit *lineEdit_7;
    QLabel *label_worldview;
    QLineEdit *lineEdit_worldview;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBox_The_main_characteristic;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBox_health;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(808, 521);
        gridLayout_3 = new QGridLayout(Form);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(100, 100));
        label->setStyleSheet(QString::fromUtf8("border: 2px dashed gray;       /* \320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 50%;            /* \320\232\321\200\321\203\320\263\320\273\320\260\321\217 \321\204\320\276\321\200\320\274\320\260 */\n"
"    background: lightgray;         /* \320\241\320\265\321\200\321\213\320\271 \321\204\320\276\320\275-\320\267\320\260\320\263\320\273\321\203\321\210\320\272\320\260 */\n"
"    background-position: center;\n"
"    background-repeat: no-repeat;"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        lineEdit_4 = new QLineEdit(Form);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_5 = new QLabel(Form);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(Form);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);

        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        label_The_main_characteristic = new QLabel(tab);
        label_The_main_characteristic->setObjectName("label_The_main_characteristic");

        gridLayout_2->addWidget(label_The_main_characteristic, 1, 2, 1, 1);

        label_Class = new QLabel(tab);
        label_Class->setObjectName("label_Class");

        gridLayout_2->addWidget(label_Class, 3, 0, 1, 1);

        spinBox_mastership_bonus = new QSpinBox(tab);
        spinBox_mastership_bonus->setObjectName("spinBox_mastership_bonus");

        gridLayout_2->addWidget(spinBox_mastership_bonus, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 4, 1, 1);

        label_mastership_bonus = new QLabel(tab);
        label_mastership_bonus->setObjectName("label_mastership_bonus");

        gridLayout_2->addWidget(label_mastership_bonus, 1, 0, 1, 1);

        label_health = new QLabel(tab);
        label_health->setObjectName("label_health");

        gridLayout_2->addWidget(label_health, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(tab);
        lineEdit_7->setObjectName("lineEdit_7");

        gridLayout_2->addWidget(lineEdit_7, 3, 1, 1, 1);

        label_worldview = new QLabel(tab);
        label_worldview->setObjectName("label_worldview");

        gridLayout_2->addWidget(label_worldview, 2, 0, 1, 1);

        lineEdit_worldview = new QLineEdit(tab);
        lineEdit_worldview->setObjectName("lineEdit_worldview");

        gridLayout_2->addWidget(lineEdit_worldview, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        comboBox_The_main_characteristic = new QComboBox(tab);
        comboBox_The_main_characteristic->addItem(QString());
        comboBox_The_main_characteristic->addItem(QString());
        comboBox_The_main_characteristic->addItem(QString());
        comboBox_The_main_characteristic->addItem(QString());
        comboBox_The_main_characteristic->addItem(QString());
        comboBox_The_main_characteristic->addItem(QString());
        comboBox_The_main_characteristic->setObjectName("comboBox_The_main_characteristic");

        gridLayout_2->addWidget(comboBox_The_main_characteristic, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        spinBox_health = new QSpinBox(tab);
        spinBox_health->setObjectName("spinBox_health");

        gridLayout_2->addWidget(spinBox_health, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 1, 0, 1, 2);


        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "\320\240\320\260\320\267\320\274\320\265\321\200", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\320\240\320\260\321\201\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\320\222\321\202\320\276\321\200\320\276\320\265 \320\270\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\320\230\320\274\321\217", nullptr));
        label_The_main_characteristic->setText(QCoreApplication::translate("Form", "\320\236\321\201\320\275\320\276\320\262\320\275\320\260\321\217 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label_Class->setText(QCoreApplication::translate("Form", "\320\232\320\273\320\260\321\201\321\201", nullptr));
        label_mastership_bonus->setText(QCoreApplication::translate("Form", "\320\221\320\276\320\275\321\203\321\201 \320\274\320\260\321\201\321\202\320\265\321\200\321\201\321\202\320\262\320\260", nullptr));
        label_health->setText(QCoreApplication::translate("Form", "\320\227\320\264\320\276\321\200\320\276\320\262\321\214\320\265", nullptr));
        label_worldview->setText(QCoreApplication::translate("Form", "\320\234\320\270\321\200\320\276\320\262\320\276\320\267\320\267\321\200\320\265\320\275\320\270\320\265", nullptr));
        comboBox_The_main_characteristic->setItemText(0, QCoreApplication::translate("Form", "\320\241\320\270\320\273\320\260", nullptr));
        comboBox_The_main_characteristic->setItemText(1, QCoreApplication::translate("Form", "\320\233\320\276\320\262\320\272\320\276\321\201\321\202\321\214", nullptr));
        comboBox_The_main_characteristic->setItemText(2, QCoreApplication::translate("Form", "\320\242\320\265\320\273\320\276\321\201\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        comboBox_The_main_characteristic->setItemText(3, QCoreApplication::translate("Form", "\320\230\320\275\321\202\320\265\320\273\320\265\320\272\321\202", nullptr));
        comboBox_The_main_characteristic->setItemText(4, QCoreApplication::translate("Form", "\320\234\321\203\320\264\321\200\320\276\321\201\321\202\321\214", nullptr));
        comboBox_The_main_characteristic->setItemText(5, QCoreApplication::translate("Form", "\320\245\320\260\321\200\320\270\320\267\320\274\320\260", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Form", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Form", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
