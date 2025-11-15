// 函数: ?assemble_floating_point_value_from_big_integer@__crt_strtox@@YA?AW4SLD_STATUS@@ABUbig_integer@1@I_N1ABVfloating_point_value@1@@Z
// 地址: 0x70856e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_2c = edi
int32_t edx
edx.b = arg5[1].b == 0
int32_t var_44
uint32_t var_40
int32_t var_3c
bool var_38
bool var_34
int32_t* var_30

if (arg2 u> 0x40)
    uint32_t edi_2 = arg2 u>> 5
    int32_t eax_4 = arg2 & 0x1f
    int32_t i_2 = edi_2 - 2
    
    if (eax_4 != 0)
        char ebx_1 = 1
        int32_t var_8_4 = (i_2 << 5) + eax_4 + ((edx - 1) & 0x1d) + 0x17
        int32_t edx_7 = arg1[i_2 + 1]
        int32_t eax_7
        int32_t edx_8
        eax_7, edx_8 = __allshl(arg1[edi_2], 0, 0x40 - eax_4.b - 0x20)
        int32_t eax_11
        int32_t edx_9
        eax_11, edx_9 = __allshl(arg1[edi_2 + 1] & ((1 << eax_4.b) - 1), 0, 0x40 - eax_4.b)
        int32_t var_10_3 = eax_7 + eax_11
        uint32_t eax_15
        int32_t edx_10
        eax_15, edx_10 = __aullshr(not.d((1 << eax_4.b) - 1) & edx_7, 0, eax_4.b)
        uint32_t eax_17 = adc.d(adc.d(edx_8, edx_9, eax_7 + eax_11 u< eax_7), edx_10, 
            var_10_3 + eax_15 u< var_10_3)
        uint32_t var_14_3 = eax_17
        
        if (arg4 != 0 || (edx_7 & ((1 << eax_4.b) - 1)) != 0)
            ebx_1 = 0
        
        int32_t var_c_2
        var_c_2.b = ebx_1
        
        if (i_2 != 0)
            void* ecx_14 = &arg1[1]
            int32_t i
            
            do
                bool cond:4_1 = *ecx_14 == 0
                ecx_14 += 4
                eax_17.b = cond:4_1
                ebx_1 &= eax_17.b
                var_c_2.b = ebx_1
                i = i_2
                i_2 -= 1
            while (i != 1)
            eax_17 = var_14_3
        
        var_30 = arg5
        var_34 = var_c_2.b
        var_38 = arg3
        var_3c = var_8_4
        var_40 = eax_17
        var_44 = var_10_3 + eax_15
    else
        int32_t ecx_5 = (i_2 << 5) + ((edx - 1) & 0x1d) + 0x17
        int32_t eax_2 = eax_4 + arg1[i_2 + 1]
        int32_t var_18_1 = eax_2
        uint32_t var_10_1 = adc.d(arg1[edi_2], 0, eax_4 + arg1[i_2 + 1] u< eax_4)
        uint32_t edx_6
        edx_6.b = arg4 == 0
        bool var_14 = edx_6.b
        
        if (i_2 != 0)
            void* edi_4 = &arg1[1]
            int32_t i_1
            
            do
                bool cond:2_1 = *edi_4 == 0
                edi_4 += 4
                eax_2.b = cond:2_1
                edx_6.b &= eax_2.b
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            eax_2 = var_18_1
            var_14 = edx_6.b
        
        var_30 = arg5
        var_34 = var_14
        var_38 = arg3
        var_3c = ecx_5
        var_40 = var_10_1
        var_44 = eax_2
else
    int32_t esi
    
    if (*arg1 u<= 0)
        esi = 0
    else
        esi = arg1[1]
    
    int32_t ecx_1
    
    if (*arg1 u<= 1)
        ecx_1 = 0
    else
        ecx_1 = arg1[2]
    
    var_30 = arg5
    var_34 = arg4 == 0
    var_38 = arg3
    var_3c = ((edx - 1) & 0x1d) + 0x17
    var_40 = adc.d(ecx_1, 0, esi u< 0)
    var_44 = esi

return __crt_strtox::assemble_floating_point_value(var_44, var_40, var_3c, var_38, var_34, var_30)
