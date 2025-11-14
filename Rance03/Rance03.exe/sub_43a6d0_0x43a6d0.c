// 函数: sub_43a6d0
// 地址: 0x43a6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0x30) - *(arg1 + 0x2c))
int32_t edx_3 = edx_2 s>> 4
int32_t eax_3

if ((edx_3 u>> 0x1f) + edx_3 == 1)
    void** arg_8
    
    if (sub_439dd0(arg1) == 5)
        int32_t var_8_1 = *(arg1 + 0x2c) + 8
        long double x87_r0
        return sub_43a1b0(x87_r0, arg2, arg_8)
    
    eax_3 = sub_439dd0(arg1)
    
    if (eax_3 == 5)
        eax_3 = sub_439e70(arg1, *(arg1 + 0x2c) + 8, arg_8)
    
    if (eax_3 == 3)
        *arg2 = sub_40c250(*(arg1 + 0x2c) + 8, "true")
        return 1
    
    if (eax_3 == 1)
        void** eax_12 = *(arg1 + 0x2c) + 8
        arg_8 = nullptr
        
        if (eax_12[5] u>= 0x10)
            eax_12 = *eax_12
        
        void*** var_8_3 = &arg_8
        
        if (sub_69b31c(eax_12, 0x6dcf3c) == 1)
            *arg2 = arg_8 != 0
            char* eax_13
            eax_13.b = 1
            return eax_13
    else if (eax_3 == 2)
        void* eax_14 = *(arg1 + 0x2c)
        arg_8 = nullptr
        
        if (sub_4691d0(eax_14 + 8).b != 0)
            void** xmm0 = arg_8
            xmm0 f- 0
            eax_3:1.b = (xmm0 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2
                | (xmm0 f< 0f ? 1 : 0)
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                *arg2 = 0
                char* eax_16
                eax_16.b = 1
                return eax_16
            
            *arg2 = 1
            char* eax_15
            eax_15.b = 1
            return eax_15

eax_3.b = 0
return eax_3
