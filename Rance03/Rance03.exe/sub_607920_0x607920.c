// 函数: sub_607920
// 地址: 0x607920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1

if (esi[5] u< 0x10)
    int32_t* eax_3 = arg2
    
    if (eax_3[5] u< 0x10)
        return sub_607ca0(arg1, eax_3)
    
    void* ecx = esi[4]
    int32_t edi_1 = *eax_3
    
    if (ecx != 0xffffffff)
        eax_3 = sub_69d850(eax_3, esi, ecx + 1)
    
    *esi = edi_1
    return eax_3

if (arg2[5] u>= 0x10)
    int32_t edx = *esi
    int32_t eax = *arg2
    *esi = eax
    *arg2 = edx
    return eax

void* eax_1 = arg2[4]
int32_t ebx = *esi
int32_t* eax_2 = eax_1 + 1

if (eax_1 != 0xffffffff)
    eax_2 = sub_69d850(esi, arg2, eax_2)

*arg2 = ebx
return eax_2
