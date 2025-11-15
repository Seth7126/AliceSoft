// 函数: ?assemble_floating_point_value@__crt_strtox@@YA?AW4SLD_STATUS@@_KH_N1ABVfloating_point_value@1@@Z
// 地址: 0x708222
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg2
bool ebx = false
int32_t edi
int32_t var_34 = edi
int32_t edi_1 = arg1
bool cond:0 = esi != 0

if (esi u<= 0)
    cond:0 = edi_1 != 0xffffffff

int32_t ecx

if (esi u> 0 || edi_1 u> 0xffffffff)
    int32_t eflags_1
    int32_t eax_1
    eax_1, eflags_1 = _bit_scan_reverse(esi)
    int32_t var_28_1 = 0
    int32_t ecx_1 = eax_1 + 1
    
    if (not(cond:0))
        ecx_1 = 0
    
    ecx = ecx_1 + 0x20
else
    int32_t eflags
    int32_t eax
    eax, eflags = _bit_scan_reverse(edi_1)
    int32_t var_28 = 0
    
    if (edi_1 == 0xffffffff)
        ecx = 0
    else
        ecx = eax + 1

int32_t* eax_2
eax_2.b = arg6[1].b
char var_5 = eax_2.b
int32_t edx
edx.b = eax_2.b == 0
int32_t edx_4 = ((edx - 1) & 0x1d) + 0x18 - ecx
int32_t ecx_3 = arg3 - edx_4
int32_t var_c = ecx_3
int32_t eax_3
eax_3.b = var_5 == 0
int32_t* var_38

