#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void turnOffMonitor() {
    printf("Turning off monitor.\n");
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
}

int main() {
    turnOffMonitor();
    exit(0);
}
