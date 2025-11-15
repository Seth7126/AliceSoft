// 函数: sub_5c8580
// 地址: 0x5c8580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_10
void* const var_c
void* const eax_1
void* edi_1

if (arg1[0xfc].b != 0)
    edi_1 = *arg1
    var_10 = 2
    sub_42eb70(edi_1 + 0x138, &var_c, &var_10)
    eax_1 = var_c

char var_11

if (arg1[0xfc].b == 0 || eax_1 == *(edi_1 + 0x138) || *(eax_1 + 0x14) s<= 0 || *(edi_1 + 0x30) == 0)
    var_11 = 0
    
    if (sub_5c8c80(arg1) != 0)
        goto label_5c8626
else
    var_11 = 1
    
    if (sub_5ca770(&arg1[0xf6]) != 0)
        __Smtx_lock_shared(&arg1[2])
        int32_t* edi_2 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        (*(*edi_2 + 0x68))(0, 0x3f800000)
    label_5c8626:
        
        if (sub_5c8ba0(arg1) != 0)
            __Smtx_lock_shared(&arg1[2])
            int32_t* esi_2 = arg1[1]
            __Smtx_unlock_shared(&arg1[2])
            
            if (sub_5761e0(arg2, nullptr, &arg1[3], esi_2) != 0 && sub_5c87c0(arg1, arg2) != 0
                    && sub_5c9f40(&arg1[3]) != 0)
                void* eax_5 = *(*arg1 + 0x178)
                var_c = eax_5
                eax_5.b = eax_5 == 5
                
                if (sub_5c8900(arg1, eax_5.b) != 0)
                    if (var_c == 5)
                    label_5c86d4:
                        
                        if (sub_5c8af0(arg1) != 0 && sub_5c9f40(&arg1[3]) != 0)
                            if (var_11 == 0)
                                return sub_5c8df0(arg1) != 0
                            
                            if (sub_5ca7c0(&arg1[0xf6]) != 0 && sub_5c8c80(arg1) != 0)
                                void* edi_5 = *arg1
                                var_c = 2
                                int32_t ecx_17 = sub_42eb70(edi_5 + 0x138, &var_10, &var_c)
                                void** eax_9 = var_10
                                
                                if (eax_9 == *(edi_5 + 0x138) || eax_9[5] s<= 0
                                        || arg1[0x122].b == 0 || *(edi_5 + 0x30) == 0)
                                    return sub_5c8df0(arg1) != 0
                                
                                int32_t xmm0_1 = *(edi_5 + 0x11c)
                                int32_t var_28_5 = ecx_17
                                int32_t* eax_11
                                int32_t ecx_19
                                eax_11, ecx_19 = sub_431af0(&arg1[1])
                                int32_t var_30_1 = ecx_19
                                int32_t* eax_12 = sub_5ca8c0(&arg1[0x124])
                                
                                if (sub_575960(&arg1[0xfd], sub_5ca8c0(&arg1[0xf6]), eax_12, 
                                        eax_11, xmm0_1, edi_5 + 0x30) != 0)
                                    return sub_5c8df0(arg1) != 0
                    else if (sub_5c8a10(arg1, arg2) != 0
                            && sub_5761e0(arg2, 6, &arg1[3], sub_431af0(&arg1[1])) != 0)
                        goto label_5c86d4
return false
