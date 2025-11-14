// 函数: sub_43f790
// 地址: 0x43f790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t esi
int32_t var_8 = esi
int32_t var_4 = ecx

if (arg1 != 0 && (*(*arg1 + 8))(0) == 0x11)
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t* ebp = (*(*arg1 + 0x1c))(0)
    int32_t* eax_3
    
    if (ebp != 0)
        void* const __return_addr_1 = __return_addr
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = muls.dp.d(0x4ec4ec4f, *(__return_addr_1 + 8) - *(__return_addr_1 + 4))
        int32_t edx_2 = edx_1 s>> 5
        int32_t eax_7 = (edx_2 u>> 0x1f) + edx_2
        int32_t arg_8 = eax_7
        void* eax_8 = *ebp
        
        if (eax_7 s<= 0)
            return (*(eax_8 + 0x38))() != 0
        
        if ((*(eax_8 + 0x30))(&arg_8, 1).b != 0)
            int32_t edi = 0
            
            if (arg_8 s> 0)
                int32_t ebx_1 = 0
                
                do
                    if (sub_440220(*(__return_addr_1 + 4) + ebx_1, (*(*ebp + 0x1c))(edi)).b == 0)
                        eax_3.b = 0
                        return eax_3
                    
                    __return_addr_1 = __return_addr
                    edi += 1
                    ebx_1 += 0x68
                while (edi s< arg_8)
            
            eax_3.b = 1
            return eax_3
    
    eax_3.b = 0
    return eax_3

int32_t eax
eax.b = 0
return eax
