// 函数: sub_468ff0
// 地址: 0x468ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx_1 = arg4 - arg3

if (arg4 == arg3)
    return 

int32_t* ecx = arg1[1]

if (arg1[2] - ecx u>= ebx_1)
    _memcpy(ecx, arg3, ebx_1)
    int32_t edx_3 = arg1[1]
    int32_t eax_17 = edx_3 + ebx_1
    
    if (arg2 != edx_3 && edx_3 != eax_17)
        sub_469100(eax_17, edx_3, arg2, eax_17)
    
    arg1[1] += ebx_1
    return 

int32_t edx = *arg1

if (edx - ecx - 1 u< ebx_1)
    sub_69a551("vector<T> too long")
    noreturn

uint32_t eax_6 = sub_403600(arg1, ecx - edx + ebx_1)
int32_t* ebp_1 = nullptr

if (eax_6 != 0)
    if (eax_6 u<= 0xffffffff)
        ebp_1 = sub_69adc6(eax_6)
    
    if (eax_6 u> 0xffffffff || ebp_1 == 0)
        sub_69a4fc()
        noreturn

int32_t* eax_8 = *arg1
void* esi_2 = arg2 - eax_8
_memcpy(_memcpy(_memcpy(ebp_1, eax_8, esi_2) + esi_2, arg3, ebx_1) + ebx_1, arg2, arg1[1] - arg2)
int32_t ecx_5 = *arg1
void* ebx_2 = ebx_1 + arg1[1] - ecx_5

if (ecx_5 != 0)
    j__free(ecx_5)

*arg1 = ebp_1
arg1[2] = eax_6 + ebp_1
arg1[1] = ebx_2 + ebp_1
