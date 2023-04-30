#ifndef TESTAPP_H
#define TESTAPP_H

#include <QMainWindow>
#include <QScopedPointer>

namespace Ui {
class testapp;
}

class testapp : public QMainWindow
{
    Q_OBJECT

public:
    explicit testapp(QWidget *parent = nullptr);
    ~testapp() override;

private:
    QScopedPointer<Ui::testapp> m_ui;
};

#endif // TESTAPP_H
