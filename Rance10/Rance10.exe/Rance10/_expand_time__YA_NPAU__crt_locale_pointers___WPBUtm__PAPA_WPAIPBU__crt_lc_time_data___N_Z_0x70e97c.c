// 函数: ?expand_time@@YA_NPAU__crt_locale_pointers@@_WPBUtm@@PAPA_WPAIPBU__crt_lc_time_data@@_N@Z
// 地址: 0x70e97c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t var_c = arg3
int16_t edx = arg5
uint32_t eax = zx.d(edx)
int32_t edi
int32_t var_18 = edi
int32_t var_3c_1
int16_t* var_38_4
int32_t* var_34_6
int32_t* var_30_5
int32_t var_2c_1
void* var_2c_7
int32_t var_2c_15
int32_t var_28_1
int32_t var_28_3
int16_t* var_28_10
int32_t* var_24_1
wchar32 const* const var_24_3
int16_t* var_24_5
int32_t* var_24_9
int32_t* var_20_1
int32_t* var_20_6
int32_t* var_20_9
int32_t* var_20_14
int16_t var_1c_1
int32_t* var_1c_5
int32_t* var_1c_8
void* var_1c_15
int16_t* result
int32_t eax_7
int16_t* eax_30
int32_t ecx_5
int32_t edx_2

