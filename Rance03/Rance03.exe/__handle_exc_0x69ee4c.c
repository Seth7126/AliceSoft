// 函数: __handle_exc
// 地址: 0x69ee4c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1
int32_t esi_1 = ebx & 0x1f
long double st0
int80_t x87_r0

if ((ebx.b & 8) != 0 && (arg3 & 1) != 0)
    __set_statfp(x87_r0, 1)
    esi_1 &= 0xfffffff7
else if ((ebx.b & 4) != 0 && (arg3 & 4) != 0)
    __set_statfp(x87_r0, 4)
    esi_1 &= 0xfffffffb
else if ((ebx.b & 1) != 0 && (arg3 & 8) != 0)
    __set_statfp(x87_r0, 8)
    int32_t eax_2 = arg3.d & 0xc00
    double* ecx_3
    
    if (eax_2 == 0)
        ecx_3 = arg2
        long double x87_r0_5 = float.t(0)
        long double temp0_1 = fconvert.t(*ecx_3)
        x87_r0_5 - temp0_1
        eax_2.w = (x87_r0_5 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_5, temp0_1) ? 1 : 0) << 0xa
            | (x87_r0_5 == temp0_1 ? 1 : 0) << 0xe | 0x800
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
        label_69ef23:
            *ecx_3 = fconvert.d(fneg(fconvert.t(data_74a428)))
        else
            *ecx_3 = fconvert.d(fconvert.t(data_74a428))
    else if (eax_2 == 0x400)
        ecx_3 = arg2
        long double x87_r0_4 = float.t(0)
        long double temp1_1 = fconvert.t(*ecx_3)
        x87_r0_4 - temp1_1
        eax_2.w = (x87_r0_4 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_4, temp1_1) ? 1 : 0) << 0xa
            | (x87_r0_4 == temp1_1 ? 1 : 0) << 0xe | 0x800
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            goto label_69ef23
        
        *ecx_3 = fconvert.d(fconvert.t(data_74a438))
    else if (eax_2 == 0x800)
        long double x87_r0_3 = float.t(0)
        long double temp2_1 = fconvert.t(*arg2)
        x87_r0_3 - temp2_1
        eax_2.w = (x87_r0_3 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_3, temp2_1) ? 1 : 0) << 0xa
            | (x87_r0_3 == temp2_1 ? 1 : 0) << 0xe | 0x800
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            *arg2 = fconvert.d(fconvert.t(data_74a428))
        else
            *arg2 = fconvert.d(fneg(fconvert.t(data_74a438)))
    else if (eax_2 == 0xc00)
        long double x87_r0_1 = float.t(0)
        long double temp3_1 = fconvert.t(*arg2)
        x87_r0_1 - temp3_1
        eax_2.w = (x87_r0_1 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r0_1 == temp3_1 ? 1 : 0) << 0xe | 0x800
        long double x87_r0_2 = fconvert.t(data_74a438)
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            *arg2 = fconvert.d(x87_r0_2)
        else
            *arg2 = fconvert.d(fneg(x87_r0_2))
    esi_1 &= 0xfffffffe
else if ((ebx.b & 2) != 0 && (arg3 & 0x10) != 0)
    int32_t edi_1 = 0
    
    if ((ebx.b & 0x10) != 0)
        edi_1 = 1
    
    long double x87_r7_1 = fconvert.t(*arg2)
    long double x87_r6_1 = float.t(0)
    x87_r6_1 - x87_r7_1
    int32_t eax
    eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (not(p_5))
        edi_1 = 1
    else
        double* var_24_1 = arg2
        double* var_28_1 = arg2
        var_28_1.q = fconvert.d(fconvert.t(*arg2))
        st0 = sub_69eb1a(esi_1, var_28_1, &arg1)
        int32_t eax_4 = arg1 - 0x600
        arg1 = eax_4
        long double x87_r6_2 = float.t(0)
        long double x87_r7_4
        
        if (eax_4 s>= 0xfffffbce)
            x87_r6_2 - st0
            int32_t edx_1 = 0
            eax_4.w = (x87_r6_2 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, st0) ? 1 : 0) << 0xa
                | (x87_r6_2 == st0 ? 1 : 0) << 0xe
            
            if ((eax_4:1.b & 0x41) == 0)
                edx_1 = 1
            
            double var_10_1
            var_10_1:6.w = (fconvert.d(st0):6.w & 0xf) | 0x10
            int32_t eax_8 = arg1
            
            if (eax_8 s< 0xfffffc03)
                int32_t i_1 = 0xfffffc03 - eax_8
                uint32_t eax_9 = var_10_1.d
                int32_t i
                
                do
                    if ((var_10_1.b & 1) != 0 && edi_1 == 0)
                        edi_1 += 1
                    
                    eax_9 u>>= 1
                    bool cond:2_1 = (var_10_1:4.b & 1) == 0
                    var_10_1.d = eax_9
                    
                    if (not(cond:2_1))
                        eax_9 |= 0x80000000
                        var_10_1.d = eax_9
                    
                    var_10_1:4.d u>>= 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            x87_r7_4 = fconvert.t(var_10_1)
            
            if (edx_1 != 0)
                x87_r7_4 = fneg(x87_r7_4)
        else
            x87_r7_4 = st0 * x87_r6_2
            edi_1 = 1
        
        *arg2 = fconvert.d(x87_r7_4)
    
    if (edi_1 != 0)
        __set_statfp(x87_r0, 0x10)
    
    esi_1 &= 0xfffffffd

if ((ebx.b & 0x10) != 0 && (arg3 & 0x20) != 0)
    __set_statfp(st0, 0x20)
    esi_1 &= 0xffffffef

int32_t result
result.b = esi_1 == 0
return result
