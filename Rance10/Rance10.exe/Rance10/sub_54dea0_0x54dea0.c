// 函数: sub_54dea0
// 地址: 0x54dea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *arg1

if (edi != 0)
    int32_t* edi_1 = *(edi + 0x118)
    
    if (edi_1 != 0)
        int32_t* eax_1 = sub_54e1f0(arg1, edi_1)
        
        if (eax_1 == 0)
            eax_1.b = 0
            return eax_1
        
        int32_t var_14 = (*(*edi_1 + 0x10))((*(*edi_1 + 0x14))())
        int32_t* var_20 = edi_1
        sub_54c3c0(&arg1[3], eax_1)
        
        if (*arg1 == 0)
            sub_54d770(arg1)
        
        sub_450940(*arg1, eax_1)
        *(arg1 + 0x16) = 0
        (*(*eax_1 + 4))()
        int32_t eax_7
        eax_7.b = 1
        return eax_7

int32_t eax
eax.b = 0
return eax
