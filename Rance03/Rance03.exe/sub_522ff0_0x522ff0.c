// 函数: sub_522ff0
// 地址: 0x522ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xc) != *(arg1 + 0x10))
    int32_t* ecx = *(arg1 + 0x24)
    
    if (ecx != 0 && (*(*ecx + 0x38))().b != 0)
        char eax_5 = (*(**(arg1 + 0x24) + 0x24))()
        
        if (eax_5 == 0)
            return eax_5
        
        int32_t* i = *(arg1 + 0xc)
        int32_t eax_6 = 0
        int32_t edx = 0
        int32_t var_c = 0
        void* const edi = nullptr
        int32_t var_8 = 0
        
        if (i != *(arg1 + 0x10))
            do
                void* ebx_1 = *i
                
                if (ebx_1 != 0)
                    int32_t* ecx_2 = *(ebx_1 + 0xe0)
                    
                    if (ecx_2 == 0)
                        if (edi == 0)
                            goto label_5230da
                        
                        if (sub_522500(ebx_1, edi) == 0)
                            sub_523140(arg1, arg2, edi, var_8, var_c)
                        label_5230da:
                            edx = *(ebx_1 + 0xd8)
                            edi = ebx_1
                            var_8 = edx
                            eax_6 = 1
                        else
                            edx = var_8
                            eax_6 = var_c + 1
                        
                        var_c = eax_6
                    else
                        if (edi != 0)
                            sub_523140(arg1, arg2, edi, edx, eax_6)
                            edi = nullptr
                        
                        if ((*(*ecx_2 + 0xc))() == 0)
                            return 0
                        
                        if ((*(**(arg1 + 0x24) + 0x24))() == 0)
                            return 0
                        
                        eax_6 = var_c
                        edx = var_8
                
                i = &i[1]
            while (i != *(arg1 + 0x10))
            
            if (edi != 0)
                sub_523140(arg1, arg2, edi, edx, eax_6)
        
        (*(*arg2 + 0xb0))()
        int32_t eax_15
        eax_15.b = 1
        return eax_15

int32_t eax
eax.b = 1
return eax
