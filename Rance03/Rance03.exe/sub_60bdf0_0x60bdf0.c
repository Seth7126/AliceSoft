// 函数: sub_60bdf0
// 地址: 0x60bdf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0x27c)
int32_t* eax = *(arg1 + 0x278)

if (eax != edx)
    while (*eax != arg2)
        eax = &eax[1]
        
        if (eax == edx)
            break
    
    if (eax != edx)
        eax.b = 0
        return eax

sub_412de0(arg1 + 0x278, &arg2)
int32_t eax_1
eax_1.b = 1
return eax_1
