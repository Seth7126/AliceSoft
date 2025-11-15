// 函数: sub_598a00
// 地址: 0x598a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*arg1 != arg1[1])
    __Smtx_lock_shared(&arg1[4])
    int32_t edi_1 = arg1[3]
    __Smtx_unlock_shared(&arg1[4])
    
    if (edi_1 != 0)
        __Smtx_lock_shared(&arg1[4])
        int32_t* edi_2 = arg1[3]
        __Smtx_unlock_shared(&arg1[4])
        
        if ((*(*edi_2 + 0x14))().b != 0)
            __Smtx_lock_shared(&arg1[4])
            int32_t* edi_3 = arg1[3]
            __Smtx_unlock_shared(&arg1[4])
            
            if ((*(*edi_3 + 0x3c))().b != 0)
                (*(*arg3 + 0xc8))(1)
                (*(*arg3 + 0xcc))(0)
                (*(*arg3 + 0xd4))(0)
                __Smtx_lock_shared(&arg1[4])
                int32_t* edi_4 = arg1[3]
                __Smtx_unlock_shared(&arg1[4])
                
                if ((*(*edi_4 + 0x24))() == 0)
                    return 0
                
                int32_t ecx_6 = arg1[1]
                int32_t i = 0
                int32_t var_14_1 = 0
                int32_t i_1 = 0
                
                if (((ecx_6 - *arg1) & 0xfffffffc) s> 0)
                    do
                        int32_t eax_12 = *arg1
                        int32_t ebx_6 = 1
                        void* edx_1 = *(eax_12 + (i << 2))
                        int32_t j = i + 1
                        void* var_10_1 = edx_1
                        
                        if (j s< (ecx_6 - eax_12) s>> 2)
                            do
                                if (sub_598190(edx_1, *(*arg1 + (j << 2))) == 0)
                                    break
                                
                                j += 1
                                ebx_6 += 1
                                edx_1 = var_10_1
                            while (j s< (arg1[1] - *arg1) s>> 2)
                        
                        __Smtx_lock_shared(&arg1[4])
                        int32_t* edi_5 = arg1[3]
                        __Smtx_unlock_shared(&arg1[4])
                        
                        if (sub_597ea0(var_10_1, arg2, arg3, edi_5, var_14_1, ebx_6 * 2) == 0)
                            return 0
                        
                        i = i_1 + ebx_6
                        i_1 = i
                        var_14_1 += ebx_6 * 6
                        ecx_6 = arg1[1]
                    while (i s< (ecx_6 - *arg1) s>> 2)
                
                (*(*arg3 + 0xd4))(2)

int32_t result
result.b = 1
return result
