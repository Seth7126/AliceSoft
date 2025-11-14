// 函数: sub_5d5fc0
// 地址: 0x5d5fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg2 s>= 0 && arg2 s<= (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    eax = *(*(arg1 + 8) + (arg2 << 2))
    
    if (eax != 0)
        int32_t temp1 = *(eax + 0x18)
        *(eax + 0x18) -= 1
        int32_t esi = *(eax + 0x18)
        
        if (temp1 - 1 s< 0)
            int32_t var_8_1 = esi
            int32_t var_c = arg2
            sub_64b530("ReleasePage(%d)")
            enum MESSAGEBOX_RESULT eax_4
            eax_4.b = 0
            return eax_4
        
        if (esi == 0)
            eax = *(eax + 0x14) - 1
            
            if (eax u> 4)
                eax.b = 0
                return eax
            
            switch (eax)
                case 0
                    eax = sub_5d6460(arg1, arg2)
                label_5d601c:
                    
                    if (eax.b == 0)
                        eax.b = 0
                        return eax
                case 2
                    eax = sub_5d6620(arg1, arg2)
                    goto label_5d601c
                case 3
                    if (sub_5d65f0(arg1, arg2).b == 0)
                        eax.b = 0
                        return eax
        
        eax.b = 1
        return eax

eax.b = 0
return eax
