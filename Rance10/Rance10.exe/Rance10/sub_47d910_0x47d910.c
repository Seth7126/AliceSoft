// 函数: sub_47d910
// 地址: 0x47d910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[1].b == 0)
    int32_t eax
    eax.b = 1
    return eax

sub_47d8c0(arg1)
int32_t* ecx = *arg1

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *arg1 = 0

if (CoCreateInstance(&data_752ac4, 0, CLSCTX_INPROC_SERVER, &data_752ad4, arg1) s>= 0)
    int32_t* ecx_1 = *arg1
    
    if (ecx_1 != 0)
        if ((*(*ecx_1 + 0x1c))(ecx_1, arg3, 0x800) s>= 0)
            int32_t* eax_6 = *arg1
            
            if ((*(*eax_6 + 0x10))(eax_6, 4, sub_47d820, arg1, 1) != 0)
                sub_47da20(arg1)
                int32_t eax_8
                eax_8.b = 0
                return eax_8
            
            int32_t* esi = arg1[2]
            int32_t edi = arg1[3]
            
            if (esi != edi)
                while (true)
                    void* ebp_1 = *esi
                    int32_t* ecx_6 = *(ebp_1 + 4)
                    
                    if (ecx_6 != 0)
                        if ((*(*ecx_6 + 0x34))(ecx_6, arg2, 6) s>= 0)
                            int32_t* eax_11 = *(ebp_1 + 4)
                            
                            if ((*(*eax_11 + 0x2c))(eax_11, 0x752a6c) s>= 0)
                                esi = &esi[1]
                                
                                if (esi == edi)
                                    break
                                
                                continue
                        
                        sub_47de20(ebp_1)
                    
                    sub_47d8c0(arg1)
                    int32_t* ecx_10 = *arg1
                    
                    if (ecx_10 != 0)
                        (*(*ecx_10 + 8))(ecx_10)
                        *arg1 = 0
                    
                    int32_t eax_12
                    eax_12.b = 0
                    return eax_12
            
            int32_t eax_7
            eax_7.b = 1
            return eax_7
        
        sub_47d8c0(arg1)
        int32_t* ecx_3 = *arg1
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 8))(ecx_3)
            *arg1 = 0

HRESULT eax_2
eax_2.b = 0
return eax_2
