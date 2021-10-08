#include "inicio.h"
#include "ui_inicio.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QIcon>
#include <QPixmap>
#include <QPushButton>
#include <QVBoxLayout>


Inicio::Inicio(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Inicio)
{
    ui->setupUi(this);


    conexion = QSqlDatabase::addDatabase("QODBC");
    conexion.setPort(3306);
    conexion.setHostName("root");
    conexion.setPassword("");
    conexion.setDatabaseName("restaurant");

    if(conexion.open())
        qDebug()<< "Conexión EXITOSA";
    else
        qDebug()<< "Conexión FALLIDA";

    QSqlQuery p;
    QSqlQuery p1;
    p.prepare("select nombre, descripcion, costo from comida where idComida=12026");

    p.exec();
    p.next();
        ui->titulo->setText(p.value(0).toString());
        ui->des1->setText(p.value(1).toString());
        ui->p1->setText(p.value(2).toString());

    p1.prepare("select nombre, descripcion, costo from comida where idComida=12025");
    p1.exec();
    p1.next();
        ui->titulo2->setText(p1.value(0).toString());
        ui->des2->setText(p1.value(1).toString());
        ui->p2->setText(p1.value(2).toString());

        //AGREGAR DESAYUNOS
        QSqlQuery chila;
        chila.prepare("select nombre,descripcion, costo from comida where IdComida=12017");
        chila.exec();
        chila.next();
        ui->nom1->setText(chila.value(0).toString());
        ui->descrip1->setText(chila.value(1).toString());
        ui->precio1->setText(chila.value(2).toString());

        QSqlQuery H;
        H.prepare("select nombre,descripcion, costo from comida where IdComida=12018");
        H.exec();
        H.next();
        ui->nom2->setText(H.value(0).toString());
        ui->descrip2->setText(H.value(1).toString());
        ui->precio2->setText(H.value(2).toString());

        QSqlQuery Ho;
        Ho.prepare("select nombre,descripcion, costo from comida where IdComida=12019");
        Ho.exec();
        Ho.next();
        ui->nom3->setText(Ho.value(0).toString());
        ui->descrip3->setText(Ho.value(1).toString());
        ui->precio3->setText(Ho.value(2).toString());

        QSqlQuery sa;
        sa.prepare("select nombre,descripcion, costo from comida where IdComida=12020");
        sa.exec();
        sa.next();
        ui->nom4->setText(sa.value(0).toString());
        ui->descrip4->setText(sa.value(1).toString());
        ui->precio4->setText(sa.value(2).toString());

        QSqlQuery mo;
        mo.prepare("select nombre,descripcion, costo from comida where IdComida=12021");
        mo.exec();
        mo.next();
        ui->nom5->setText(mo.value(0).toString());
        ui->descrip5->setText(mo.value(1).toString());
        ui->precio5->setText(mo.value(2).toString());

        QSqlQuery co;
        co.prepare("select nombre,descripcion, costo from comida where IdComida=12022");
        co.exec();
        co.next();
        ui->nom6->setText(co.value(0).toString());
        ui->descrip6->setText(co.value(1).toString());
        ui->precio6->setText(co.value(2).toString());

        QSqlQuery en;
        en.prepare("select nombre,descripcion, costo from comida where IdComida=12023");
        en.exec();
        en.next();
        ui->nom7->setText(en.value(0).toString());
        ui->descrip7->setText(en.value(1).toString());
        ui->precio7->setText(en.value(2).toString());

        QSqlQuery ef;
        ef.prepare("select nombre,descripcion, costo from comida where IdComida=12024");
        ef.exec();
        ef.next();
        ui->nom8->setText(ef.value(0).toString());
        ui->descrip8->setText(ef.value(1).toString());
        ui->precio8->setText(ef.value(2).toString());

        QSqlQuery wa;
        wa.prepare("select nombre,descripcion, costo from comida where IdComida=12025");
        wa.exec();
        wa.next();
        ui->nom9->setText(wa.value(0).toString());
        ui->descrip9->setText(wa.value(1).toString());
        ui->precio9->setText(wa.value(2).toString());

        QSqlQuery cr;
        cr.prepare("select nombre,descripcion, costo from comida where IdComida=12026");
        cr.exec();
        cr.next();
        ui->nom10->setText(cr.value(0).toString());
        ui->descrip10->setText(cr.value(1).toString());
        ui->precio10->setText(cr.value(2).toString());

        //AGREGAR BEBIDAS

        QSqlQuery cc;
        cc.prepare("select nombre,descripcion, costo from comida where IdComida=12000");
        cc.exec();
        cc.next();
        ui->nomb1->setText(cc.value(0).toString());
        ui->desb1->setText(cc.value(1).toString());
        ui->pb1->setText(cc.value(2).toString());

        QSqlQuery ca;
        ca.prepare("select nombre,descripcion, costo from comida where IdComida=12001");
        ca.exec();
        ca.next();
        ui->nomb2->setText(ca.value(0).toString());
        ui->desb2->setText(ca.value(1).toString());
        ui->pb2->setText(ca.value(2).toString());

        QSqlQuery te;
        te.prepare("select nombre,descripcion, costo from comida where IdComida=12002");
        te.exec();
        te.next();
        ui->nomb3->setText(te.value(0).toString());
        ui->desb3->setText(te.value(1).toString());
        ui->pb3->setText(te.value(2).toString());

        QSqlQuery le;
        le.prepare("select nombre,descripcion, costo from comida where IdComida=12003");
        le.exec();
        le.next();
        ui->nomb4->setText(le.value(0).toString());
        ui->desb4->setText(le.value(1).toString());
        ui->pb4->setText(le.value(2).toString());

        QSqlQuery th;
        th.prepare("select nombre,descripcion, costo from comida where IdComida=12004");
        th.exec();
        th.next();
        ui->nomb5->setText(th.value(0).toString());
        ui->desb5->setText(th.value(1).toString());
        ui->pb5->setText(th.value(2).toString());

        QSqlQuery lc;
        lc.prepare("select nombre,descripcion, costo from comida where IdComida=12005");
        lc.exec();
        lc.next();
        ui->nomb6->setText(lc.value(0).toString());
        ui->desb6->setText(lc.value(1).toString());
        ui->pb6->setText(lc.value(2).toString());

        QSqlQuery chc;
        chc.prepare("select nombre,descripcion, costo from comida where IdComida=12006");
        chc.exec();
        chc.next();
        ui->nomb7->setText(chc.value(0).toString());
        ui->desb7->setText(chc.value(1).toString());
        ui->pb7->setText(chc.value(2).toString());

        QSqlQuery na;
        na.prepare("select nombre,descripcion, costo from comida where IdComida=12007");
        na.exec();
        na.next();
        ui->nomb8->setText(na.value(0).toString());
        ui->desb8->setText(na.value(1).toString());
        ui->pb8->setText(na.value(2).toString());

        QSqlQuery li;
        li.prepare("select nombre,descripcion, costo from comida where IdComida=12008");
        li.exec();
        li.next();
        ui->nomb9->setText(li.value(0).toString());
        ui->desb9->setText(li.value(1).toString());
        ui->pb9->setText(li.value(2).toString());

        //AGREGAR POSTRES

        QSqlQuery pas;
        pas.prepare("select nombre,descripcion, costo from comida where IdComida=12012");
        pas.exec();
        pas.next();
        ui->npos->setText(pas.value(0).toString());
        ui->dpos->setText(pas.value(1).toString());
        ui->ppos->setText(pas.value(2).toString());

        QSqlQuery flan;
        flan.prepare("select nombre,descripcion, costo from comida where IdComida=12013");
        flan.exec();
        flan.next();
        ui->npos2->setText(flan.value(0).toString());
        ui->dpos2->setText(flan.value(1).toString());
        ui->ppos2->setText(flan.value(2).toString());

        QSqlQuery ma;
        ma.prepare("select nombre,descripcion, costo from comida where IdComida=12014");
        ma.exec();
        ma.next();
        ui->npos3->setText(ma.value(0).toString());
        ui->dpos3->setText(ma.value(1).toString());
        ui->ppos3->setText(ma.value(2).toString());

        QSqlQuery su;
        su.prepare("select nombre,descripcion, costo from comida where IdComida=12015");
        su.exec();
        su.next();
        ui->npos4->setText(su.value(0).toString());
        ui->dpos4->setText(su.value(1).toString());
        ui->ppos4->setText(su.value(2).toString());

        QSqlQuery ba;
        ba.prepare("select nombre,descripcion, costo from comida where IdComida=12016");
        ba.exec();
        ba.next();
        ui->npos5->setText(ba.value(0).toString());
        ui->dpos5->setText(ba.value(1).toString());
        ui->ppos5->setText(ba.value(2).toString());


}

Inicio::~Inicio()
{
    delete ui;
}


//BOTONES INTERFAZ HOME

void Inicio::on_desayunos_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Inicio::on_bebidas_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Inicio::on_postres_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

//BOTONES INTERFAZ BEBIDAS
void Inicio::on_desayunos_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Inicio::on_bebidas_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Inicio::on_postres_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

//BOTONES INTERFAZ DESAYUNOS
void Inicio::on_postres_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Inicio::on_desayunos_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void Inicio::on_bebidas_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//BOTONES INTERFAZ POSTRES


void Inicio::on_desayunos_4_clicked()
{

        ui->stackedWidget->setCurrentIndex(2);
}

void Inicio::on_bebidas_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Inicio::on_postres_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Inicio::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Inicio::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Inicio::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
