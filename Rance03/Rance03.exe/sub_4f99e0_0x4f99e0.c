// 函数: sub_4f99e0
// 地址: 0x4f99e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_4a8b80(data_75d4fc + 0x174, arg1)

if (eax == 0)
    eax.b = 0
    return eax

void* ecx_3 = *(*(sub_510680(*(eax + 0x34), arg2) + 0x70) + 0xf0)
void* eax_2

if (ecx_3 != 0)
    eax_2 = *(ecx_3 + 0x10)
    
    if (eax_2 != 0)
        void* eax_3 = *(eax_2 + 0x3c)
        
        if (eax_3 != 0)
            int32_t eax_5
            eax_5.b = *(eax_3 + 0x14) == *(ecx_3 + 0x44)
            return eax_5
        
        int32_t eax_4
        eax_4.b = 0xffffffff == *(ecx_3 + 0x44)
        return eax_4

eax_2.b = 1
return eax_2
