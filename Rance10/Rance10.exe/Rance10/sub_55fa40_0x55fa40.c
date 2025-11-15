// 函数: sub_55fa40
// 地址: 0x55fa40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_55c8a0(arg1)
uint32_t arg_8
uint32_t esi = arg_8
uint32_t arg_c
*(arg1 + 0xf2) = arg_c.b
uint32_t* eax_1

if (sub_558b50(arg1 + 8, esi).b != 0 && sub_558b50(arg1 + 0x48, esi).b != 0)
    eax_1 = *(esi + 4)
    
    if (eax_1 + 1 u<= *(esi + 8))
        bool cond:0_1 = *eax_1 == 1
        *(esi + 4) = eax_1 + 1
        eax_1.b = cond:0_1
        
        if (*(arg1 + 0xc4) != eax_1.b)
            *(arg1 + 0xc4) = eax_1.b
            sub_55d550(arg1)
            *(arg1 + 0xd4) = 1
        
        uint32_t var_10
        uint32_t var_c
        uint32_t var_8
        uint32_t var_4
        
        if (sub_61ec90(esi, arg1 + 0xc8).b != 0 && sub_61ec90(esi, arg1 + 0xcc).b != 0
                && sub_61ec90(esi, arg1 + 0xd0).b != 0 && sub_61ec90(esi, &var_4).b != 0
                && sub_61ec90(esi, &var_8).b != 0 && sub_61ec90(esi, &var_c).b != 0
                && sub_61ec90(esi, &var_10).b != 0 && sub_61ec90(esi, &arg_c).b != 0)
            sub_55f850(arg1)
            uint32_t ebp = arg_c
            int32_t ebx = 0
            
            if (ebp s> 0)
                do
                    uint32_t var_14
                    
                    if (sub_61ec90(esi, &var_14) == 0)
                        return 0
                    
                    uint32_t var_18
                    
                    if (sub_61ec90(esi, &var_18) == 0)
                        return 0
                    
                    uint32_t var_1c
                    
                    if (sub_61ec90(esi, &var_1c) == 0)
                        return 0
                    
                    if (sub_61ec90(esi, &arg_8) == 0)
                        return 0
                    
                    if (sub_61ec90(esi, &arg_c) == 0)
                        return 0
                    
                    sub_55f7c0(arg1, var_14, var_18, var_1c, arg_8, arg_c)
                    ebx += 1
                while (ebx s< ebp)
            
            if (sub_61ed80(esi, arg1 + 0xd8) != 0 && sub_6c9280(esi, arg1 + 0xf0) != 0
                    && sub_6c9280(esi, arg1 + 0xf1) != 0)
                sub_55f2e0(arg1, var_4, var_8, var_c, var_10)
                sub_55d550(arg1)
                *(arg1 + 0xd4) = 1
                int32_t eax_9
                eax_9.b = 1
                return eax_9
            
            return 0

eax_1.b = 0
return eax_1
