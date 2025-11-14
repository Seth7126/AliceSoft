// 函数: sub_4238b0
// 地址: 0x4238b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax

if (arg1[0x45] != arg1[0x46])
    int32_t edx_1 = *(arg1[0x46] - 0x24)
    int32_t eax_4 = (*(**(arg1[0x38] + 8) + 0x14))(edx_1)
    int32_t ebx_2 = arg3 - 2
    
    if ((*(**(arg1[0x38] + 8) + 0x14))(edx_1) == 4)
        ebx_2 += sub_423e80(arg1, edx_1, ebx_2)
    
    int32_t var_c
    uint32_t eax_5
    
    if (eax_4 == 1)
        void* esi_7 = arg1[0x38]
        
        if (ebx_2 s>= 0 && ebx_2 s< (*(**(esi_7 + 0xc) + 8))((*(**(esi_7 + 8) + 0x18))(edx_1)))
            eax = sub_42cef0(arg1[0x38], edx_1, ebx_2, &var_c)
        label_4239e2:
            
            if (eax.b != 0)
                if (sub_4315a0(var_c).b == 0)
                    sub_431730(arg1, arg2, arg3)
                
                eax_5.b = 1
                return eax_5
    else if (eax_4 == 3)
        eax = (*(**(arg1[0x38] + 8) + 4))(edx_1)
        int32_t* ecx_8 = eax
        
        if (ecx_8 != 0)
            eax = (*(*ecx_8 + 0x14))() u>> 2
        
        if (ebx_2 s>= 0 && ebx_2 s< eax)
            eax = sub_42dd60(arg1[0x38], edx_1, &var_c)
            goto label_4239e2
    else
        if (eax_4 != 4)
            eax_5.b = 1
            return eax_5
        
        void* esi_5 = arg1[0x38]
        
        if (ebx_2 s>= 0 && ebx_2 s< (*(**(esi_5 + 0xc) + 0x20))((*(**(esi_5 + 8) + 0x1c))(edx_1)))
            eax = sub_42dbc0(arg1[0x38], edx_1, ebx_2, &var_c)
            goto label_4239e2

eax.b = 0
return eax
