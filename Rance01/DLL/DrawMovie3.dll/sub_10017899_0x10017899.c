// 函数: sub_10017899
// 地址: 0x10017899
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

long double x87_r7 = float.t(0)
long double temp0 = fconvert.t(arg1)
x87_r7 - temp0
long double x87_r6 = fconvert.t(arg1)

if ((((x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
    x87_r6 = fneg(x87_r6)

if (arg3 == 0x7ff00000)
    if (arg2 != 0)
        goto label_10017947
    
    long double x87_r5_1 = float.t(1)
    x87_r5_1 - x87_r6
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r5_1 - x87_r6
        x87_r7 = x87_r5_1
        
        if ((((x87_r5_1 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r6 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
            x87_r7 = x87_r6
        
        *arg4 = fconvert.d(x87_r7)
    else
    label_100178d9:
        *arg4 = fconvert.d(fconvert.t(data_100218d8))
else if (arg3 != 0xfff00000 || arg2 != 0)
label_10017947:
    x87_r7 = x87_r6
    
    if (arg1:4.d != 0x7ff00000)
        if (arg1:4.d == 0xfff00000 && arg1.d == 0)
            int32_t var_c_1 = 0xfff00000
            x87_r7 = float.t(0)
            long double temp2_1 = fconvert.t(arg2.q)
            x87_r7 - temp2_1
            int32_t ecx_1 = sub_10017833(0x7ff00000, 0, 0xfff00000, -nanf)
            int32_t eax_3
            eax_3.w = (x87_r7 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7 == temp2_1 ? 1 : 0) << 0xe | 0x3800
            bool p_5 = unimplemented  {test ah, 0x5}
            
            if (p_5)
                long double temp4_1 = fconvert.t(arg2.q)
                x87_r7 - temp4_1
                eax_3.w = (x87_r7 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7 == temp4_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_3:1.b & 0x41) != 0)
                    x87_r7 = float.t(1)
                else if (ecx_1 == 1)
                    x87_r7 = fconvert.t(data_100218f8)
            else
                x87_r7 = fconvert.t(data_100218d8)
                
                if (ecx_1 == 1)
                    x87_r7 = fneg(x87_r7)
            
            *arg4 = fconvert.d(x87_r7)
    else if (arg1.d == 0)
        x87_r7 - fconvert.t(arg2.q)
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (not(p_4))
            goto label_100178d9
        
        long double temp3_1 = fconvert.t(arg2.q)
        x87_r7 - temp3_1
        
        if ((((x87_r7 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7 == temp3_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
            x87_r7 = float.t(1)
        
        *arg4 = fconvert.d(x87_r7)
else
    long double x87_r5_2 = float.t(1)
    x87_r5_2 - x87_r6
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        x87_r6 - x87_r7
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            *arg4 = fconvert.d(fconvert.t(data_100218e0))
        else
            *arg4 = fconvert.d(fconvert.t(data_100218d8))
    else
        *arg4 = fconvert.d(x87_r5_2)
