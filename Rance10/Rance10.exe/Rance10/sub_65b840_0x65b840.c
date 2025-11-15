// 函数: sub_65b840
// 地址: 0x65b840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1[6]
int32_t edi = ebx[1]
char* ebp = *ebx

if (edi != 0)
    goto label_65b875

if (ebx[3](arg1) != 0)
    ebp = *ebx
    edi = ebx[1]
label_65b875:
    void* ebp_1 = &ebp[1]
    uint32_t ecx_1 = zx.d(*ebp) << 8
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_65b89f
    
    if (ebx[3](arg1) != 0)
        ebp_1 = *ebx
        edi_1 = ebx[1]
    label_65b89f:
        int32_t i_1 = ecx_1 - 2 + zx.d(*ebp_1)
        int32_t edi_2 = edi_1 - 1
        void* ebp_2 = ebp_1 + 1
        int32_t i = i_1
        bool cond:0_1 = i_1 == 0
        uint32_t result
        
        if (i_1 s> 0)
            do
                if (edi_2 == 0)
                    if (ebx[3](arg1) == 0)
                        return 0
                    
                    ebp_2 = *ebx
                    edi_2 = ebx[1]
                
                uint32_t eax_5 = zx.d(*ebp_2)
                void* ebp_3 = ebp_2 + 1
                int32_t edi_3 = edi_2 - 1
                
                if (edi_2 == 1)
                    if (ebx[3](arg1) == 0)
                        return 0
                    
                    ebp_3 = *ebx
                    edi_3 = ebx[1]
                
                edi_2 = edi_3 - 1
                uint32_t edx_1 = zx.d(*ebp_3)
                ebp_2 = ebp_3 + 1
                i -= 2
                *(*arg1 + 0x14) = 0x51
                *(*arg1 + 0x18) = eax_5
                *(*arg1 + 0x1c) = edx_1
                (*(*arg1 + 4))(arg1, 1)
                uint32_t edx_2 = eax_5
                
                if (edx_2 u>= 0x20)
                    *(*arg1 + 0x14) = 0x1d
                    *(*arg1 + 0x18) = edx_2
                    (**arg1)(arg1)
                    edx_2 = eax_5
                
                if (edx_2 u< 0x10)
                    char ecx_4 = edx_1.b & 0xf
                    result = edx_1 s>> 4
                    *(edx_2 + arg1 + 0xcb) = ecx_4
                    *(edx_2 + arg1 + 0xdb) = result.b
                    
                    if (ecx_4 u> result.b)
                        *(*arg1 + 0x14) = 0x1e
                        *(*arg1 + 0x18) = edx_1
                        (**arg1)(arg1)
                else
                    *(edx_2 + arg1 + 0xdb) = edx_1.b
                
                cond:0_1 = i == 0
            while (i s> 0)
        
        if (not(cond:0_1))
            *(*arg1 + 0x14) = 0xc
            (**arg1)(arg1)
        
        ebx[1] = edi_2
        result.b = 1
        *ebx = ebp_2
        return result

return 0
