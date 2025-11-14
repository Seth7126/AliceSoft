// 函数: sub_412e40
// 地址: 0x412e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x70)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x70) = 0
    *(arg1 + 0x74) = 0
    *(arg1 + 0x78) = 0

HGDIOBJ ho = *(arg1 + 0x48)
*(arg1 + 0x44) = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x48) = 0

if (*(arg1 + 0x64) u>= 0x10)
    j__free(*(arg1 + 0x50))

*(arg1 + 0x64) = 0xf
*(arg1 + 0x60) = 0
*(arg1 + 0x50) = 0
int32_t* result = *(arg1 + 0x38)

if (result != 0)
    sub_4107c0(result, *(arg1 + 0x3c))
    result = j__free(*(arg1 + 0x38))
    *(arg1 + 0x38) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0

if (*(arg1 + 0x34) u>= 0x10)
    result = j__free(*(arg1 + 0x20))

*(arg1 + 0x34) = 0xf
*(arg1 + 0x30) = 0
*(arg1 + 0x20) = 0

if (*(arg1 + 0x1c) u>= 0x10)
    result = j__free(*(arg1 + 8))

*(arg1 + 0x1c) = 0xf
*(arg1 + 0x18) = 0
*(arg1 + 8) = 0
return result
