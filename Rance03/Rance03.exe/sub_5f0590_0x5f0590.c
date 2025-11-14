// 函数: sub_5f0590
// 地址: 0x5f0590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 4)
    void* edx_1 = (arg2 << 4) + *(arg1 + 0x14)
    
    for (void* i = *(edx_1 + 4); i != *(edx_1 + 8); i += 0x14)
        if (*(i + 4) == arg3)
            eax = sub_5efaf0(i, arg4)
            
            if (eax == 0)
                break
            
            *arg5 = *(eax + 4)
            int32_t* eax_3
            eax_3.b = 1
            return eax_3

eax.b = 0
return eax
