#pragma once

uintptr_t gameAssembly = (uintptr_t)GetModuleHandle("GameAssembly.dll");

// locker methods
uintptr_t ownsAnimation = 0x5A4250;
uintptr_t ownsEmote = 0x5A51D0;
uintptr_t ownsFootstep = 0x5A60D0;
uintptr_t ownsSkin = 0x5A6F10;
