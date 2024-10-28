#ifndef DBUSINTERFACE_H
#define DBUSINTERFACE_H

#include <QDBusInterface>
//#include <QDBus>

class DBusInterface : public QDBusInterface
{
    Q_OBJECT

public:
    explicit DBusInterface(QObject *parent = nullptr);

    Q_INVOKABLE void call();

};

#endif // DBUSINTERFACE_H
