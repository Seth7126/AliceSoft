// 函数: sub_6a7530
// 地址: 0x6a7530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
char* eax = nullptr

if (esi != 0)
    if (*arg2 == 0x23)
        eax = 1
        
        while (*(eax + arg2) != 0x20)
            if (*(eax + arg2 + 1) == 0x20)
                eax = &eax[1]
                break
            
            eax = &eax[2]
            
            if (eax s>= 0xf)
                break
    
    arg1 = *(esi + 0x50)
    
    if (arg1 != 0)
        return arg1(esi, eax + arg2)

int32_t var_8_1 = eax + arg2
void* eax_4 = ___acrt_iob_func(2)
int32_t edx = sub_65e8b0(eax_4, arg2, arg1, eax_4, "libpng warning: %s")
void* eax_5 = ___acrt_iob_func(2)
return sub_65e8b0(eax_5, edx, arg1, eax_5, 0x7e416c)
