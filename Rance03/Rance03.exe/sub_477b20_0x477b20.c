// 函数: sub_477b20
// 地址: 0x477b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1

if ((*(*arg1 + 0x1c))() != 0)
    int32_t eax_5 = (*(*arg1 + 0x24))()
    int32_t ecx_2 = arg1[8]
    
    if (eax_5 u< ecx_2)
        int32_t* ecx_3 = ecx_2 - eax_5
        int32_t* eax_6 = &var_4
        int32_t arg_8
        
        if (ecx_3 u>= arg_8)
            eax_6 = &arg_8
        
        var_4 = ecx_3
        uint32_t edi = *eax_6
        
        if (edi != 0)
            if (arg1[3] == 0xffffffff)
                int32_t eax_9 = arg1[0x13]
                
                if (eax_9 != arg1[0x14])
                    int32_t edx_1 = arg1[0x12]
                    
                    if (edx_1 + edi u> arg1[0x14] - eax_9)
                        goto label_477b87
                    
                    sub_69d850(arg2, arg1[0x13] + edx_1, edi)
            else if (sub_604e90(&arg1[2], arg2, edi) == 0)
            label_477b87:
                *arg3 = 0
                int32_t* eax_8
                eax_8.b = 0
                return eax_8
            
            arg1[0x12] += edi
        
        *arg3 = edi
        uint32_t* eax_13
        eax_13.b = 1
        return eax_13

*arg3 = 0
int32_t* eax_3
eax_3.b = 0
return eax_3
