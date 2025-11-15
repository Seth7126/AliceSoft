// 函数: sub_5ed200
// 地址: 0x5ed200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s>= 0)
    void* ecx = data_7fd4cc
    
    if (arg2 s< (*(ecx + 0x58) - *(ecx + 0x54)) s>> 3)
        int32_t* edi_1 = *(ecx + 0x54) + (arg2 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0 && arg4 s>= 0)
            int32_t edx = *(edi_2 + 0x14)
            
            if (arg4 s< (*(edi_2 + 0x18) - edx) s>> 3)
                arg1 = *(edx + (arg4 << 3))
                
                if (arg1 != 0)
                    arg1 = *(arg1 + 0x220)
                    
                    if (arg1 != 0)
                        if (arg3 == 1)
                            int32_t eax_6
                            int32_t edx_1
                            edx_1:eax_6 = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
                            int32_t edx_2 = edx_1 s>> 4
                            *arg5 = (edx_2 u>> 0x1f) + edx_2
                            int32_t* eax_7
                            eax_7.b = 1
                            return eax_7
                        
                        int32_t* __saved_esi
                        int32_t var_8
                        void var_4
                        int32_t* ecx_2
                        
                        if (arg3 == 2)
                            __saved_esi = &var_4
                            ecx_2 = &var_8
                        label_5ed29c:
                            sub_59a040(arg1, ecx_2, __saved_esi)
                            *arg5 = var_8
                            int32_t eax_5
                            eax_5.b = 1
                            return eax_5
                        
                        if (arg3 == 3)
                            __saved_esi = &var_8
                            ecx_2 = &var_4
                            goto label_5ed29c

arg1.b = 0
return arg1
