#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <qdebug.h>


QT_BEGIN_NAMESPACE
namespace Ui { class Inicio; }
QT_END_NAMESPACE

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    Inicio(QWidget *parent = nullptr);
    ~Inicio();

private slots:
    void on_desayunos_clicked();

    void on_bebidas_2_clicked();

    void on_bebidas_clicked();

    void on_postres_clicked();

    void on_desayunos_3_clicked();

    void on_bebidas_3_clicked();

    void on_postres_3_clicked();

    void on_postres_2_clicked();

    void on_desayunos_2_clicked();

    void on_desayunos_4_clicked();

    void on_bebidas_4_clicked();

    void on_postres_4_clicked();

    //void on_listadesayunos_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Inicio *ui;
     QSqlDatabase  conexion;
};
#endif // INICIO_H
