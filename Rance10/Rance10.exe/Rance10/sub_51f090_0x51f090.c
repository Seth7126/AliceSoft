// 函数: sub_51f090
// 地址: 0x51f090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4efcc0(arg1[0x29])

if (arg1[0x2c] != 0xffffffff)
    int32_t eax_1 = (*(*arg1 + 0x18))()
    
    if (eax_1.b != 0)
        if (arg1[0x2c] != 0xffffffff)
            eax_1 = sub_51fff0(&arg1[0x30])
            int32_t edi_1 = eax_1
            
            if (arg1[0x2d] != edi_1)
                int32_t ecx_2 = arg1[0x2c]
                int32_t eax_3 = arg1[0x2c]
                
                if (edi_1 s< ecx_2)
                    ecx_2 = edi_1
                
                if (eax_3 s< edi_1)
                    eax_3 = edi_1
                
                if (ecx_2 != eax_3)
                    int32_t eax_5 =
                        sub_517760(eax, ecx_2, eax_3 - ecx_2, arg1[0x64], arg1[0x65], arg1[0x66], 1)
                    arg1[0x2d] = edi_1
                    return eax_5
                
                eax_1 = sub_5178a0(eax, 1)
                arg1[0x2d] = edi_1
        
        return eax_1

void* esi_1 = *(eax + 0x44)
sub_555e00(esi_1, 0x13, 1)
return sub_55f850(*(esi_1 + 0x80)) __tailcall
