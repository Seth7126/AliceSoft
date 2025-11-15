// 函数: sub_45b7a0
// 地址: 0x45b7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s< 0x36)
    int32_t eax
    eax.b = 0
    return eax

uint32_t eax_1 = zx.d(*(arg2 + 0x1c))
int32_t ecx = *(arg2 + 0x12)
int32_t edx = *(arg2 + 0x16)
int32_t ebx = *(arg2 + 0x2e)
*(arg1 + 4) = eax_1
*(arg1 + 8) = ecx
*(arg1 + 0xc) = edx

if (eax_1 != 8)
    if (eax_1 != 0x18 && eax_1 != 0x20)
        eax_1.b = 0
        return eax_1
    
    *(arg1 + 0x10) = arg2 + 0x36
    void* eax_9
    eax_9.b = 1
    return eax_9

*(arg1 + 0x14) = arg2 + 0x36

if (ebx != 0)
    *(arg1 + 0x18) = ebx
    *(arg1 + 0x10) = (ebx << 2) + 0x36 + arg2
    int32_t eax_8
    eax_8.b = 1
    return eax_8

*(arg1 + 0x18) = 0x100
*(arg1 + 0x10) = (*(arg1 + 0x18) << 2) + 0x36 + arg2
void* eax_5
eax_5.b = 1
return eax_5
