// 函数: sub_485a50
// 地址: 0x485a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

EnterCriticalSection(*(arg1 + 0x1c) + 4)
sub_489590(arg2)
(*(*arg2[1] + 0x14))()
char eax_6 = (*(*arg2[1] + 0xc))()
void*** ecx_3 = *(arg1 + 0x10)
int32_t ebx
ebx.b = eax_6
void** edx = *ecx_3

if (edx != ecx_3)
    while (edx[2] != arg2)
        edx = *edx
        
        if (edx == ecx_3)
            break

*edx[1] = *edx
*(*edx + 4) = edx[1]
*(arg1 + 0x14) -= 1
sub_403160(edx, 1, 0xc)
(*(*arg2 + 4))(1)
LeaveCriticalSection(*(arg1 + 0x1c) + 4)
int32_t eax_12
eax_12.b = ebx.b
return eax_12
