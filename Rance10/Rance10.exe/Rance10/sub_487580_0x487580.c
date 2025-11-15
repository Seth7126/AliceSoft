// 函数: sub_487580
// 地址: 0x487580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_7 = *(arg1 + 4)

if (ecx_7 == 0)
    *arg6
    return arg6

void** edx = arg3

if (edx[5] u>= 0x10)
    edx = *edx

int32_t* eax_2 = (*(*(ecx_7 + 4) + 0x28))(edx)

if (eax_2 == 0)
    return eax_2

int32_t eax_4 = (*(*eax_2 + 0x20))(arg4)
void** ecx_2 = arg5

if (ecx_2[5] u>= 0x10)
    ecx_2 = *ecx_2

int32_t eax_6
int32_t ecx_4
eax_6, ecx_4 = (*(*eax_2 + 0x24))(ecx_2)
int32_t var_c_2 = ecx_4
int32_t eax_8 = (*(*eax_2 + 0x14))(eax_4, eax_6, *arg6)
arg6 = fconvert.s(arg2)
return eax_8
