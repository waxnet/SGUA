#pragma once

#include "offsets.h"

// animation unlocker
bool(__fastcall* ownsAnimation_Original)(DWORD*, DWORD*, DWORD*);
bool __fastcall ownsAnimation_Hook(DWORD* __this, DWORD* id, DWORD* methodInfo)
{
	return true;
}
static void unlockAnimations()
{
	MH_CreateHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsAnimation), &ownsAnimation_Hook, (LPVOID*)ownsAnimation_Original);
	MH_EnableHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsAnimation));
}

// emote unlocker
bool(__fastcall* ownsEmote_Original)(DWORD*, DWORD*, DWORD*);
bool __fastcall ownsEmote_Hook(DWORD* __this, DWORD* id, DWORD* methodInfo)
{
	return true;
}
static void unlockEmotes()
{
	MH_CreateHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsEmote), &ownsEmote_Hook, (LPVOID*)ownsEmote_Original);
	MH_EnableHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsEmote));
}

// footstep unlocker
bool(__fastcall* ownsFootstep_Original)(DWORD*, DWORD*, DWORD*);
bool __fastcall ownsFootstep_Hook(DWORD* __this, DWORD* id, DWORD* methodInfo)
{
	return true;
}
static void unlockFootsteps()
{
	MH_CreateHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsFootstep), &ownsFootstep_Hook, (LPVOID*)ownsFootstep_Original);
	MH_EnableHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsFootstep));
}

// skin unlocker
bool(__fastcall* ownsSkin_Original)(DWORD*, DWORD*, DWORD*);
bool __fastcall ownsSkin_Hook(DWORD* __this, DWORD* id, DWORD* methodInfo)
{
	return true;
}
static void unlockSkins()
{
	MH_CreateHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsSkin), &ownsSkin_Hook, (LPVOID*)ownsSkin_Original);
	MH_EnableHook(reinterpret_cast<LPVOID*>(gameAssembly + ownsSkin));
}

// unlock all
static void unlockAll()
{
	unlockAnimations();
	unlockEmotes();
	unlockFootsteps();
	unlockSkins();
}
