TARGET = ru.template.DBus

CONFIG += \
    auroraapp

PKGCONFIG += \

SOURCES += \
    dbusinterface.cpp \
    src/main.cpp \

HEADERS += \
    dbusinterface.h

DISTFILES += \
    rpm/ru.template.DBus.spec \

AURORAAPP_ICONS = 86x86 108x108 128x128 172x172

CONFIG += auroraapp_i18n

TRANSLATIONS += \
    translations/ru.template.DBus.ts \
    translations/ru.template.DBus-ru.ts \

# Добавлено мной
QT += dbus
