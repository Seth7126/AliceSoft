// 函数: sub_43a470
// 地址: 0x43a470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0x30) - *(arg1 + 0x2c))
int32_t edx_3 = edx_2 s>> 4

if ((edx_3 u>> 0x1f) + edx_3 != 1)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

void** arg_8

if (sub_439dd0(arg1) == 5)
    int32_t __saved_ebx_1 = *(arg1 + 0x2c) + 8
    return sub_439f30(arg1, arg2, arg_8)

void* eax_8 = sub_439dd0(arg1)

if (eax_8 == 5)
    eax_8 = sub_439e70(arg1, *(arg1 + 0x2c) + 8, arg_8)

int32_t ebx
ebx.b = *(arg1 + 8) == 0

if (eax_8 == 1)
    void** eax_12 = *(arg1 + 0x2c) + 8
    
    if (eax_12[5] u>= 0x10)
        eax_12 = *eax_12
    
    int32_t* var_c_3 = arg2
    
    if (sub_69b31c(eax_12, 0x6dcf3c) == 1)
        *arg2 *= (ebx << 1) + 0xffffffff
        int32_t eax_14
        eax_14.b = 1
        return eax_14
else if (eax_8 == 2)
    void** eax_16 = *(arg1 + 0x2c) + 8
    arg_8 = nullptr
    
    if (eax_16[5] u>= 0x10)
        eax_16 = *eax_16
    
    void*** var_c_4 = &arg_8
    
    if (sub_69b31c(eax_16, 0x6dcf38) == 1)
        *arg2 = int.d(_mm_cvtepi32_ps(zx.o((ebx << 1) + 0xffffffff)) f* arg_8)
        int32_t* eax_17
        eax_17.b = 1
        return eax_17
else if (eax_8 == 3)
    int32_t ecx_5
    ecx_5.b = sub_40c250(*(arg1 + 0x2c) + 8, "true") != 0
    *arg2 = ecx_5 * ((ebx << 1) + 0xffffffff)
    int32_t* eax_19
    eax_19.b = 1
    return eax_19

eax_8.b = 0
return eax_8
