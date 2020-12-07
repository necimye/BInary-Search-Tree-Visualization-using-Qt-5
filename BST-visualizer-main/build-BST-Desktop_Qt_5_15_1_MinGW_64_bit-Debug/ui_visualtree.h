/********************************************************************************
** Form generated from reading UI file 'visualtree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALTREE_H
#define UI_VISUALTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisualTree
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *Input_text;
    QPushButton *insert_button;
    QLabel *label_2;
    QLineEdit *Root_inp;
    QPushButton *Root_set;
    QLabel *label_3;
    QLabel *smllest_num;
    QLabel *largest_num;
    QLabel *label_4;
    QLabel *symetrcal_lab;
    QLabel *label_6;
    QLabel *left_branch;
    QLabel *label_8;
    QLabel *right_branch;
    QPushButton *exitButton;
    QLabel *label_5;
    QLineEdit *Input_text_2;
    QPushButton *insert_button_2;
    QLabel *headingLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VisualTree)
    {
        if (VisualTree->objectName().isEmpty())
            VisualTree->setObjectName(QString::fromUtf8("VisualTree"));
        VisualTree->resize(753, 449);
        centralWidget = new QWidget(VisualTree);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 350, 51, 61));
        Input_text = new QLineEdit(centralWidget);
        Input_text->setObjectName(QString::fromUtf8("Input_text"));
        Input_text->setGeometry(QRect(300, 370, 81, 25));
        insert_button = new QPushButton(centralWidget);
        insert_button->setObjectName(QString::fromUtf8("insert_button"));
        insert_button->setGeometry(QRect(380, 370, 61, 25));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 370, 51, 21));
        Root_inp = new QLineEdit(centralWidget);
        Root_inp->setObjectName(QString::fromUtf8("Root_inp"));
        Root_inp->setGeometry(QRect(120, 370, 71, 25));
        Root_set = new QPushButton(centralWidget);
        Root_set->setObjectName(QString::fromUtf8("Root_set"));
        Root_set->setGeometry(QRect(190, 370, 61, 25));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 10, 67, 17));
        smllest_num = new QLabel(centralWidget);
        smllest_num->setObjectName(QString::fromUtf8("smllest_num"));
        smllest_num->setGeometry(QRect(470, 10, 67, 17));
        largest_num = new QLabel(centralWidget);
        largest_num->setObjectName(QString::fromUtf8("largest_num"));
        largest_num->setGeometry(QRect(130, 360, 121, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 30, 91, 17));
        symetrcal_lab = new QLabel(centralWidget);
        symetrcal_lab->setObjectName(QString::fromUtf8("symetrcal_lab"));
        symetrcal_lab->setGeometry(QRect(490, 30, 67, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 50, 101, 17));
        left_branch = new QLabel(centralWidget);
        left_branch->setObjectName(QString::fromUtf8("left_branch"));
        left_branch->setGeometry(QRect(500, 50, 67, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(560, 50, 111, 17));
        right_branch = new QLabel(centralWidget);
        right_branch->setObjectName(QString::fromUtf8("right_branch"));
        right_branch->setGeometry(QRect(670, 50, 67, 17));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(660, 370, 93, 28));
        exitButton->setAutoDefault(false);
        exitButton->setFlat(false);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 360, 51, 41));
        Input_text_2 = new QLineEdit(centralWidget);
        Input_text_2->setObjectName(QString::fromUtf8("Input_text_2"));
        Input_text_2->setGeometry(QRect(490, 370, 81, 25));
        insert_button_2 = new QPushButton(centralWidget);
        insert_button_2->setObjectName(QString::fromUtf8("insert_button_2"));
        insert_button_2->setGeometry(QRect(570, 370, 61, 31));
        headingLabel = new QLabel(centralWidget);
        headingLabel->setObjectName(QString::fromUtf8("headingLabel"));
        headingLabel->setGeometry(QRect(300, 0, 121, 21));
        headingLabel->setStyleSheet(QString::fromUtf8("color:  red;\n"
"size: bigger;"));
        VisualTree->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VisualTree);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 753, 20));
        VisualTree->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VisualTree);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VisualTree->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VisualTree);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VisualTree->setStatusBar(statusBar);

        retranslateUi(VisualTree);

        exitButton->setDefault(false);


        QMetaObject::connectSlotsByName(VisualTree);
    } // setupUi

    void retranslateUi(QMainWindow *VisualTree)
    {
        VisualTree->setWindowTitle(QCoreApplication::translate("VisualTree", "VisualTree", nullptr));
        label->setText(QCoreApplication::translate("VisualTree", "Insert :", nullptr));
        insert_button->setText(QCoreApplication::translate("VisualTree", "Insert", nullptr));
        label_2->setText(QCoreApplication::translate("VisualTree", "Root :", nullptr));
        Root_set->setText(QCoreApplication::translate("VisualTree", "Set", nullptr));
        label_3->setText(QString());
        smllest_num->setText(QString());
        largest_num->setText(QString());
        label_4->setText(QString());
        symetrcal_lab->setText(QString());
        label_6->setText(QString());
        left_branch->setText(QString());
        label_8->setText(QString());
        right_branch->setText(QString());
        exitButton->setText(QCoreApplication::translate("VisualTree", "EXIT", nullptr));
        label_5->setText(QCoreApplication::translate("VisualTree", "Delete :", nullptr));
        insert_button_2->setText(QCoreApplication::translate("VisualTree", "Delete", nullptr));
        headingLabel->setText(QCoreApplication::translate("VisualTree", "BINARY SEARCH TREE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisualTree: public Ui_VisualTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALTREE_H
