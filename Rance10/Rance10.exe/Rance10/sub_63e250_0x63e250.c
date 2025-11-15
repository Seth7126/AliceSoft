// 函数: sub_63e250
// 地址: 0x63e250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_1c = edi
int32_t* esi = *(arg3 + 8)

if (esi != 0)
    int32_t ebp_1 = arg5
    int32_t edi_2 = int.d(sub_4a78b0(*(ebp_1 + 0x1c)))
    int32_t eax = int.d(sub_4a78b0(*(ebp_1 + 0x20)))
    void* eax_19
    int32_t* edi_7
    
    if (eax s<= 0 || eax s<= edi_2)
        edi_7 = arg4
        int32_t esi_4 = *esi
        int32_t eax_37 = (*(*edi_7 + 0x10))((*(*edi_7 + 0x14))(*(ebp_1 + 0xc), *(ebp_1 + 0x10), 
            *(ebp_1 + 0x14), 0))
        *(arg3 + 8)
        (*(esi_4 + 0x64))(edi_7, 0, 0, eax_37)
        eax_19 = arg3 + 0x54
        
        if (edi_2 s<= 0)
            eax_19 = arg3 + 0xc
        
        goto label_63e416
    
    int32_t esi_1 = *esi
    int32_t eax_4 =
        (*(*arg4 + 0x10))((*(*arg4 + 0x14))(*(ebp_1 + 0x24), *(ebp_1 + 0x28), *(ebp_1 + 0x2c), 0))
    *(arg3 + 8)
    (*(esi_1 + 0x64))(arg4, 0, 0, eax_4)
    var_1c = 0x20
    int32_t edi_4 = **(arg3 + 4)
    
    if (arg6 s<= 0)
        *(arg3 + 0x48)
        arg1 = (*(edi_4 + 8))(divs.dp.d(sx.q(*(arg3 + 0x40)), *(arg3 + 0x48)), 
            divs.dp.d(sx.q(*(arg3 + 0x44)), *(arg3 + 0x48)))
        arg5 = arg1
        
        if (arg1 != 0)
            sub_63e430(arg3, arg1, arg3 + 0xc)
            int32_t esi_3 = **(arg3 + 8)
            int32_t eax_31 = (*(*arg1 + 0x10))((*(*arg1 + 0x14))(*(ebp_1 + 0xc), *(ebp_1 + 0x10), 
                *(ebp_1 + 0x14)))
            *(arg3 + 8)
            edi_7 = arg7
            (*(esi_3 + 0x20))(edi_7, arg5, arg5, arg1, 0, 0, eax_31)
            (*(*arg5 + 4))(0x20)
            eax_19 = arg3 + 0x9c
        label_63e416:
            sub_63e430(arg3, edi_7, eax_19)
            int32_t eax_38
            eax_38.b = 1
            return eax_38
    else
        *(arg3 + 0x48)
        arg1 = (*(edi_4 + 8))(divs.dp.d(sx.q(*(arg3 + 0x78)), *(arg3 + 0x48)), 
            divs.dp.d(sx.q(*(arg3 + 0x7c)), *(arg3 + 0x48)))
        
        if (arg1 != 0)
            sub_63e430(arg3, arg1, arg3 + 0x54)
            int32_t edi_5 = eax
            int32_t esi_2 = **(arg3 + 8)
            
            if (edi_2 s> edi_5)
                edi_5 = edi_2
            
            int32_t edi_6 = edi_5 - edi_2
            int32_t eax_17 = (*(*arg1 + 0x10))((*(*arg1 + 0x14))(*(ebp_1 + 0xc), *(ebp_1 + 0x10), 
                *(ebp_1 + 0x14)))
            *(arg3 + 8)
            edi_7 = arg7
            (*(esi_2 + 0x20))(edi_7, edi_6, edi_6, arg1, 0, 0, eax_17)
            (*(*arg1 + 4))(0x20)
            eax_19 = arg3 + 0x9c
            goto label_63e416

arg1.b = 0
return arg1
