// 函数: sub_559cf0
// 地址: 0x559cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_14 = ebp
void* const __return_addr_1 = arg1
void* const __return_addr_2 = __return_addr_1

if (*(__return_addr_1 + 4) != *(__return_addr_1 + 8))
    int32_t* ecx = *(__return_addr_1 + 0x10)
    
    if (ecx != 0 && (*(*ecx + 0x14))().b != 0 && (*(**(__return_addr_1 + 0x10) + 0x38))().b != 0)
        int32_t esi
        int32_t var_18 = esi
        int32_t* esi_1 = arg2
        (*(*esi_1 + 0xc4))(1)
        (*(*esi_1 + 0xc8))(0)
        (*(*esi_1 + 0xd0))(0)
        char eax_10 = (*(**(__return_addr_1 + 0x10) + 0x24))()
        
        if (eax_10 == 0)
            return eax_10
        
        int32_t ebx
        int32_t var_18_1 = ebx
        int32_t i = 0
        int32_t var_c = 0
        int32_t i_1 = 0
        int32_t edi
        int32_t var_1c = edi
        
        if (((*(__return_addr_1 + 8) - *(__return_addr_1 + 4)) & 0xfffffffc) s> 0)
            do
                int32_t edx_1 = *(__return_addr_1 + 4)
                int32_t esi_3 = i + 1
                int32_t edi_1 = 1
                void* ecx_6 = *(edx_1 + (i << 2))
                
                if (esi_3 s< (*(__return_addr_1 + 8) - edx_1) s>> 2)
                    void** ebx_1 = edx_1 + (esi_3 << 2)
                    int32_t eax_18 = (*(__return_addr_1 + 8) - edx_1) s>> 2
                    int32_t var_4 = eax_18
                    
                    do
                        if (sub_559620(ecx_6, *ebx_1) == 0)
                            break
                        
                        esi_3 += 1
                        edi_1 += 1
                        ebx_1 = &ebx_1[1]
                    while (esi_3 s< eax_18)
                    
                    __return_addr_1 = __return_addr
                    i = i_1
                
                if (sub_559370(ecx_6, arg2, arg3, *(__return_addr_1 + 0x10), var_c, edi_1 * 2) == 0)
                    return 0
                
                i += edi_1
                i_1 = i
                var_c += edi_1 * 6
            while (i s< (*(__return_addr_1 + 8) - *(__return_addr_1 + 4)) s>> 2)
            
            esi_1 = arg3
        
        (*(*esi_1 + 0xd0))(2)
        int32_t eax_27
        eax_27.b = 1
        return eax_27

int32_t eax
eax.b = 1
return eax
