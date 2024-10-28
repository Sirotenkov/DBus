#include <auroraapp.h>
#include <QtQuick>

#include <QtDBus/QtDBus>
#include <dbusinterface.h>

int main(int argc, char *argv[])
{
    QScopedPointer<QGuiApplication> application(Aurora::Application::application(argc, argv));
    application->setOrganizationName(QStringLiteral("ru.template"));
    application->setApplicationName(QStringLiteral("DBus"));

    DBusInterface dbusinterface(&*application);

    QScopedPointer<QQuickView> view(Aurora::Application::createView());

    view->rootContext()->setContextProperty("dbus", &dbusinterface);

    view->setSource(Aurora::Application::pathTo(QStringLiteral("qml/DBus.qml")));
    view->show();

    return application->exec();
}
