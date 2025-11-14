// 函数: sub_54a850
// 地址: 0x54a850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    void* ebx_1 = *i
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x6bca1af3, *(ebx_1 + 0x2c) - *(ebx_1 + 0x28))
    int32_t edx_2 = edx_1 s>> 5
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        void** ecx_2 = &var_4
        var_4 = ebx_1
        void** eax = *(arg2 + 8)
        
        if (&var_4 u< eax)
            ecx_2 = *(arg2 + 4)
        
        if (&var_4 u>= eax || ecx_2 u> &var_4)
            if (eax == *(arg2 + 0xc))
                void** var_18_2 = ecx_2
                sub_412f20(arg2 + 4)
            
            eax = *(arg2 + 8)
            
            if (eax != 0)
                *eax = ebx_1
        else
            if (eax == *(arg2 + 0xc))
                void** var_18_1 = ecx_2
                sub_412f20(arg2 + 4)
            
            void*** ecx_4 = *(arg2 + 8)
            
            if (ecx_4 != 0)
                *ecx_4 = *(*(arg2 + 4) + ((&var_4 - ecx_2) s>> 2 << 2))
        
        *(arg2 + 8) += 4
