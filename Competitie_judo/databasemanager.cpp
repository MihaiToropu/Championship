#include "databasemanager.h"

#include <QDebug>

DatabaseManager&DatabaseManager::instance()
{
    static DatabaseManager singleton;
    return singleton;
}

DatabaseManager::DatabaseManager(const QString& path) :
    mDatabase(new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"))),
    mConcurentRepository(*mDatabase),
    mCategorieRepository(*mDatabase)
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
