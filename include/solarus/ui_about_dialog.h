/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace SolarusGui {

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *app_logo_label;
    QLabel *app_title_label;
    QLabel *app_version_label;
    QLabel *app_description_label;
    QSpacerItem *verticalSpacer_4;
    QLabel *solarus_logo_label;
    QLabel *app_website_label;
    QSpacerItem *verticalSpacer_3;
    QLabel *app_copyright_label;
    QLabel *app_license_label;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *SolarusGui__AboutDialog)
    {
        if (SolarusGui__AboutDialog->objectName().isEmpty())
            SolarusGui__AboutDialog->setObjectName(QStringLiteral("SolarusGui__AboutDialog"));
        SolarusGui__AboutDialog->resize(284, 415);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SolarusGui__AboutDialog->sizePolicy().hasHeightForWidth());
        SolarusGui__AboutDialog->setSizePolicy(sizePolicy);
        SolarusGui__AboutDialog->setStyleSheet(QLatin1String("QLabel#app_title_label {\n"
"	font-weight: bold;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(SolarusGui__AboutDialog);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(18, 0, 18, 9);
        app_logo_label = new QLabel(SolarusGui__AboutDialog);
        app_logo_label->setObjectName(QStringLiteral("app_logo_label"));
        app_logo_label->setMinimumSize(QSize(128, 128));
        app_logo_label->setMaximumSize(QSize(16777215, 128));
        app_logo_label->setPixmap(QPixmap(QString::fromUtf8(":/images/icon/solarus_launcher_icon_128.png")));
        app_logo_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(app_logo_label);

        app_title_label = new QLabel(SolarusGui__AboutDialog);
        app_title_label->setObjectName(QStringLiteral("app_title_label"));
        app_title_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(app_title_label);

        app_version_label = new QLabel(SolarusGui__AboutDialog);
        app_version_label->setObjectName(QStringLiteral("app_version_label"));
        app_version_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(app_version_label);

        app_description_label = new QLabel(SolarusGui__AboutDialog);
        app_description_label->setObjectName(QStringLiteral("app_description_label"));
        app_description_label->setAlignment(Qt::AlignCenter);
        app_description_label->setWordWrap(true);

        verticalLayout->addWidget(app_description_label);

        verticalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        solarus_logo_label = new QLabel(SolarusGui__AboutDialog);
        solarus_logo_label->setObjectName(QStringLiteral("solarus_logo_label"));
        solarus_logo_label->setMinimumSize(QSize(128, 39));
        solarus_logo_label->setMaximumSize(QSize(16777215, 39));
        solarus_logo_label->setPixmap(QPixmap(QString::fromUtf8(":/images/solarus_logo_128.png")));
        solarus_logo_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(solarus_logo_label);

        app_website_label = new QLabel(SolarusGui__AboutDialog);
        app_website_label->setObjectName(QStringLiteral("app_website_label"));
        app_website_label->setAlignment(Qt::AlignCenter);
        app_website_label->setWordWrap(true);
        app_website_label->setOpenExternalLinks(true);
        app_website_label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(app_website_label);

        verticalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        app_copyright_label = new QLabel(SolarusGui__AboutDialog);
        app_copyright_label->setObjectName(QStringLiteral("app_copyright_label"));
        app_copyright_label->setAlignment(Qt::AlignCenter);
        app_copyright_label->setWordWrap(false);

        verticalLayout->addWidget(app_copyright_label);

        app_license_label = new QLabel(SolarusGui__AboutDialog);
        app_license_label->setObjectName(QStringLiteral("app_license_label"));
        app_license_label->setAlignment(Qt::AlignCenter);
        app_license_label->setWordWrap(false);
        app_license_label->setOpenExternalLinks(true);
        app_license_label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(app_license_label);

        verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        button_box = new QDialogButtonBox(SolarusGui__AboutDialog);
        button_box->setObjectName(QStringLiteral("button_box"));
        button_box->setStandardButtons(QDialogButtonBox::Close);
        button_box->setCenterButtons(true);

        verticalLayout->addWidget(button_box);


        retranslateUi(SolarusGui__AboutDialog);
        QObject::connect(button_box, SIGNAL(accepted()), SolarusGui__AboutDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), SolarusGui__AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SolarusGui__AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *SolarusGui__AboutDialog)
    {
        app_logo_label->setText(QString());
        app_title_label->setText(QApplication::translate("SolarusGui::AboutDialog", "Solarus", Q_NULLPTR));
        app_version_label->setText(QApplication::translate("SolarusGui::AboutDialog", "1.0.0", Q_NULLPTR));
        app_description_label->setText(QApplication::translate("SolarusGui::AboutDialog", "Launcher for Solarus Quests.", Q_NULLPTR));
        solarus_logo_label->setText(QString());
        app_website_label->setText(QApplication::translate("SolarusGui::AboutDialog", "<html><head/><body>\n"
"<p><a href=\"www.solarus-games.org\">www.solarus-games.org</a></p>\n"
"</body></html>", Q_NULLPTR));
        app_copyright_label->setText(QApplication::translate("SolarusGui::AboutDialog", "<html><head/><body><p>\302\251 2011-2016 Christopho, Solarus.</p></body></html>", Q_NULLPTR));
        app_license_label->setText(QApplication::translate("SolarusGui::AboutDialog", "This program is under <a href=\"http://www.gnu.org/licenses/gpl-3.0.html\">GPL v3 license</a>.", Q_NULLPTR));
        Q_UNUSED(SolarusGui__AboutDialog);
    } // retranslateUi

};

} // namespace SolarusGui

namespace SolarusGui {
namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui
} // namespace SolarusGui

#endif // UI_ABOUT_DIALOG_H
