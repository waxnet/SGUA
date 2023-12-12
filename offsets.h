#pragma once

uintptr_t gameAssembly = (uintptr_t)GetModuleHandle("GameAssembly.dll");

// locker methods
uintptr_t ownsAnimation = 0x5BE5F0;
uintptr_t ownsEmote = 0x5BF570;
uintptr_t ownsFootstep = 0x5C0470;
uintptr_t ownsSkin = 0x5C12B0;