if (ecx_3 s<= ((eax_3 - 1) & 0x380) + 0x7f)
    int32_t eax_7
    eax_7.b = var_5 == 0
    char ecx_14
    int32_t ebx_4
    
    if (ecx_3 s< ((eax_7 - 1) & 0xfffffc80) - 0x7e)
        int32_t eax_14 = ((eax_3 - 1) & 0x380) + 0x7e + ecx_3 + edx_4
        var_c = neg.d(((eax_3 - 1) & 0x380) + 0x7f)
        
        if (eax_14 s>= 0)
            ecx_14 = eax_14.b
        label_70851d:
            int32_t eax_59
            uint32_t edx_25
            eax_59, edx_25 = __allshl(edi_1, esi, ecx_14)
            esi = edx_25
            edi_1 = eax_59
        label_708526:
            ebx_4 = var_c
        label_70852c:
            int32_t eax_60
            int32_t edx_26
            eax_60, edx_26 = __crt_strtox::floating_point_value::denormal_mantissa_mask(arg6)
            int32_t edi_4 = edi_1 & eax_60
            int32_t* esi_3 = esi & edx_26
            
            if (arg6[1].b != 0)
                return __crt_strtox::assemble_floating_point_value_t<double>(arg4, ebx_4, edi_4, 
                    esi_3, __crt_strtox::floating_point_value::as_double(arg6))
            
            int32_t var_38_4 = __crt_strtox::floating_point_value::as_float(arg6)
            return __crt_strtox::assemble_floating_point_value_t<float>(arg4, ebx_4, edi_4, esi_3)
        
        int32_t eax_15 = neg.d(eax_14)
        char var_14_1 = eax_15.b
        
        if (eax_15 u< 0x40)
            int32_t eax_16
            int32_t edx_5
            eax_16, edx_5 = __allshl(1, 0, eax_15.b - 1)
            int32_t eax_20
            int32_t edx_6
            eax_20, edx_6 = __allshl(1, 0, var_14_1)
            char var_7_1 = 1
            
            if (((eax_20 & edi_1) | (edx_6 & esi)) == 0)
                var_7_1 = 0
            
            int32_t ecx_10
            ecx_10.b = 1
            
            if (((eax_16 & edi_1) | (edx_5 & esi)) == 0)
                ecx_10.b = 0
            
            int32_t eax_25
            
            if (arg5 != 0)
                eax_25.b = 0
            
            if (arg5 == 0
                    || (((eax_16 - 1) & edi_1) | (adc.d(edx_5, 0xffffffff, eax_16 u>= 1) & esi))
                    != 0)
                eax_25.b = 1
            
            if (ecx_10.b != 0 || eax_25.b != 0)
                int32_t eax_28 = _fegetround()
                
                if (eax_28 == 0)
                    if (ecx_10.b != 0 && (eax_25.b != 0 || var_7_1 != 0))
                        ebx = true
                else if (eax_28 == 0x100)
                    ebx = arg4 == 0
                else if (eax_28 == 0x200)
                    ebx = arg4
            
            uint32_t eax_30
            int32_t edx_11
            eax_30, edx_11 = __aullshr(edi_1, esi, var_14_1)
            int32_t eax_32
            int32_t edx_12
            edx_12:eax_32 = sx.q(zx.d(ebx))
            edi_1 = eax_30 + eax_32
            esi = adc.d(edx_11, edx_12, eax_30 + eax_32 u< eax_30)
        
        if (eax_15 u>= 0x40 || (edi_1 | esi) == 0)
            __crt_strtox::assemble_floating_point_zero(arg4, arg6)
            return 2
        
        int32_t eax_35
        int32_t edx_13
        eax_35, edx_13 = __crt_strtox::floating_point_value::denormal_mantissa_mask(arg6)
        
        if (esi u< edx_13 || (esi u<= edx_13 && edi_1 u<= eax_35))
            goto label_708526
        
        ebx_4 = arg3 - eax_14 - edx_4 - 1
        goto label_70852c
    
    if (edx_4 s>= 0)
        if (edx_4 s<= 0)
            goto label_708526
        
        ecx_14 = edx_4.b
        goto label_70851d
    
    int32_t edx_14 = neg.d(edx_4)
    char var_10_1 = edx_14.b
    
    if (edx_14 u< 0x40)
        int32_t eax_36
        int32_t edx_15
        eax_36, edx_15 = __allshl(1, 0, edx_14.b - 1)
        int32_t eax_40
        int32_t edx_16
        eax_40, edx_16 = __allshl(1, 0, var_10_1)
        char var_5_2 = 1
        
        if (((eax_40 & edi_1) | (edx_16 & esi)) == 0)
            var_5_2 = 0
        
        int32_t ecx_18
        ecx_18.b = 1
        
        if (((eax_36 & edi_1) | (edx_15 & esi)) == 0)
            ecx_18.b = 0
        
        int32_t eax_45
        
        if (arg5 != 0)
            eax_45.b = 0
        
        if (arg5 == 0
                || (((eax_36 - 1) & edi_1) | (adc.d(edx_15, 0xffffffff, eax_36 u>= 1) & esi)) != 0)
            eax_45.b = 1
        
        if (ecx_18.b != 0 || eax_45.b != 0)
            int32_t eax_48 = _fegetround()
            
            if (eax_48 == 0)
                if (ecx_18.b != 0 && (eax_45.b != 0 || var_5_2 != 0))
                    ebx = true
            else if (eax_48 == 0x100)
                ebx = arg4 == 0
            else if (eax_48 == 0x200)
                ebx = arg4
        
        uint32_t eax_50
        int32_t edx_21
        eax_50, edx_21 = __aullshr(edi_1, esi, var_10_1)
        int32_t eax_52
        int32_t edx_22
        edx_22:eax_52 = sx.q(zx.d(ebx))
        edi_1 = eax_50 + eax_52
        esi = adc.d(edx_21, edx_22, eax_50 + eax_52 u< eax_50)
    else
        edi_1 = 0
        esi = 0
    
    int32_t eax_53
    int32_t edx_23
    eax_53, edx_23 = __crt_strtox::floating_point_value::normal_mantissa_mask(arg6)
    
    if (esi u< edx_23 || (esi u<= edx_23 && edi_1 u<= eax_53))
        goto label_708526
    
    edi_1 = edi_1 u>> 1 | esi << 0x1f
    esi u>>= 1
    ebx_4 = var_c + 1
    int32_t eax_54
    eax_54.b = arg6[1].b == 0
    
    if (ebx_4 s<= ((eax_54 - 1) & 0x380) + 0x7f)
        goto label_70852c
    
    var_38 = arg6
else
    var_38 = arg6

__crt_strtox::assemble_floating_point_infinity(arg4, var_38)
return 3
