// 函数: sub_476020
// 地址: 0x476020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
void* eax = sub_475cf0(ecx, arg1)

if (eax != 0)
    int32_t ecx_1 = *(eax + 0x34)
    
    if (ecx_1 == 1)
        return fconvert.t(_mm_cvtepi32_ps(zx.o(*(eax + 0x3c)) ^ 0x65656565))
    
    if (ecx_1 != 2)
        return fconvert.t(arg2)
    
    arg2 = sub_462f40(*(eax + 0x40))

return fconvert.t(arg2)
