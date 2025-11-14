// 函数: sub_635550
// 地址: 0x635550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = zx.d(*(arg2 + 0x1c))
int32_t edx = *(arg2 + 0x12)
int32_t esi = *(arg2 + 0x16)
int32_t ebx = *(arg2 + 0x2e)
*(arg1 + 4) = eax
*(arg1 + 8) = edx
*(arg1 + 0xc) = esi

if (eax != 8)
    if (eax != 0x18 && eax != 0x20)
        eax.b = 0
        return eax
    
    *(arg1 + 0x10) = arg2 + 0x36
    void* eax_8
    eax_8.b = 1
    return eax_8

*(arg1 + 0x14) = arg2 + 0x36

if (ebx != 0)
    *(arg1 + 0x18) = ebx
    *(arg1 + 0x10) = (ebx << 2) + 0x36 + arg2
    int32_t eax_7
    eax_7.b = 1
    return eax_7

*(arg1 + 0x18) = 0x100
*(arg1 + 0x10) = (*(arg1 + 0x18) << 2) + 0x36 + arg2
void* eax_4
eax_4.b = 1
return eax_4
