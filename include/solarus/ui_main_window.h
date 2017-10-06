/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "solarus/gui/console.h"
#include "solarus/gui/quests_view.h"

namespace SolarusGui {

class Ui_MainWindow
{
public:
    QAction *action_add_quest;
    QAction *action_exit;
    QAction *action_play_quest;
    QAction *action_remove_quest;
    QAction *action_stop_quest;
    QAction *action_sound_volume;
    QAction *action_music_volume;
    QAction *action_fullscreen;
    QAction *action_zoom_x1;
    QAction *action_zoom_x2;
    QAction *action_zoom_x3;
    QAction *action_zoom_x4;
    QAction *action_filter_normal;
    QAction *action_filter_scale2x;
    QAction *action_filter_hq2x;
    QAction *action_filter_hq3x;
    QAction *action_filter_hq4x;
    QAction *action_video_acceleration;
    QAction *action_mute;
    QAction *action_about;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *console_splitter;
    QWidget *top_widget;
    QGridLayout *top_widget_layout;
    QGroupBox *questsGroupBox;
    QGridLayout *gridLayout;
    SolarusGui::QuestsView *quests_view;
    QScrollArea *quest_info_scrollarea;
    QWidget *quest_info_panel;
    QVBoxLayout *verticalLayout_2;
    QWidget *quest_box_container;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *quest_box_label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *play_button_layout;
    QSpacerItem *play_button_left_spacer;
    QPushButton *play_button;
    QSpacerItem *playbutton_right_spacer;
    QLabel *quest_title_value;
    QLabel *quest_long_description_value;
    QGridLayout *quest_infos_layout;
    QLabel *quest_author_label;
    QLabel *quest_author_value;
    QLabel *quest_version_label;
    QLabel *quest_version_value;
    QSpacerItem *quest_info_vertical_spacer;
    QHBoxLayout *quest_buttons_layout;
    QSpacerItem *horizontalSpacer;
    QToolButton *add_button;
    QToolButton *remove_button;
    QWidget *bottom_widget;
    QVBoxLayout *bottom_widget_layout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    SolarusGui::Console *console;
    QMenuBar *menu_bar;
    QMenu *menu_file;
    QMenu *menu_quest;
    QMenu *menu_video;
    QMenu *menu_zoom;
    QMenu *menu_video_filter;
    QMenu *menu_audio;
    QMenu *menu_help;

