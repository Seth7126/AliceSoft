// 函数: sub_58b7f0
// 地址: 0x58b7f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2 = (arg2[1] - *arg2) s>> 5

if (eax_2 s<= 0)
    *(arg1 + 0xc) = 0
    eax_2.b = 1
    return eax_2

int32_t eax_3

if (eax_2 != *(arg1 + 0xc))
    eax_3 = sub_58b560(arg1, eax_2, arg6)

if (eax_2 == *(arg1 + 0xc) || eax_3.b != 0)
    __Smtx_lock_shared(arg1 + 8)
    int32_t esi_1 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)
    
    if (esi_1 != 0)
        int32_t eax_4 = sub_6cab20(arg3)
        __Smtx_lock_shared(arg1 + 8)
        int32_t* esi_2 = *(arg1 + 4)
        __Smtx_unlock_shared(arg1 + 8)
        eax_3 = (*(*esi_2 + 0x18))()
        int32_t var_14 = eax_3
        
        if (eax_3 != 0)
            int32_t edi_3 = arg2[1]
            
            for (void* i = *arg2; i != edi_3; i += 0x20)
                uint32_t eax_7 = sub_58b4d0(eax_4, *(i + 0xc))
                sub_58b6f0(eax_7, i, &var_14, eax_7)
                uint32_t eax_8 = sub_58b4d0(eax_4, *(i + 0x1c))
                sub_58b6f0(eax_8, i + 0x10, &var_14, eax_8)
            
            __Smtx_lock_shared(arg1 + 8)
            int32_t* esi_3 = *(arg1 + 4)
            __Smtx_unlock_shared(arg1 + 8)
            
            if ((*(*esi_3 + 0x1c))().b != 0)
                eax_3.b = arg4
                *(arg1 + 0x10) = eax_3.b
                eax_3.b = arg5
                *(arg1 + 0x11) = eax_3.b
                eax_3.b = 1
                return eax_3

eax_3.b = 0
return eax_3
