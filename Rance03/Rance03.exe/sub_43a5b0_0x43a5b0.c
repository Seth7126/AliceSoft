// 函数: sub_43a5b0
// 地址: 0x43a5b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0x30) - *(arg1 + 0x2c))
int32_t edx_3 = edx_2 s>> 4
int32_t eax_3

if ((edx_3 u>> 0x1f) + edx_3 == 1)
    if (sub_439dd0(arg1) == 5)
        int32_t var_c_1 = *(arg1 + 0x2c) + 8
        long double x87_r0
        return sub_43a090(arg1, x87_r0, arg2, arg3)
    
    eax_3 = sub_439dd0(arg1)
    
    if (eax_3 == 5)
        eax_3 = sub_439e70(arg1, *(arg1 + 0x2c) + 8, arg3)
    
    int32_t* xmm0_1
    
    if (*(arg1 + 8) != 0)
        xmm0_1 = 0xbf800000
    else
        xmm0_1 = 0x3f800000
    
    if (eax_3 == 2)
        void** eax_11 = *(arg1 + 0x2c) + 8
        
        if (eax_11[5] u>= 0x10)
            eax_11 = *eax_11
        
        int32_t* var_c_3 = arg2
        eax_3 = sub_69b31c(eax_11, 0x6dcf38)
        
        if (eax_3 == 1)
            eax_3.b = eax_3.b
            *arg2 = *arg2 f* xmm0_1
            return eax_3
    else if (eax_3 == 1)
        void** eax_13 = *(arg1 + 0x2c) + 8
        var_4 = nullptr
        
        if (eax_13[5] u>= 0x10)
            eax_13 = *eax_13
        
        int32_t* var_c_4 = &var_4
        
        if (sub_69b31c(eax_13, 0x6dcf3c) == 1)
            *arg2 = _mm_cvtepi32_ps(zx.o(var_4)) f* xmm0_1
            int32_t* eax_14
            eax_14.b = 1
            return eax_14

eax_3.b = 0
return eax_3
