#include "databasemanager.h"

#include <QDebug>
#include <QMessageBox>

DatabaseManager&DatabaseManager::instance()
{
    static DatabaseManager singleton;
    return singleton;
}

DatabaseManager::DatabaseManager(const QString& path) :
    mDatabase(new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"))),
    mConcurentRepository(*mDatabase),
    mCategorieRepository(*mDatabase),
    mClubRepository(*mDatabase)
{
    qDebug() << path;

    QSettings settings(path, QSettings::IniFormat);

    qDebug() << settings.value("DATABASENAME").toString();
    mDatabase->setDatabaseName(settings.value("DATABASENAME").toString());
    mDatabase->setHostName(settings.value("HOSTNAME").toString());
    mDatabase->setUserName(settings.value("USERNAME").toString());
    mDatabase->setPassword(settings.value("PASSWORD").toString());
   // mDatabase->open();

    bool databaseConnected = mDatabase->open();
   // printf("%s",databaseConnected);

    if(databaseConnected)
    {
        qDebug() << "Database connection: Connected";
        //QMessageBox::information(this, tr("No Image Name");

    }
    else
    {
        qDebug() << "Database connection: Not Connected";
    }

    mConcurentRepository.init();
    mCategorieRepository.init();
}

DatabaseManager::~DatabaseManager()
{
    mDatabase->close();
}
