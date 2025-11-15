// 函数: sub_5264d0
// 地址: 0x5264d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x28)

if (edi == 0)
    return 

int32_t* eax = *(edi + 4)
int32_t ebx_1 = arg2
arg2 = ebx_1

if (ebx_1 s< eax || *(edi + 8) s<= eax)
    return 

void* var_c_1 = arg1
eax = sub_404790(&arg2, *(edi + 0x14), *(edi + 0x10), &arg2)

if (eax != *(edi + 0x14) && *eax == ebx_1)
    sub_6feca0(eax, &eax[1], *(edi + 0x14) - &eax[1])
    *(edi + 0x14) -= 4