    void setupUi(QMainWindow *SolarusGui__MainWindow)
    {
        if (SolarusGui__MainWindow->objectName().isEmpty())
            SolarusGui__MainWindow->setObjectName(QStringLiteral("SolarusGui__MainWindow"));
        SolarusGui__MainWindow->resize(960, 640);
        SolarusGui__MainWindow->setMinimumSize(QSize(600, 0));
        SolarusGui__MainWindow->setStyleSheet(QLatin1String("QLabel#quest_title_value {\n"
"	font-size: 13pt;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLabel#quest_author_label,\n"
"QLabel#quest_version_label {\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#play_button {\n"
"	font-weight: bold;\n"
"}"));
        action_add_quest = new QAction(SolarusGui__MainWindow);
        action_add_quest->setObjectName(QStringLiteral("action_add_quest"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_add_quest->setIcon(icon);
        action_exit = new QAction(SolarusGui__MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        action_play_quest = new QAction(SolarusGui__MainWindow);
        action_play_quest->setObjectName(QStringLiteral("action_play_quest"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icon_start.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_play_quest->setIcon(icon1);
        action_remove_quest = new QAction(SolarusGui__MainWindow);
        action_remove_quest->setObjectName(QStringLiteral("action_remove_quest"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icon_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_remove_quest->setIcon(icon2);
        action_stop_quest = new QAction(SolarusGui__MainWindow);
        action_stop_quest->setObjectName(QStringLiteral("action_stop_quest"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icon_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_stop_quest->setIcon(icon3);
        action_sound_volume = new QAction(SolarusGui__MainWindow);
        action_sound_volume->setObjectName(QStringLiteral("action_sound_volume"));
        action_music_volume = new QAction(SolarusGui__MainWindow);
        action_music_volume->setObjectName(QStringLiteral("action_music_volume"));
        action_fullscreen = new QAction(SolarusGui__MainWindow);
        action_fullscreen->setObjectName(QStringLiteral("action_fullscreen"));
        action_fullscreen->setCheckable(true);
        action_zoom_x1 = new QAction(SolarusGui__MainWindow);
        action_zoom_x1->setObjectName(QStringLiteral("action_zoom_x1"));
        action_zoom_x2 = new QAction(SolarusGui__MainWindow);
        action_zoom_x2->setObjectName(QStringLiteral("action_zoom_x2"));
        action_zoom_x3 = new QAction(SolarusGui__MainWindow);
        action_zoom_x3->setObjectName(QStringLiteral("action_zoom_x3"));
        action_zoom_x4 = new QAction(SolarusGui__MainWindow);
        action_zoom_x4->setObjectName(QStringLiteral("action_zoom_x4"));
        action_filter_normal = new QAction(SolarusGui__MainWindow);
        action_filter_normal->setObjectName(QStringLiteral("action_filter_normal"));
        action_filter_normal->setCheckable(true);
        action_filter_scale2x = new QAction(SolarusGui__MainWindow);
        action_filter_scale2x->setObjectName(QStringLiteral("action_filter_scale2x"));
        action_filter_scale2x->setCheckable(true);
        action_filter_hq2x = new QAction(SolarusGui__MainWindow);
        action_filter_hq2x->setObjectName(QStringLiteral("action_filter_hq2x"));
        action_filter_hq2x->setCheckable(true);
        action_filter_hq3x = new QAction(SolarusGui__MainWindow);
        action_filter_hq3x->setObjectName(QStringLiteral("action_filter_hq3x"));
        action_filter_hq3x->setCheckable(true);
        action_filter_hq4x = new QAction(SolarusGui__MainWindow);
        action_filter_hq4x->setObjectName(QStringLiteral("action_filter_hq4x"));
        action_filter_hq4x->setCheckable(true);
        action_video_acceleration = new QAction(SolarusGui__MainWindow);
        action_video_acceleration->setObjectName(QStringLiteral("action_video_acceleration"));
        action_video_acceleration->setCheckable(true);
        action_mute = new QAction(SolarusGui__MainWindow);
        action_mute->setObjectName(QStringLiteral("action_mute"));
        action_mute->setCheckable(true);
        action_about = new QAction(SolarusGui__MainWindow);
        action_about->setObjectName(QStringLiteral("action_about"));
        centralwidget = new QWidget(SolarusGui__MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        console_splitter = new QSplitter(centralwidget);
        console_splitter->setObjectName(QStringLiteral("console_splitter"));
        console_splitter->setOrientation(Qt::Vertical);
        console_splitter->setHandleWidth(9);
        top_widget = new QWidget(console_splitter);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget_layout = new QGridLayout(top_widget);
        top_widget_layout->setSpacing(6);
        top_widget_layout->setObjectName(QStringLiteral("top_widget_layout"));
        top_widget_layout->setContentsMargins(0, 0, 0, 0);
        questsGroupBox = new QGroupBox(top_widget);
        questsGroupBox->setObjectName(QStringLiteral("questsGroupBox"));
        gridLayout = new QGridLayout(questsGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 0, 9);
        quests_view = new SolarusGui::QuestsView(questsGroupBox);
        quests_view->setObjectName(QStringLiteral("quests_view"));
        quests_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
        quests_view->setProperty("showDropIndicator", QVariant(false));
        quests_view->setSelectionMode(QAbstractItemView::SingleSelection);
        quests_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        quests_view->setMovement(QListView::Static);
        quests_view->setSpacing(0);
        quests_view->setUniformItemSizes(true);

        gridLayout->addWidget(quests_view, 0, 0, 2, 1);

        quest_info_scrollarea = new QScrollArea(questsGroupBox);
        quest_info_scrollarea->setObjectName(QStringLiteral("quest_info_scrollarea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quest_info_scrollarea->sizePolicy().hasHeightForWidth());
        quest_info_scrollarea->setSizePolicy(sizePolicy);
        quest_info_scrollarea->setMinimumSize(QSize(260, 340));
        quest_info_scrollarea->setMaximumSize(QSize(260, 16777215));
        quest_info_scrollarea->setFrameShape(QFrame::NoFrame);
        quest_info_scrollarea->setFrameShadow(QFrame::Plain);
        quest_info_scrollarea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        quest_info_scrollarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        quest_info_scrollarea->setWidgetResizable(true);
        quest_info_scrollarea->setAlignment(Qt::AlignCenter);
        quest_info_panel = new QWidget();
        quest_info_panel->setObjectName(QStringLiteral("quest_info_panel"));
        quest_info_panel->setGeometry(QRect(0, 0, 260, 464));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(quest_info_panel->sizePolicy().hasHeightForWidth());
        quest_info_panel->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(quest_info_panel);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 3, 9, 3);
        quest_box_container = new QWidget(quest_info_panel);
        quest_box_container->setObjectName(QStringLiteral("quest_box_container"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(quest_box_container->sizePolicy().hasHeightForWidth());
        quest_box_container->setSizePolicy(sizePolicy2);
        quest_box_container->setMinimumSize(QSize(0, 140));
        quest_box_container->setMaximumSize(QSize(16777215, 140));
        quest_box_container->setFocusPolicy(Qt::NoFocus);
        horizontalLayout = new QHBoxLayout(quest_box_container);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        quest_box_label = new QLabel(quest_box_container);
        quest_box_label->setObjectName(QStringLiteral("quest_box_label"));
        quest_box_label->setMinimumSize(QSize(200, 140));
        quest_box_label->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(quest_box_label);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(quest_box_container);

        play_button_layout = new QHBoxLayout();
        play_button_layout->setSpacing(0);
        play_button_layout->setObjectName(QStringLiteral("play_button_layout"));
        play_button_layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        play_button_layout->setContentsMargins(0, 0, 0, 0);
        play_button_left_spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        play_button_layout->addItem(play_button_left_spacer);

        play_button = new QPushButton(quest_info_panel);
        play_button->setObjectName(QStringLiteral("play_button"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(play_button->sizePolicy().hasHeightForWidth());
        play_button->setSizePolicy(sizePolicy3);
        play_button->setIcon(icon1);
        play_button->setIconSize(QSize(16, 16));
        play_button->setAutoDefault(false);

        play_button_layout->addWidget(play_button);

        playbutton_right_spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        play_button_layout->addItem(playbutton_right_spacer);


        verticalLayout_2->addLayout(play_button_layout);

        quest_title_value = new QLabel(quest_info_panel);
        quest_title_value->setObjectName(QStringLiteral("quest_title_value"));
        sizePolicy2.setHeightForWidth(quest_title_value->sizePolicy().hasHeightForWidth());
        quest_title_value->setSizePolicy(sizePolicy2);
        quest_title_value->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        quest_title_value->setWordWrap(true);

        verticalLayout_2->addWidget(quest_title_value);

        quest_long_description_value = new QLabel(quest_info_panel);
        quest_long_description_value->setObjectName(QStringLiteral("quest_long_description_value"));
        sizePolicy1.setHeightForWidth(quest_long_description_value->sizePolicy().hasHeightForWidth());
        quest_long_description_value->setSizePolicy(sizePolicy1);
        quest_long_description_value->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        quest_long_description_value->setWordWrap(true);

        verticalLayout_2->addWidget(quest_long_description_value);

        quest_infos_layout = new QGridLayout();
        quest_infos_layout->setObjectName(QStringLiteral("quest_infos_layout"));
        quest_infos_layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        quest_infos_layout->setHorizontalSpacing(6);
        quest_infos_layout->setVerticalSpacing(1);
        quest_infos_layout->setContentsMargins(0, 0, 0, 0);
        quest_author_label = new QLabel(quest_info_panel);
        quest_author_label->setObjectName(QStringLiteral("quest_author_label"));
        quest_author_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        quest_infos_layout->addWidget(quest_author_label, 0, 0, 1, 1);

        quest_author_value = new QLabel(quest_info_panel);
        quest_author_value->setObjectName(QStringLiteral("quest_author_value"));
        sizePolicy2.setHeightForWidth(quest_author_value->sizePolicy().hasHeightForWidth());
        quest_author_value->setSizePolicy(sizePolicy2);
        quest_author_value->setWordWrap(true);

        quest_infos_layout->addWidget(quest_author_value, 0, 1, 1, 1);

        quest_version_label = new QLabel(quest_info_panel);
        quest_version_label->setObjectName(QStringLiteral("quest_version_label"));
        quest_version_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        quest_infos_layout->addWidget(quest_version_label, 1, 0, 1, 1);

        quest_version_value = new QLabel(quest_info_panel);
        quest_version_value->setObjectName(QStringLiteral("quest_version_value"));
        sizePolicy2.setHeightForWidth(quest_version_value->sizePolicy().hasHeightForWidth());
        quest_version_value->setSizePolicy(sizePolicy2);
        quest_version_value->setWordWrap(true);

        quest_infos_layout->addWidget(quest_version_value, 1, 1, 1, 1);

        quest_infos_layout->setColumnStretch(1, 1);

        verticalLayout_2->addLayout(quest_infos_layout);

        quest_info_vertical_spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(quest_info_vertical_spacer);

        quest_info_scrollarea->setWidget(quest_info_panel);

        gridLayout->addWidget(quest_info_scrollarea, 0, 1, 3, 1);

        quest_buttons_layout = new QHBoxLayout();
        quest_buttons_layout->setSpacing(3);
        quest_buttons_layout->setObjectName(QStringLiteral("quest_buttons_layout"));
        quest_buttons_layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        quest_buttons_layout->addItem(horizontalSpacer);

        add_button = new QToolButton(questsGroupBox);
        add_button->setObjectName(QStringLiteral("add_button"));
        sizePolicy3.setHeightForWidth(add_button->sizePolicy().hasHeightForWidth());
        add_button->setSizePolicy(sizePolicy3);
        add_button->setMinimumSize(QSize(24, 24));
        add_button->setIcon(icon);
        add_button->setIconSize(QSize(16, 16));
        add_button->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        quest_buttons_layout->addWidget(add_button);

        remove_button = new QToolButton(questsGroupBox);
        remove_button->setObjectName(QStringLiteral("remove_button"));
        sizePolicy3.setHeightForWidth(remove_button->sizePolicy().hasHeightForWidth());
        remove_button->setSizePolicy(sizePolicy3);
        remove_button->setMinimumSize(QSize(24, 24));
        remove_button->setIcon(icon2);
        remove_button->setIconSize(QSize(16, 16));
        remove_button->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        quest_buttons_layout->addWidget(remove_button);

        quest_buttons_layout->setStretch(1, 1);
        quest_buttons_layout->setStretch(2, 1);

        gridLayout->addLayout(quest_buttons_layout, 2, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        top_widget_layout->addWidget(questsGroupBox, 0, 0, 1, 2);

        console_splitter->addWidget(top_widget);
        bottom_widget = new QWidget(console_splitter);
        bottom_widget->setObjectName(QStringLiteral("bottom_widget"));
        bottom_widget_layout = new QVBoxLayout(bottom_widget);
        bottom_widget_layout->setSpacing(6);
        bottom_widget_layout->setObjectName(QStringLiteral("bottom_widget_layout"));
        bottom_widget_layout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(bottom_widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        console = new SolarusGui::Console(groupBox);
        console->setObjectName(QStringLiteral("console"));
        console->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(console);


        bottom_widget_layout->addWidget(groupBox);

        console_splitter->addWidget(bottom_widget);

        verticalLayout_3->addWidget(console_splitter);

        SolarusGui__MainWindow->setCentralWidget(centralwidget);
        menu_bar = new QMenuBar(SolarusGui__MainWindow);
        menu_bar->setObjectName(QStringLiteral("menu_bar"));
        menu_bar->setGeometry(QRect(0, 0, 960, 25));
        menu_file = new QMenu(menu_bar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        menu_quest = new QMenu(menu_bar);
        menu_quest->setObjectName(QStringLiteral("menu_quest"));
        menu_video = new QMenu(menu_bar);
        menu_video->setObjectName(QStringLiteral("menu_video"));
        menu_zoom = new QMenu(menu_video);
        menu_zoom->setObjectName(QStringLiteral("menu_zoom"));
        menu_video_filter = new QMenu(menu_video);
        menu_video_filter->setObjectName(QStringLiteral("menu_video_filter"));
        menu_audio = new QMenu(menu_bar);
        menu_audio->setObjectName(QStringLiteral("menu_audio"));
        menu_help = new QMenu(menu_bar);
        menu_help->setObjectName(QStringLiteral("menu_help"));
        SolarusGui__MainWindow->setMenuBar(menu_bar);
        QWidget::setTabOrder(quests_view, add_button);
        QWidget::setTabOrder(add_button, remove_button);
        QWidget::setTabOrder(remove_button, play_button);
        QWidget::setTabOrder(play_button, quest_info_scrollarea);

        menu_bar->addAction(menu_file->menuAction());
        menu_bar->addAction(menu_quest->menuAction());
        menu_bar->addAction(menu_video->menuAction());
        menu_bar->addAction(menu_audio->menuAction());
        menu_bar->addAction(menu_help->menuAction());
        menu_file->addAction(action_add_quest);
        menu_file->addAction(action_remove_quest);
        menu_file->addSeparator();
        menu_file->addAction(action_exit);
        menu_quest->addAction(action_play_quest);
        menu_quest->addAction(action_stop_quest);
        menu_quest->addSeparator();
        menu_video->addAction(action_fullscreen);
        menu_video->addAction(action_video_acceleration);
        menu_video->addAction(menu_video_filter->menuAction());
        menu_video->addAction(menu_zoom->menuAction());
        menu_zoom->addAction(action_zoom_x1);
        menu_zoom->addAction(action_zoom_x2);
        menu_zoom->addAction(action_zoom_x3);
        menu_zoom->addAction(action_zoom_x4);
        menu_video_filter->addAction(action_filter_normal);
        menu_video_filter->addAction(action_filter_scale2x);
        menu_video_filter->addAction(action_filter_hq2x);
        menu_video_filter->addAction(action_filter_hq3x);
        menu_video_filter->addAction(action_filter_hq4x);
        menu_audio->addAction(action_mute);
        menu_audio->addAction(action_music_volume);
        menu_audio->addAction(action_sound_volume);
        menu_help->addAction(action_about);

        retranslateUi(SolarusGui__MainWindow);

        play_button->setDefault(false);


        QMetaObject::connectSlotsByName(SolarusGui__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SolarusGui__MainWindow)
    {
        SolarusGui__MainWindow->setWindowTitle(QApplication::translate("SolarusGui::MainWindow", "Solarus", Q_NULLPTR));
        action_add_quest->setText(QApplication::translate("SolarusGui::MainWindow", "Add quest...", Q_NULLPTR));
        action_exit->setText(QApplication::translate("SolarusGui::MainWindow", "Exit", Q_NULLPTR));
        action_play_quest->setText(QApplication::translate("SolarusGui::MainWindow", "Play", Q_NULLPTR));
        action_play_quest->setShortcut(QApplication::translate("SolarusGui::MainWindow", "F5", Q_NULLPTR));
        action_remove_quest->setText(QApplication::translate("SolarusGui::MainWindow", "Remove quest", Q_NULLPTR));
        action_stop_quest->setText(QApplication::translate("SolarusGui::MainWindow", "Stop", Q_NULLPTR));
        action_sound_volume->setText(QApplication::translate("SolarusGui::MainWindow", "Sound volume", Q_NULLPTR));
        action_music_volume->setText(QApplication::translate("SolarusGui::MainWindow", "Music volume", Q_NULLPTR));
        action_fullscreen->setText(QApplication::translate("SolarusGui::MainWindow", "Fullscreen", Q_NULLPTR));
        action_fullscreen->setShortcut(QApplication::translate("SolarusGui::MainWindow", "F11", Q_NULLPTR));
        action_zoom_x1->setText(QApplication::translate("SolarusGui::MainWindow", "x1", Q_NULLPTR));
        action_zoom_x2->setText(QApplication::translate("SolarusGui::MainWindow", "x2", Q_NULLPTR));
        action_zoom_x3->setText(QApplication::translate("SolarusGui::MainWindow", "x3", Q_NULLPTR));
        action_zoom_x4->setText(QApplication::translate("SolarusGui::MainWindow", "x4", Q_NULLPTR));
        action_filter_normal->setText(QApplication::translate("SolarusGui::MainWindow", "None", Q_NULLPTR));
        action_filter_scale2x->setText(QApplication::translate("SolarusGui::MainWindow", "Scale2x", Q_NULLPTR));
        action_filter_hq2x->setText(QApplication::translate("SolarusGui::MainWindow", "Hq2x", Q_NULLPTR));
        action_filter_hq3x->setText(QApplication::translate("SolarusGui::MainWindow", "Hq3x", Q_NULLPTR));
        action_filter_hq4x->setText(QApplication::translate("SolarusGui::MainWindow", "Hq4x", Q_NULLPTR));
        action_video_acceleration->setText(QApplication::translate("SolarusGui::MainWindow", "2D acceleration", Q_NULLPTR));
        action_mute->setText(QApplication::translate("SolarusGui::MainWindow", "Mute", Q_NULLPTR));
        action_about->setText(QApplication::translate("SolarusGui::MainWindow", "About", Q_NULLPTR));
        questsGroupBox->setTitle(QApplication::translate("SolarusGui::MainWindow", "Quests", Q_NULLPTR));
        quest_box_label->setText(QString());
        play_button->setText(QApplication::translate("SolarusGui::MainWindow", "Play", Q_NULLPTR));
        quest_title_value->setText(QApplication::translate("SolarusGui::MainWindow", "Quest title", Q_NULLPTR));
        quest_long_description_value->setText(QApplication::translate("SolarusGui::MainWindow", "Description", Q_NULLPTR));
        quest_author_label->setText(QApplication::translate("SolarusGui::MainWindow", "Author:", Q_NULLPTR));
        quest_author_value->setText(QApplication::translate("SolarusGui::MainWindow", "Author", Q_NULLPTR));
        quest_version_label->setText(QApplication::translate("SolarusGui::MainWindow", "Version:", Q_NULLPTR));
        quest_version_value->setText(QApplication::translate("SolarusGui::MainWindow", "Version", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        add_button->setToolTip(QApplication::translate("SolarusGui::MainWindow", "Add quest", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        add_button->setText(QApplication::translate("SolarusGui::MainWindow", "Add quest...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        remove_button->setToolTip(QApplication::translate("SolarusGui::MainWindow", "Remove quest", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        remove_button->setText(QApplication::translate("SolarusGui::MainWindow", "Remove quest", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SolarusGui::MainWindow", "Console", Q_NULLPTR));
        menu_file->setTitle(QApplication::translate("SolarusGui::MainWindow", "File", Q_NULLPTR));
        menu_quest->setTitle(QApplication::translate("SolarusGui::MainWindow", "Quest", Q_NULLPTR));
        menu_video->setTitle(QApplication::translate("SolarusGui::MainWindow", "Video", Q_NULLPTR));
        menu_zoom->setTitle(QApplication::translate("SolarusGui::MainWindow", "Zoom", Q_NULLPTR));
        menu_video_filter->setTitle(QApplication::translate("SolarusGui::MainWindow", "Video filter", Q_NULLPTR));
        menu_audio->setTitle(QApplication::translate("SolarusGui::MainWindow", "Audio", Q_NULLPTR));
        menu_help->setTitle(QApplication::translate("SolarusGui::MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

} // namespace SolarusGui

namespace SolarusGui {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace SolarusGui

#endif // UI_MAIN_WINDOW_H
