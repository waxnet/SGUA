// libraries
#include "pch.h"
#include <MinHook.h>
#include <Windows.h>
#include <cstdio>

// features
#include "unlocker.h"

// initialization
static void init()
{
    // console
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);

    // initialize minhook
    MH_Initialize();
}

// main
void main()
{
    // initialize cheat
    init();

    // console title
    SetConsoleTitle("Stumble Guys Unlock All");

    // status message
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("SGUA initialized successfully.\n\n");

    // run features
    unlockAll();
}

// dll entry
BOOL APIENTRY DllMain( HMODULE hModule,  DWORD  ul_reason_for_call,  LPVOID lpReserved  )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)main, 0, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
