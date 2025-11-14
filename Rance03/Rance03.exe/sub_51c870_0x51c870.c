// 函数: sub_51c870
// 地址: 0x51c870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_518020(arg1)
uint32_t arg_8
uint32_t esi = arg_8
uint32_t* eax

if (sub_514a80(arg1 + 8, esi).b != 0 && sub_514a80(arg1 + 0x48, esi).b != 0)
    eax = *(esi + 4)
    
    if (eax + 1 u<= *(esi + 8))
        bool cond:0_1 = *eax == 1
        *(esi + 4) = eax + 1
        eax.b = cond:0_1
        
        if (*(arg1 + 0xc8) != eax.b)
            *(arg1 + 0xc8) = eax.b
            sub_519640(arg1)
            *(arg1 + 0xd8) = 1
        
        uint32_t var_10
        uint32_t var_c
        uint32_t var_8
        uint32_t var_4
        
        if (sub_468b20(esi, arg1 + 0xcc).b != 0 && sub_468b20(esi, arg1 + 0xd0).b != 0
                && sub_468b20(esi, arg1 + 0xd4).b != 0 && sub_468b20(esi, &var_4).b != 0
                && sub_468b20(esi, &var_8).b != 0 && sub_468b20(esi, &var_c).b != 0
                && sub_468b20(esi, &var_10).b != 0 && sub_468b20(esi, &arg_8).b != 0)
            sub_51c520(arg1)
            uint32_t ebp = arg_8
            int32_t ebx = 0
            
            if (ebp s> 0)
                do
                    uint32_t var_14
                    
                    if (sub_468b20(esi, &var_14) == 0)
                        return 0
                    
                    uint32_t var_18
                    
                    if (sub_468b20(esi, &var_18) == 0)
                        return 0
                    
                    uint32_t var_1c
                    
                    if (sub_468b20(esi, &var_1c) == 0)
                        return 0
                    
                    uint32_t var_20
                    
                    if (sub_468b20(esi, &var_20) == 0)
                        return 0
                    
                    if (sub_468b20(esi, &arg_8) == 0)
                        return 0
                    
                    sub_51c490(arg1, var_14, var_18, var_1c, var_20, arg_8)
                    ebx += 1
                while (ebx s< ebp)
            
            if (sub_468d00(esi, arg1 + 0xdc) != 0 && sub_468ab0(esi, arg1 + 0xf4) != 0
                    && sub_468ab0(esi, arg1 + 0xf5) != 0)
                sub_51bb30(arg1, var_4, var_8, var_c, var_10)
                sub_519640(arg1)
                *(arg1 + 0xd8) = 1
                int32_t eax_8
                eax_8.b = 1
                return eax_8
            
            return 0

eax.b = 0
return eax
