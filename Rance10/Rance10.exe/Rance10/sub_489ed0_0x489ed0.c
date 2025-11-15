// 函数: sub_489ed0
// 地址: 0x489ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(*arg1 + 0x1c))() != 0)
    int32_t eax_5 = (*(*arg1 + 0x24))()
    int32_t ecx_1 = arg1[8]
    
    if (eax_5 u< ecx_1)
        uint32_t ecx_2 = ecx_1 - eax_5
        uint32_t edi = arg3
        
        if (ecx_2 u< edi)
            edi = ecx_2
        
        if (edi != 0)
            if (arg1[3] == 0xffffffff)
                int32_t eax_8 = arg1[0x13]
                
                if (eax_8 != arg1[0x14])
                    int32_t edx_1 = arg1[0x12]
                    
                    if (edx_1 + edi u> arg1[0x14] - eax_8)
                        goto label_489f29
                    
                    sub_700660(arg2, arg1[0x13] + edx_1, edi)
            else if (sub_67f160(&arg1[2], arg2, edi) == 0)
            label_489f29:
                *arg4 = 0
                int32_t* eax_7
                eax_7.b = 0
                return eax_7
            
            arg1[0x12] += edi
        
        *arg4 = edi
        int32_t* eax_12
        eax_12.b = 1
        return eax_12

*arg4 = 0
int32_t* eax_3
eax_3.b = 0
return eax_3
