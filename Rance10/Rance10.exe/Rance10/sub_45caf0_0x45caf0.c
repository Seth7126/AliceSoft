// 函数: sub_45caf0
// 地址: 0x45caf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t* eax

if (sub_45c990(arg1, arg3, arg4).b != 0 && sub_45caa0(arg1, arg3).b != 0)
    if (*(arg1 + 0x2c) != 0 || *(arg1 + 0x2d) == 0)
        eax = *(arg1 + 0x10)
        
        if (eax == 0x18)
            if (*(arg1 + 0x2d) != 0)
                eax = (*(*arg5 + 8))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
                goto label_45cb2d
            
            if (eax == 0x18 && *(arg1 + 0x2d) == 0)
                eax = (*(*arg5 + 0xc))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
                
                if (eax != 0)
                    goto label_45cb7d
    else
        eax = (*(*arg5 + 0x10))(*(arg1 + 8), *(arg1 + 0xc))
    label_45cb2d:
        
        if (eax != 0)
        label_45cb7d:
            *(arg2 + 8) = eax
            
            if (*(arg1 + 0x2c) != 0)
                eax = sub_45cbc0(arg1, eax)
            
            if (*(arg1 + 0x2c) == 0 || eax.b != 0)
                if (*(arg1 + 0x2d) != 0)
                    eax = sub_45cd30(arg1, *(arg2 + 8))
                
                if (*(arg1 + 0x2d) == 0 || eax.b != 0)
                    int32_t ecx_6 = *(arg1 + 0x18)
                    *(arg2 + 0xc) = *(arg1 + 0x14)
                    int32_t eax_4
                    eax_4.b = 1
                    *(arg2 + 0x10) = ecx_6
                    return eax_4

eax.b = 0
return eax
