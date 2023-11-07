#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "employeeinfo.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_EditE1_clicked()
{
    EmployeeInfo employee1;
    employee1.setName(ui->nameEd->text());
    employee1.setSurname(ui->surnameEd->text());
    employee1.setBDate(ui->bDateEd->text());
    employee1.setNumber(ui->teleEd->text());
    employee1.setLastWork(ui->lWorkEd->text());
    employee1.setLastWorkDate(ui->lWorkDateEd->text());
    employee1.setSalaty(ui->salaryEd->text().toDouble());
    employee1.setProfSkills(ui->profSkillsEd->text());

    ui->nameS->setText("Name:  " + employee1.getName());
    ui->surnameS->setText("Surname:  " + employee1.getSurname());
    ui->bDateS->setText("Burth Date:  " + employee1.getBDate());
    ui->teleS->setText("Telepone Number:  " + employee1.getNumber());
    ui->lWorkS->setText("Last Work:  " + employee1.getLastWork());
    ui->lWorkDateS->setText("Last Work Date:  " + employee1.getLastWorkDate());
    ui->salaryS->setText("Salary / h:  " + QString::number(employee1.getSalaty()));
    ui->profSkillsS->setText("Professional Skills:  " + employee1.getProfSkills());
}


void MainWindow::on_EditE1_3_clicked()
{
    EmployeeInfo employee2;
    employee2.setName(ui->nameEd_3->text());
    employee2.setSurname(ui->surnameEd_3->text());
    employee2.setBDate(ui->bDateEd_3->text());
    employee2.setNumber(ui->teleEd_3->text());
    employee2.setLastWork(ui->lWorkEd_3->text());
    employee2.setLastWorkDate(ui->lWorkDateEd_3->text());
    employee2.setSalaty(ui->salaryEd_3->text().toDouble());
    employee2.setProfSkills(ui->profSkillsEd_3->text());

    ui->nameS_3->setText("Name:  " + employee2.getName());
    ui->surnameS_3->setText("Surname:  " + employee2.getSurname());
    ui->bDateS_3->setText("Burth Date:  " + employee2.getBDate());
    ui->teleS_3->setText("Telepone Number:  " + employee2.getNumber());
    ui->lWorkS_3->setText("Last Work:  " + employee2.getLastWork());
    ui->lWorkDateS_3->setText("Last Work Date:  " + employee2.getLastWorkDate());
    ui->salaryS_3->setText("Salary / h:  " + QString::number(employee2.getSalaty()));
    ui->profSkillsS_3->setText("Professional Skills:  " + employee2.getProfSkills());
}


void MainWindow::on_EditE1_5_clicked()
{
    EmployeeInfo employee3;
    employee3.setName(ui->nameEd_5->text());
    employee3.setSurname(ui->surnameEd_5->text());
    employee3.setBDate(ui->bDateEd_5->text());
    employee3.setNumber(ui->teleEd_5->text());
    employee3.setLastWork(ui->lWorkEd_5->text());
    employee3.setLastWorkDate(ui->lWorkDateEd_5->text());
    employee3.setSalaty(ui->salaryEd_5->text().toDouble());
    employee3.setProfSkills(ui->profSkillsEd_5->text());

    ui->nameS_5->setText("Name:  " + employee3.getName());
    ui->surnameS_5->setText("Surname:  " + employee3.getSurname());
    ui->bDateS_5->setText("Burth Date:  " + employee3.getBDate());
    ui->teleS_5->setText("Telepone Number:  " + employee3.getNumber());
    ui->lWorkS_5->setText("Last Work:  " + employee3.getLastWork());
    ui->lWorkDateS_5->setText("Last Work Date:  " + employee3.getLastWorkDate());
    ui->salaryS_5->setText("Salary / h:  " + QString::number(employee3.getSalaty()));
    ui->profSkillsS_5->setText("Professional Skills:  " + employee3.getProfSkills());
}

