/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "solarus/gui/console_line_edit.h"

namespace SolarusGui {

class Ui_Console
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *log_view;
    SolarusGui::ConsoleLineEdit *command_field;

    void setupUi(QWidget *SolarusGui__Console)
    {
        if (SolarusGui__Console->objectName().isEmpty())
            SolarusGui__Console->setObjectName(QStringLiteral("SolarusGui__Console"));
        SolarusGui__Console->resize(400, 300);
        verticalLayout = new QVBoxLayout(SolarusGui__Console);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        log_view = new QPlainTextEdit(SolarusGui__Console);
        log_view->setObjectName(QStringLiteral("log_view"));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font.setPointSize(9);
        log_view->setFont(font);
        log_view->setReadOnly(true);
        log_view->setMaximumBlockCount(10000);

        verticalLayout->addWidget(log_view);

        command_field = new SolarusGui::ConsoleLineEdit(SolarusGui__Console);
        command_field->setObjectName(QStringLiteral("command_field"));
        command_field->setFont(font);

        verticalLayout->addWidget(command_field);


        retranslateUi(SolarusGui__Console);

        QMetaObject::connectSlotsByName(SolarusGui__Console);
    } // setupUi

    void retranslateUi(QWidget *SolarusGui__Console)
    {
#ifndef QT_NO_TOOLTIP
        command_field->setToolTip(QApplication::translate("SolarusGui::Console", "Run Lua code to the quest", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(SolarusGui__Console);
    } // retranslateUi

};

} // namespace SolarusGui

namespace SolarusGui {
namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui
} // namespace SolarusGui

#endif // UI_CONSOLE_H
