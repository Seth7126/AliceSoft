// 函数: sub_5d5a20
// 地址: 0x5d5a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* edx = arg3

if (edx s< 0 || edx u>= *(arg1 + 0x24))
    int32_t eax
    eax.b = 0
    return eax

var_4.b = 0
void* var_8 = var_4
arg3 = **(arg1 + 0x20)
sub_432440(&arg3, edx)
void** edx_2 = arg3 + 0x10

if (edx_2[5] u>= 0x10)
    edx_2 = *edx_2

(*(*arg2 + 4))(edx_2)
int32_t eax_4
eax_4.b = 1
return eax_4
