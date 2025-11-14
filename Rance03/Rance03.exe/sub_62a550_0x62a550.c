// 函数: sub_62a550
// 地址: 0x62a550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax = nullptr

if (arg1 != 0)
    if (*arg2 == 0x23)
        eax = 1
        
        while (*(eax + arg2) != 0x20)
            if (*(eax + arg2 + 1) == 0x20)
                eax = &eax[1]
                break
            
            eax = &eax[2]
            
            if (eax s>= 0xf)
                break
    
    int32_t ecx = *(arg1 + 0x50)
    
    if (ecx != 0)
        return ecx(arg1, eax + arg2)

int32_t var_8_1 = eax + arg2
_fprintf(0x74a1b8, "libpng warning: %s")
return _fprintf(0x74a1b8, U"\n")
