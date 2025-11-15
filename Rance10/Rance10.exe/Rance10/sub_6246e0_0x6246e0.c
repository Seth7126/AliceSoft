// 函数: sub_6246e0
// 地址: 0x6246e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax_1

if (sub_6249e0(arg1, arg2) != 0)
    eax_1 = sub_432330(arg1 + 0x1c, arg2)
    void** edi_1 = *(arg1 + 0x1c)
    void** esi_1 = eax_1
    
    if (esi_1 != edi_1)
        eax_1 = sub_412ca0(arg2, &esi_1[4])
    
    if (esi_1 == edi_1 || eax_1.b != 0)
        esi_1 = edi_1
    
    if (esi_1 != edi_1)
        char* ecx_1 = esi_1[0xa]
        int32_t eax_3 = esi_1[0xb]
        
        if (ecx_1 != eax_3)
            sub_622c70(arg3, ecx_1, eax_3 - ecx_1)
            char* eax_5
            eax_5.b = 1
            return eax_5
        
        *(arg3 + 0xc) = 0
        *(arg3 + 0x14) = 0
        BOOL eax_6
        eax_6.b = 1
        return eax_6
else if (arg4 == 0)
    if (sub_622aa0(arg3, arg2).b != 0)
        eax_1.b = 1
        return eax_1
else if (sub_61ea30(*(arg1 + 0x24), arg2, arg3 + 4).b != 0 && *(arg3 + 0xc) s> 0)
    *(arg3 + 0x14) = 0
    eax_1.b = 1
    return eax_1

eax_1.b = 0
return eax_1
