// 函数: sub_431b70
// 地址: 0x431b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpvariable::CWindow::`vftable'{for `IWindow'}
int32_t* eax = sub_69adc6(0x28)

if (eax == 0)
    eax = nullptr
else
    __builtin_memset(eax, 0, 0x28)

arg1[1] = eax
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
arg1[0x19] = &dpvariable::CRect::`vftable'
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x18].w = 0
*eax = 3
arg1[1]->vFunc_1 = sub_431df0
arg1[1]->vFunc_2 = 0
arg1[1]->vFunc_3 = 0
arg1[1]->vFunc_4 = 0
arg1[1]->vFunc_5 = 0
arg1[1]->vFunc_6 = LoadCursorA(nullptr, 0x7f00)
arg1[1]->vFunc_7 = 0
arg1[1]->vFunc_8 = 0
arg1[0xe] = 0
__builtin_memcpy(&arg1[0xf], 
    "\x00\x00\xcf\x00\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80", 0x14)
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x16] = 0
arg1[0x17] = 0
return arg1
