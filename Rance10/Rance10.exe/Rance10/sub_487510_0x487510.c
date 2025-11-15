// 函数: sub_487510
// 地址: 0x487510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_6 = *(arg1 + 4)

if (ecx_6 == 0)
    return *arg5

void** edx = arg2

if (edx[5] u>= 0x10)
    edx = *edx

int32_t* result = (*(*(ecx_6 + 4) + 0x28))(edx)

if (result == 0)
    return result

int32_t eax_4 = (*(*result + 0x20))(arg3)
void** ecx_2 = arg4

if (ecx_2[5] u>= 0x10)
    ecx_2 = *ecx_2

return (*(*result + 0x10))(eax_4, (*(*result + 0x24))(ecx_2), *arg5)
