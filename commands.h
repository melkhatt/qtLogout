#ifndef COMMANDS_H
#define COMMANDS_H

#define LOGOUT_CMD "/usr/bin/openbox --exit"
#define SUSPEND_CMD "dbus-send --system --print-reply --dest='org.freedesktop.UPower' /org/freedesktop/UPower org.freedesktop.UPower.Suspend"
#define REBOOT_CMD "dbus-send --system --print-reply --dest='org.freedesktop.ConsoleKit' /org/freedesktop/ConsoleKit/Manager org.freedesktop.ConsoleKit.Manager.Restart"
#define POWEROFF_CMD "dbus-send --system --print-reply --dest='org.freedesktop.ConsoleKit' /org/freedesktop/ConsoleKit/Manager org.freedesktop.ConsoleKit.Manager.Stop"

#endif // COMMANDS_H
