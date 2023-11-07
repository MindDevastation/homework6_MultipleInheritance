#include "employeeinfo.h"

PersonalData::PersonalData()
{
    name = "NaN";
    surname = "NaN";
    bDate = "NaN";
    number = "NaN";
}

QString PersonalData::getName(){return name;}
void PersonalData::setName(QString newName){name = newName;}

QString PersonalData::getSurname(){return surname;}
void PersonalData::setSurname(QString newSurname){surname = newSurname;}

QString PersonalData::getBDate(){return bDate;}
void PersonalData::setBDate(QString newBDate){bDate = newBDate;}

QString PersonalData::getNumber(){return number;}
void PersonalData::setNumber(QString newNewNumber){number = newNewNumber;}

ProfessionalData::ProfessionalData()
{
    lastWork = "NaN";
    lastWorkDate = "Nan";
    salaty = 0.0;
}

QString ProfessionalData::getLastWork(){return lastWork;}
void ProfessionalData::setLastWork(QString newLastWork){lastWork = newLastWork;}

QString ProfessionalData::getLastWorkDate(){return lastWorkDate;}
void ProfessionalData::setLastWorkDate(QString newLastWorkDate){lastWorkDate = newLastWorkDate;}

double ProfessionalData::getSalaty(){return salaty;}
void ProfessionalData::setSalaty(double newSalaty){salaty = newSalaty;}

EmployeeInfo::EmployeeInfo()
{
    profSkills = "NaN";
}

QString EmployeeInfo::getProfSkills(){return profSkills;}
void EmployeeInfo::setProfSkills(QString newProfSkills){profSkills = newProfSkills;}