if (eax s<= 0x5a)
    if (eax == 0x5a)
        ___tzset()
        var_c = 0
        int32_t eax_98 = sub_715b7d()
        void** ebx_4 = arg7
        int32_t edx_12
        edx_12.b = *(arg6 + 0x20) != 0
        int32_t eax_100 =
            __mbstowcs_s_l(&var_c, *ebx_4, *arg8, *(eax_98 + (edx_12 << 2)), 0xffffffff, arg4)
        
        if (eax_100 != 0 && (eax_100 == 0x16 || eax_100 == 0x22))
            int32_t var_2c_26
            __builtin_memset(&var_2c_26, 0, 0x14)
            __invoke_watson()
            noreturn
        
        if (eax_100 != 0x50)
            int32_t ecx_18 = var_c
            *arg8 += 1 - ecx_18
            *ebx_4 += (ecx_18 << 1) + 0xfffffffe
        else
            *ebx_4 += *arg8 * 2
            *arg8 = 0
        
    labelid_2:
        result.b = 1
    else
        bool cond:8_1
        
        if (eax s> 0x4d)
            if (eax - 0x52 u> 7)
            labelid_7:
                result.b = 0
            else
                switch (eax)
                    case 0x52
                        if (expand_time(arg4, 0x48, arg6, arg7, arg8, arg9, arg10.d) != 0)
                            var_1c_5 = arg8
                            var_20_6 = arg7
                            var_24_3 = &(*U" \n:\t+%")[2]
                            store_string(&(*U" \n:\t+%")[2], var_20_6, var_1c_5)
                            var_28_3 = arg10.d
                            var_2c_7 = arg9
                            var_30_5 = arg8
                            var_34_6 = arg7
                            var_38_4 = arg6
                            var_3c_1 = 0x4d
                        label_70ebcb:
                            result = expand_time(arg4, var_3c_1, var_38_4, var_34_6, var_30_5, 
                                var_2c_7, var_28_3, var_24_3, var_20_6, var_1c_5)
                            goto label_70ebd3
                        
                    label_70eb30:
                        *__errno() = 0x16
                    labelid_7:
                        result.b = 0
                    case 0x53
                        ecx_5 = *arg6
                        
                        if (ecx_5 s< 0)
                            goto label_70ec80
                        
                        cond:8_1 = ecx_5 s> 0x3c
                        goto label_70f12a
                    case 0x54
                        int32_t* esi_5 = arg8
                        
                        if (expand_time(arg4, 0x48, arg6, arg7, esi_5, arg9, arg10.d) == 0)
                            goto label_70eb30
                        
                        store_string(&(*U" \n:\t+%")[2], arg7, esi_5)
                        
                        if (expand_time(arg4, 0x4d, arg6, arg7, esi_5, arg9, arg10.d) == 0)
                            goto label_70eb30
                        
                        var_1c_5 = esi_5
                        var_20_6 = arg7
                        var_24_3 = &(*U" \n:\t+%")[2]
                        store_string(&(*U" \n:\t+%")[2], var_20_6, var_1c_5)
                        var_28_3 = arg10.d
                        var_2c_7 = arg9
                        var_30_5 = esi_5
                        var_34_6 = arg7
                        var_38_4 = arg6
                        var_3c_1 = 0x53
                        goto label_70ebcb
                    case 0x55, 0x57
                        int32_t ecx_15 = *(arg6 + 0x18)
                        
                        if (ecx_15 s< 0 || ecx_15 s> 6)
                            goto label_70ec80
                        
                        if (edx == 0x57)
                            if (ecx_15 != 0)
                                ecx_15 -= 1
                            else
                                ecx_15 = 6
                        
                        int32_t eax_91 = *(arg6 + 0x1c)
                        
                        if (eax_91 s< 0 || eax_91 s> 0x16d)
                            goto label_70ec80
                        
                        int32_t esi_6 = 0
                        
                        if (eax_91 s>= ecx_15)
                            int32_t eax_92
                            int32_t edx_10
                            edx_10:eax_92 = sx.q(eax_91)
                            esi_6 = divs.dp.d(edx_10:eax_92, 7)
                            
                            if (mods.dp.d(edx_10:eax_92, 7) s>= ecx_15)
                                esi_6 += 1
                        
                        ecx_15.b = arg10 != 0
                        ecx_15.b -= 1
                        ecx_15.b &= 0x30
                        eax_91.w = sx.w(ecx_15.b)
                        var_1c_1 = eax_91.w
                        var_20_1 = arg8
                        var_24_1 = arg7
                        var_28_1 = 2
                        var_2c_1 = esi_6
                        goto label_70ea05
                    case 0x56
                        result.b = arg10 != 0
                        result.b -= 1
                        result.b &= 0x30
                        result.w = sx.w(result.b)
                        var_1c_1 = result.w
                        var_20_1 = arg8
                        var_24_1 = arg7
                        var_28_1 = 2
                        eax_7 = compute_iso_week(*(arg6 + 0x14), *(arg6 + 0x18), *(arg6 + 0x1c))
                    label_70ea04:
                        var_2c_1 = eax_7
                    label_70ea05:
                        store_number(var_2c_1, var_28_1, var_24_1, var_20_1, var_1c_1)
                    labelid_2:
                        result.b = 1
                    case 0x58
                        var_1c_15 = arg9
                        var_20_14 = arg8
                        var_24_9 = arg7
                        var_28_10 = arg6
                        var_2c_15 = 2
                    label_70ef4e:
                        result = store_winword(arg4, var_2c_15, var_28_10, var_24_9, var_20_14, 
                            var_1c_15)
                    label_70ebd3:
                        
                        if (result.b == 0)
                            goto label_70eb30
                        
                    label_70f445:
                        result.b = 1
                    case 0x59
                        int32_t ecx_16 = *(arg6 + 0x14)
                        
                        if (ecx_16 s< 0xfffff894 || ecx_16 s> 0x1fa3)
                            goto label_70ec80
                        
                        int16_t* eax_96
                        eax_96.b = arg10 != 0
                        eax_96.b -= 1
                        eax_96.b &= 0x30
                        eax_96.w = sx.w(eax_96.b)
                        var_1c_1 = eax_96.w
                        var_20_1 = arg8
                        eax_7 = ecx_16 + 0x76c
                        var_24_1 = arg7
                        var_28_1 = 4
                        goto label_70ea04
        else if (eax == 0x4d)
            ecx_5 = *(arg6 + 4)
            
            if (ecx_5 s>= 0)
                cond:8_1 = ecx_5 s> 0x3b
            label_70f12a:
                
                if (cond:8_1)
                    goto label_70ec80
                
                eax_30.b = arg10 != 0
                eax_30.b -= 1
                eax_30.b &= 0x30
            label_70ecad:
                eax_30.w = sx.w(eax_30.b)
                var_1c_1 = eax_30.w
                var_20_1 = arg8
                var_24_1 = arg7
                var_28_1 = 2
            label_70ecbb:
                var_2c_1 = ecx_5
                goto label_70ea05
            
        label_70ec80:
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        labelid_7:
            result.b = 0
        else if (eax s> 0x44)
            if (eax == 0x46)
                int32_t* esi_4 = arg8
                
                if (expand_time(arg4, 0x59, arg6, arg7, esi_4, arg9, arg10.d) == 0)
                    goto label_70eb30
                
                store_string(&data_7503d8, arg7, esi_4)
                
                if (expand_time(arg4, 0x6d, arg6, arg7, esi_4, arg9, arg10.d) == 0)
                    goto label_70eb30
                
                var_1c_5 = esi_4
                var_20_6 = arg7
                var_24_3 = &data_7503d8
                store_string(&data_7503d8, var_20_6, var_1c_5)
                var_28_3 = arg10.d
                var_2c_7 = arg9
                var_30_5 = esi_4
                var_34_6 = arg7
                var_38_4 = arg6
                var_3c_1 = 0x64
                goto label_70ebcb
            
            if (eax == 0x47)
                if (*(arg6 + 0x14) s< 0xfffff894 || *(arg6 + 0x14) s> 0x1fa3)
                    goto label_70ec80
                
                var_1c_1 = 0x30
                var_20_1 = arg8
                var_24_1 = arg7
                var_28_1 = 4
                eax_7 = compute_iso_year(*(arg6 + 0x14), *(arg6 + 0x18), *(arg6 + 0x1c)) + 0x76c
                goto label_70ea04
            
            if (eax == 0x48)
                ecx_5 = *(arg6 + 8)
                
                if (ecx_5 s< 0)
                    goto label_70ec80
                
                cond:8_1 = ecx_5 s> 0x17
                goto label_70f12a
            
            if (eax == 0x49)
                int32_t eax_79 = *(arg6 + 8)
                
                if (eax_79 s< 0 || eax_79 s> 0x17)
                    goto label_70ec80
                
                edx_2 = mods.dp.d(sx.q(eax_79), 0xc)
                
                if (edx_2 == 0)
                    edx_2 = 0xc
                
                int16_t eax_81
                eax_81.b = arg10 != 0
                eax_81.b -= 1
                eax_81.b &= 0x30
                var_1c_1 = sx.w(eax_81.b)
                var_20_1 = arg8
                var_24_1 = arg7
                var_28_1 = 2
            label_70ea8a:
                var_2c_1 = edx_2
                goto label_70ea05
            
        label_70ec8b:
            result.b = 0
        else
            if (eax == 0x44)
                int32_t* esi_3 = arg8
                
                if (expand_time(arg4, 0x6d, arg6, arg7, esi_3, arg9, arg10.d) == 0)
                    goto label_70eb30
                
                store_string(&data_754194, arg7, esi_3)
                
                if (expand_time(arg4, 0x64, arg6, arg7, esi_3, arg9, arg10.d) == 0)
                    goto label_70eb30
                
                var_1c_5 = esi_3
                var_20_6 = arg7
                var_24_3 = &data_754194
                store_string(&data_754194, var_20_6, var_1c_5)
                var_28_3 = arg10.d
                var_2c_7 = arg9
                var_30_5 = esi_3
                var_34_6 = arg7
                var_38_4 = arg6
                var_3c_1 = 0x79
                goto label_70ebcb
            
            if (eax == 0x25)
                var_1c_8 = arg8
                var_20_9 = arg7
                var_24_5 = &(*U" \n:\t+%")[5]
            label_70ec4d:
                store_string(var_24_5, var_20_9, var_1c_8)
            label_70f445_1:
                result.b = 1
            else
                if (eax == 0x41)
                    int32_t ecx_14 = *(arg6 + 0x18)
                    
                    if (ecx_14 s< 0 || ecx_14 s> 6)
                        goto label_70ec80
                    
                    var_1c_8 = arg8
                    var_20_9 = arg7
                    var_24_5 = *(arg9 + (ecx_14 << 2) + 0xd0)
                    goto label_70ec4d
                
                if (eax == 0x42)
                    int32_t ecx_13 = *(arg6 + 0x10)
                    
                    if (ecx_13 s< 0 || ecx_13 s> 0xb)
                        goto label_70ec80
                    
                    var_1c_8 = arg8
                    var_20_9 = arg7
                    var_24_5 = *(arg9 + (ecx_13 << 2) + 0x11c)
                    goto label_70ec4d
                
                if (eax == 0x43)
                    int32_t ecx_12 = *(arg6 + 0x14)
                    
                    if (ecx_12 s< 0xfffff894 || ecx_12 s> 0x1fa3)
                        goto label_70ec80
                    
                    int16_t* eax_65
                    eax_65.b = arg10 != 0
                    eax_65.b -= 1
                    eax_65.b &= 0x30
                    eax_65.w = sx.w(eax_65.b)
                    var_1c_1 = eax_65.w
                    var_20_1 = arg8
                    var_24_1 = arg7
                    var_28_1 = 2
                    eax_7 = divs.dp.d(sx.q(ecx_12 + 0x76c), 0x64)
                    goto label_70ea04
                
            label_70ec8b_1:
                result.b = 0
    
    return result

