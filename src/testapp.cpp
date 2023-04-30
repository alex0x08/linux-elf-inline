#include "testapp.h"
#include "ui_testapp.h"

testapp::testapp(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::testapp)
{
    m_ui->setupUi(this);
    connect(m_ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

testapp::~testapp() = default;
