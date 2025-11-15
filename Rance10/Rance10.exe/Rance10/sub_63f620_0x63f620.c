// 函数: sub_63f620
// 地址: 0x63f620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x1c) - *(arg1 + 0x18)) s>> 4)
    int32_t eax_3 = *(arg1 + 0x18)
    int32_t edx = arg2 * 2
    
    for (void* i = *(eax_3 + (edx << 3) + 4); i != *(eax_3 + (edx << 3) + 8); i += 0x14)
        if (*(i + 4) == arg3)
            eax = sub_63ec50(i, arg4)
            
            if (eax == 0)
                break
            
            *arg5 = *(eax + 4)
            int32_t* eax_4
            eax_4.b = 1
            return eax_4

eax.b = 0
return eax
