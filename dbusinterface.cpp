#include "dbusinterface.h"

DBusInterface::DBusInterface(QObject *parent) : QDBusInterface("org.freedesktop.Notifications",
                                                               "/org/freedesktop/Notifications",
                                                               "org.freedesktop.Notifications",
                                                               QDBusConnection::sessionBus(),
                                                               parent)
{

}

void DBusInterface::call()
{
    QDBusInterface::call("Notify",
                         "",                         // app_name
                         (quint32)0,                 // replaces_id
                         QString(""),                // app_icon
                         QString("Message"),         // summary
                         QString("Warning message"), // body
                         QStringList {},             // actions, as
                         QMap<QString, QVariant> {}, // hits, a{sv}
                         3000                        // expire_timeout
                         );
}
