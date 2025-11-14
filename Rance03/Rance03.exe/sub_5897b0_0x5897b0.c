// 函数: sub_5897b0
// 地址: 0x5897b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t esi = arg2

if (sub_544ad0(arg1 + 4, esi, arg1 + 0x1c4) != 0)
    uint32_t var_c = 0
    int32_t var_8_1 = 0
    int32_t var_4_1 = 0
    
    if (sub_5781d0(esi, &var_c) != 0)
        *(arg1 + 0x28) = var_c.q
        *(arg1 + 0x30) = var_4_1
        uint32_t i_2
        
        if (sub_468bc0(esi, &arg2) != 0 && sub_468bc0(esi, &i_2) != 0)
            uint32_t i = arg2
            
            if (not(0f f<= i))
                do
                    i = i f+ 360f
                while (0 f> i)
            
            if (not(i f< 360f))
                do
                    i = i f- 360f
                while (i f>= 360f)
            
            *(arg1 + 0x34) = i
            uint32_t i_1 = i_2
            
            if (not(0 f<= i_1))
                do
                    i_1 = i_1 f+ 360f
                while (0 f> i_1)
            
            if (not(i_1 f< 360f))
                do
                    i_1 = i_1 f- 360f
                while (i_1 f>= 360f)
            
            *(arg1 + 0x38) = i_1
            uint32_t var_18
            uint32_t var_14
            uint32_t var_10
            
            if (sub_468ab0(esi, arg1 + 0x3c) != 0 && sub_468bc0(esi, arg1 + 0x40) != 0
                    && sub_468bc0(esi, arg1 + 0x44) != 0 && sub_468bc0(esi, arg1 + 0x48) != 0
                    && sub_468b20(esi, arg1 + 0x4c) != 0 && sub_468b20(esi, arg1 + 0x50) != 0
                    && sub_5781d0(esi, arg1 + 0x54) != 0 && sub_5781d0(esi, arg1 + 0x60) != 0
                    && sub_5781d0(esi, arg1 + 0x6c) != 0 && sub_5781d0(esi, arg1 + 0x78) != 0
                    && sub_468bc0(esi, arg1 + 0x84) != 0 && sub_468bc0(esi, arg1 + 0x88) != 0
                    && sub_468b20(esi, arg1 + 0x8c) != 0 && sub_58a070(esi, arg1 + 0x90) != 0
                    && sub_58a070(esi, arg1 + 0x9c) != 0 && sub_58a070(esi, arg1 + 0xa8) != 0
                    && sub_468bc0(esi, arg1 + 0xb4) != 0 && sub_468b20(esi, arg1 + 0xb8) != 0
                    && sub_468bc0(esi, arg1 + 0xbc) != 0 && sub_468bc0(esi, arg1 + 0xc0) != 0
                    && sub_589fb0(esi, arg1 + 0xc4) != 0 && sub_468bc0(esi, arg1 + 0xd4) != 0
                    && sub_468bc0(esi, arg1 + 0xd8) != 0 && sub_468bc0(esi, arg1 + 0xdc) != 0
                    && sub_468bc0(esi, arg1 + 0xec) != 0 && sub_468bc0(esi, arg1 + 0xe0) != 0
                    && sub_468bc0(esi, arg1 + 0xe4) != 0 && sub_468bc0(esi, arg1 + 0xe8) != 0
                    && sub_468b20(esi, &var_14) != 0 && sub_468b20(esi, &var_18) != 0
                    && sub_468bc0(esi, &var_10) != 0 && sub_468bc0(esi, &i_2) != 0
                    && sub_468bc0(esi, &arg2) != 0)
                sub_585640(arg1 + 0xf0, var_10, var_14, var_18, i_2, arg2)
                
                if (sub_468b20(esi, arg1 + 0x158) != 0 && sub_468b20(esi, arg1 + 0x15c) != 0
                        && sub_468b20(esi, arg1 + 0x160) != 0 && sub_468b20(esi, arg1 + 0x164) != 0
                        && sub_468b20(esi, &arg2) != 0)
                    *(arg1 + 0x168) = arg2
                    
                    if (sub_468b20(esi, &arg2) != 0)
                        sub_41fff0(arg1 + 0x16c)
                        int32_t ebx = 0
                        
                        if (arg2 s> 0)
                            do
                                if (sub_468b20(esi, &var_10) == 0)
                                    return 0
                                
                                if (sub_468b20(esi, &var_18) == 0)
                                    return 0
                                
                                var_14 = var_10
                                void* eax_38 = sub_42f350(arg1 + 0x16c, &var_14)
                                ebx += 1
                                *eax_38 = var_18
                            while (ebx s< arg2)
                        
                        if (sub_468b20(esi, &arg2) != 0)
                            *(arg1 + 0x174) = arg2
                            
                            if (sub_468b20(esi, arg1 + 0x178) != 0
                                    && sub_468b20(esi, arg1 + 0x17c) != 0
                                    && sub_468b20(esi, arg1 + 0x180) != 0
                                    && sub_468b20(esi, arg1 + 0x184) != 0
                                    && sub_468b20(esi, arg1 + 0x188) != 0
                                    && sub_468b20(esi, arg1 + 0x18c) != 0
                                    && sub_468b20(esi, arg1 + 0x190) != 0
                                    && sub_468b20(esi, arg1 + 0x194) != 0
                                    && sub_468b20(esi, arg1 + 0x198) != 0
                                    && sub_468b20(esi, arg1 + 0x1ac) != 0
                                    && sub_468b20(esi, &arg2) != 0)
                                void* ecx_52 = *(arg1 + 0x1b4)
                                *(arg1 + 0x1b0) = arg2
                                
                                if (sub_547a70(ecx_52, esi) != 0
                                        && sub_58a070(esi, arg1 + 0x1b8) != 0
                                        && sub_527e40(arg1 + 0x1e4, esi) != 0)
                                    return sub_58a070(esi, arg1 + 0x1f4) != 0

return 0
