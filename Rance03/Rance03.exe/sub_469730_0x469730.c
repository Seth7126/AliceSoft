// 函数: sub_469730
// 地址: 0x469730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0

if (arg2 == 0)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x22) = 0
    return 

int32_t var_10 = 0
int32_t var_4 = 0
uint32_t eax
int32_t ecx
int32_t edx
int32_t ebx
eax, ebx, ecx, edx = __cpuid(0, 0)
int32_t var_c = ebx
int32_t var_8 = ecx
int32_t var_4_1 = edx

if (eax != 0)
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_1
    int32_t ebx_1
    eax_1, ebx_1, ecx_1, edx_1 = __cpuid(1, 0)
    int32_t var_10_2 = eax_1
    int32_t var_c_1 = ebx_1
    int32_t var_8_1 = ecx_1
    eax.b = (edx_1 u>> 0x17).b & 1
else
    eax.b = 0

*(arg1 + 0x20) = eax.b
uint8_t eax_3

if (eax.b != 0)
    eax_3 = sub_5ff560()

char eax_4

if (eax.b == 0 || eax_3 == 0)
    eax_4 = 0
else
    eax_4 = 1

*(arg1 + 0x21) = eax_4
int32_t var_10_3 = 0
int32_t var_4_3 = 0
int32_t eax_5
int32_t ecx_2
int32_t edx_2
int32_t ebx_2
eax_5, ebx_2, ecx_2, edx_2 = __cpuid(0, 0)
int32_t var_c_2 = ebx_2
int32_t var_8_2 = ecx_2
int32_t var_4_4 = edx_2

if (eax_5 != 0)
    int32_t eax_6
    int32_t ecx_3
    int32_t edx_3
    int32_t ebx_3
    eax_6, ebx_3, ecx_3, edx_3 = __cpuid(1, 0)
    int32_t var_10_5 = eax_6
    int32_t var_c_3 = ebx_3
    int32_t var_8_3 = ecx_3
    
    if ((edx_3 & 0x2000000) != 0 && sub_5ff5c0() != 0)
        *(arg1 + 0x22) = 1
        return 

*(arg1 + 0x22) = 0