while (true)
    int32_t eax_12
    
    if (eax s> 0x6e)
        if (eax s> 0x77)
            if (eax == 0x78)
                var_1c_15 = arg9
                var_20_14 = arg8
                var_24_9 = arg7
                int32_t eax_61
                eax_61.b = arg10 != 0
                var_28_10 = arg6
                var_2c_15 = eax_61
                goto label_70ef4e
            
            if (eax == 0x79)
                int32_t ecx_11 = *(arg6 + 0x14)
                
                if (ecx_11 s< 0xfffff894)
                    goto label_70ec80
                
                if (ecx_11 s> 0x1fa3)
                    goto label_70ec80
                
                int16_t* eax_59
                eax_59.b = arg10 != 0
                eax_59.b -= 1
                eax_59.b &= 0x30
                eax_59.w = sx.w(eax_59.b)
                var_1c_1 = eax_59.w
                var_20_1 = arg8
                eax_12 = ecx_11 + 0x76c
                var_24_1 = arg7
                var_28_1 = 2
                goto label_70ea86
            
            if (eax != 0x7a)
                goto label_70ec8b_1
            
            ___tzset()
            var_8 = 0
            
            if (__get_daylight(&var_8) != 0)
                goto label_70ec80
            
            int32_t ecx_9
            
            if (*(arg6 + 0x20) == 0)
                ecx_9 = var_8
            else
                var_c = 0
                
                if (__get_stream_buffer_pointers(&var_c) != 0)
                    goto label_70ec80
                
                ecx_9 = var_8 + var_c
                var_8 = ecx_9
            
            int32_t eax_52
            int32_t edx_3
            edx_3:eax_52 = sx.q(ecx_9)
            int32_t eax_57
            int32_t edx_5
            edx_5:eax_57 = sx.q(divs.dp.d(sx.q((eax_52 ^ edx_3) - edx_3), 0x3c))
            int16_t* ecx_10 = &(*U" \n:\t+%")[4]
            
            if (ecx_9 s>= 0)
                ecx_10 = &data_7503d8
            
            store_string(ecx_10, arg7, arg8)
            store_number(divs.dp.d(edx_5:eax_57, 0x3c), 2, arg7, arg8, 0x30)
            store_number(mods.dp.d(edx_5:eax_57, 0x3c), 2, arg7, arg8, 0x30)
            goto label_70f445_1
        
        if (eax != 0x77)
            if (eax == 0x70)
                int32_t eax_43 = *(arg6 + 8)
                
                if (eax_43 s< 0)
                    goto label_70ec80
                
                if (eax_43 s> 0x17)
                    goto label_70ec80
                
                int16_t* eax_45
                
                if (eax_43 s> 0xb)
                    eax_45 = *(arg9 + 0x150)
                else
                    eax_45 = *(arg9 + 0x14c)
                
                var_1c_8 = arg8
                var_20_9 = arg7
                var_24_5 = eax_45
                goto label_70ec4d
            
            if (eax == 0x72)
                int32_t var_1c_9 = arg10.d
                
                if (arg9 != &data_7563b0)
                    result = expand_time(arg4, 0x58, arg6, arg7, arg8, arg9, var_1c_9)
                    goto label_70ebd3
                
                int32_t* edi_2 = arg8
                
                if (expand_time(arg4, 0x49, arg6, arg7, edi_2, arg9, var_1c_9) == 0)
                    goto label_70eb30
                
                store_string(&(*U" \n:\t+%")[2], arg7, edi_2)
                
                if (expand_time(arg4, 0x4d, arg6, arg7, edi_2, arg9, arg10.d) == 0)
                    goto label_70eb30
                
                store_string(&(*U" \n:\t+%")[2], arg7, edi_2)
                
                if (expand_time(arg4, 0x53, arg6, arg7, edi_2, arg9, arg10.d) == 0)
                    goto label_70eb30
                
                var_1c_5 = edi_2
                var_20_6 = arg7
                var_24_3 = U" \n:\t+%"
                store_string(U" \n:\t+%", var_20_6, var_1c_5)
                var_28_3 = arg10.d
                var_2c_7 = arg9
                var_30_5 = edi_2
                var_34_6 = arg7
                var_38_4 = arg6
                var_3c_1 = 0x70
                goto label_70ebcb
            
            if (eax == 0x74)
                var_1c_8 = arg8
                var_20_9 = arg7
                var_24_5 = &(*U" \n:\t+%")[3]
                goto label_70ec4d
            
            if (eax != 0x75)
                goto label_70ec8b_1
        
        ecx_5 = *(arg6 + 0x18)
        
        if (ecx_5 s< 0)
            goto label_70ec80
        
        if (ecx_5 s> 6)
            goto label_70ec80
        
        if (ecx_5 == 0 && edx == 0x75)
            ecx_5 = 7
        
        int16_t* eax_37
        eax_37.b = arg10 != 0
        eax_37.b -= 1
        eax_37.b &= 0x30
        eax_37.w = sx.w(eax_37.b)
        var_1c_1 = eax_37.w
        var_20_1 = arg8
        var_24_1 = arg7
        var_28_1 = 1
        goto label_70ecbb
    
    if (eax == 0x6e)
        var_1c_8 = arg8
        var_20_9 = arg7
        var_24_5 = &(*U" \n:\t+%")[1]
        goto label_70ec4d
    
    if (eax s<= 0x65)
        if (eax == 0x65)
            ecx_5 = *(arg6 + 0xc)
            
            if (ecx_5 s< 1)
                goto label_70ec80
            
            if (ecx_5 s> 0x1f)
                goto label_70ec80
            
            eax_30.b = arg10 != 0
            eax_30.b -= 1
            eax_30.b &= 0x20
            goto label_70ecad
        
        if (eax == 0x61)
            int32_t ecx_4 = *(arg6 + 0x18)
            
            if (ecx_4 s< 0)
                goto label_70ec80
            
            if (ecx_4 s> 6)
                goto label_70ec80
            
            var_1c_8 = arg8
            var_20_9 = arg7
            var_24_5 = *(arg9 + (ecx_4 << 2) + 0xb4)
            goto label_70ec4d
        
        if (eax == 0x62)
            int32_t ecx_3 = *(arg6 + 0x10)
            
            if (ecx_3 s< 0)
                goto label_70ec80
            
            if (ecx_3 s> 0xb)
                goto label_70ec80
            
            var_1c_8 = arg8
            var_20_9 = arg7
            var_24_5 = *(arg9 + (ecx_3 << 2) + 0xec)
            goto label_70ec4d
        
        if (eax != 0x63)
            if (eax != 0x64)
                goto label_70ec8b_1
            
            if (*(arg6 + 0xc) s< 1)
                goto label_70ec80
            
            if (*(arg6 + 0xc) s> 0x1f)
                goto label_70ec80
            
            arg3.b = arg10 != 0
            arg3.b -= 1
            arg3.b &= 0x30
            arg3.w = sx.w(arg3.b)
            var_1c_1 = arg3.w
            var_20_1 = arg8
            var_24_1 = arg7
            var_28_1 = 2
            var_2c_1 = *(arg6 + 0xc)
            goto label_70ea05
        
        if (arg9 != &data_7563b0 || arg10 != 0)
            int32_t eax_23
            eax_23.b = arg10 != 0
            
            if (store_winword(arg4, eax_23, arg6, arg7, arg8, arg9) == 0)
                goto label_70eb30
            
            store_string(U" \n:\t+%", arg7, arg8)
            result = store_winword(arg4, 2, arg6, arg7, arg8, arg9)
            goto label_70ebd3
        
        int32_t* edi_1 = arg8
        
        if (expand_time(arg4, 0x61, arg6, arg7, edi_1, arg9, 0) == 0)
            goto label_70eb30
        
        store_string(U" \n:\t+%", arg7, edi_1)
        
        if (expand_time(arg4, 0x62, arg6, arg7, edi_1, arg9, 0) == 0)
            goto label_70eb30
        
        store_string(U" \n:\t+%", arg7, edi_1)
        
        if (expand_time(arg4, 0x65, arg6, arg7, edi_1, arg9, 0) == 0)
            goto label_70eb30
        
        store_string(U" \n:\t+%", arg7, edi_1)
        
        if (expand_time(arg4, 0x54, arg6, arg7, edi_1, arg9, 0) == 0)
            goto label_70eb30
        
        var_1c_5 = edi_1
        var_20_6 = arg7
        var_24_3 = U" \n:\t+%"
        store_string(U" \n:\t+%", var_20_6, var_1c_5)
        var_28_3 = 0
        var_2c_7 = arg9
        var_30_5 = edi_1
        var_34_6 = arg7
        var_38_4 = arg6
        var_3c_1 = 0x59
        goto label_70ebcb
    
    if (eax == 0x67)
        if (*(arg6 + 0x14) s< 0xfffff894)
            goto label_70ec80
        
        if (*(arg6 + 0x14) s> 0x1fa3)
            goto label_70ec80
        
        var_1c_1 = 0x30
        var_20_1 = arg8
        var_24_1 = arg7
        var_28_1 = 2
        eax_12 = compute_iso_year(*(arg6 + 0x14), *(arg6 + 0x18), *(arg6 + 0x1c)) + 0x76c
    label_70ea86:
        edx_2 = mods.dp.d(sx.q(eax_12), 0x64)
        break
    
    if (eax != 0x68)
        int32_t ecx
        
        if (eax == 0x6a)
            ecx = *(arg6 + 0x1c)
            
            if (ecx s< 0)
                goto label_70ec80
            
            if (ecx s> 0x16d)
                goto label_70ec80
            
            int16_t* eax_8
            eax_8.b = arg10 != 0
            eax_8.b -= 1
            eax_8.b &= 0x30
            eax_8.w = sx.w(eax_8.b)
            var_1c_1 = eax_8.w
            var_20_1 = arg8
            var_24_1 = arg7
            var_28_1 = 3
        else
            if (eax != 0x6d)
                goto label_70ec8b_1
            
            ecx = *(arg6 + 0x10)
            
            if (ecx s< 0)
                goto label_70ec80
            
            if (ecx s> 0xb)
                goto label_70ec80
            
            int16_t* eax_5
            eax_5.b = arg10 != 0
            eax_5.b -= 1
            eax_5.b &= 0x30
            eax_5.w = sx.w(eax_5.b)
            var_1c_1 = eax_5.w
            var_20_1 = arg8
            var_24_1 = arg7
            var_28_1 = 2
        
        eax_7 = ecx + 1
        goto label_70ea04
    
    edx = 0x62
    eax = 0x62

goto label_70ea8a
