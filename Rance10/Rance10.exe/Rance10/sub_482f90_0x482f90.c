// 函数: sub_482f90
// 地址: 0x482f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return arg2

void* esi = arg3

if (arg2 u<= esi)
    esi = arg2

int32_t ebx = *(arg4 + 0x3c)
int32_t ebp = *(arg4 + 0x38)
char* edx = *(arg4 + 0x34)

if (esi + edx u> ebx + ebp)
    void* esi_2 = ebp - edx
    esi = esi_2 + ebx
    
    if (esi_2 == neg.d(ebx))
        return 0

sub_700660(arg1, edx, esi)
*(arg4 + 0x34) += esi
return esi
