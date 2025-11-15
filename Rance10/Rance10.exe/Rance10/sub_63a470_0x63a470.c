// 函数: sub_63a470
// 地址: 0x63a470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_4_1 = arg1
int32_t* ecx = data_7fcbb8
int32_t* eax

if (ecx != 0)
    int32_t* edi_1 = (*(*ecx + 0x14))(0x76d9f0)
    
    if (edi_1 != 0)
        int32_t* ecx_1 = data_7fcbb8
        
        if (ecx_1 != 0)
            eax = (*(*ecx_1 + 0x14))(0x76d9f0)
            
            if (eax != 0 && (*(*eax + 8))(sub_63a1f0(arg1)) == 0xc)
                eax = (*(*edi_1 + 0xc))(sub_63a1f0(arg1))
                
                if (eax != 0)
                    (*(*arg2 + 4))((**eax)())
                    int32_t eax_6
                    eax_6.b = 1
                    return eax_6
        
        eax.b = 0
        return eax

eax.b = 0
return eax
