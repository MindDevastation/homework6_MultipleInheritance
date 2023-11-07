#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QString>
#include <QDate>


class PersonalData
{
protected:
    QString name;
    QString surname;
    QString bDate;
    QString number;
public:
    PersonalData();

    QString getName();
    void setName(QString newName);

    QString getSurname();
    void setSurname(QString newSurname);

    QString getBDate();
    void setBDate(QString newBDate);

    QString getNumber();
    void setNumber(QString newNewNumber);
};

class ProfessionalData{
protected:
    QString lastWork;
    QString lastWorkDate;
    double salaty;
public:
    ProfessionalData();

    QString getLastWork();
    void setLastWork(QString newLastWork);

    QString getLastWorkDate();
    void setLastWorkDate(QString newLastWorkDate);

    double getSalaty();
    void setSalaty(double newSalaty);
};

class EmployeeInfo: public ProfessionalData, public PersonalData{
    QString profSkills;
public:
    EmployeeInfo();
    QString getProfSkills();
    void setProfSkills(QString newProfSkills);
};

#endif // EMPLOYEEINFO_H
