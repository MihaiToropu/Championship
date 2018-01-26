#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include "concurentRepository.h"
#include "categorierepository.h"

#include <memory>
#include <QString>
#include <QSettings>
#include <QSqlDatabase>
#include <QDir>

class QSqlQuerry;
class QSqlDatabase;

static const QString DATABASE_CONFIG_FILE_PATH = "/home/marius/DB/Championship/Competitie_judo/config.conf";

class DatabaseManager
{

public:
    static DatabaseManager& instance();
    ~DatabaseManager();
protected:
    DatabaseManager(const QString& path = DATABASE_CONFIG_FILE_PATH);

private:
    std::unique_ptr<QSqlDatabase> mDatabase;
public:
    concurentRepository mConcurentRepository;
    categorieRepository mCategorieRepository;
};


#endif // DATABASEMANAGER_H
