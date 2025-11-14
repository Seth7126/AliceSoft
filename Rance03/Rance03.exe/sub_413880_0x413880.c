// 函数: sub_413880
// 地址: 0x413880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i = *(arg1 + 0x60)
int32_t eax

for (eax = *(arg1 + 0x64); i != eax; i += 0x6c)
    if (*(i + 0x10) != 0 && *(i + 0xc) == arg2)
        if (*(i + 0x14) != 0 && *(i + 0x28) != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = *(*(arg1 + 0x7c) + 0x6c)
            
            if (sub_405580(i, ebx_1) != 0)
                InvalidateRect(*(arg1 + 0xc), nullptr, 1)
            
            eax = sub_405660(i, ebx_1)
        
        if (*(i + 0x14) != 0 && *(i + 0x28) != 0 && eax.b == 0)
            break
        
        *arg3 = *(i + 4)
        *arg4 = *(i + 8)
        int32_t* eax_4
        eax_4.b = 1
        return eax_4

eax.b = 0
return eax
