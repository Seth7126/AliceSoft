// 函数: sub_5e42b0
// 地址: 0x5e42b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_43aa00(arg2, 0x6eb2f0) == 0 && sub_43aa00(arg2, 0x6eb210) == 0
        && sub_43aa00(arg2, 0x6eb390) == 0 && sub_43aa00(arg2, 0x6eb240) == 0)
    if (sub_43aa00(arg2, 0x6eb2e0) != 0)
        return arg1 + 0x170
    
    if (sub_43aa00(arg2, 0x6eb1f0) != 0)
        return arg1 + 0x254
    
    if (sub_43aa00(arg2, 0x6eb2b0) != 0)
        return arg1 + 0x260
    
    if (sub_43aa00(arg2, 0x6eb410) != 0)
        return arg1 + 0x3bc
    
    if (sub_43aa00(arg2, 0x6eb200) == 0 && sub_43aa00(arg2, 0x6eb280) == 0)
        if (sub_43aa00(arg2, 0x6eb2a0) != 0)
            return arg1 + 0x458
        
        if (sub_43aa00(arg2, 0x6eb260) != 0)
            return data_75d4e4 + 0xc
        
        if (sub_43aa00(arg2, 0x6eb310) != 0)
            return arg1 + 0x468
        
        if (sub_43aa00(arg2, 0x6eb2d0) == 0)
            char eax_26 = sub_43aa00(arg2, 0x6eb340)
            char eax_28
            
            if (eax_26 == 0)
                eax_28 = sub_43aa00(arg2, 0x6eb300)
            
            if (eax_26 != 0 || eax_28 != 0)
                return arg1 + 0x390
            
            if (sub_43aa00(arg2, 0x6eb3e0) != 0)
                return arg1 + 0x3c4
            
            if (sub_43aa00(arg2, 0x6eb3f0) != 0)
                return arg1 + 0x3c8
            
            if (sub_43aa00(arg2, 0x6eb350) != 0)
                return *(arg1 + 0x454)
            
            if (sub_43aa00(arg2, "|.Pd") != 0)
                return arg1 + 0x414
            
            if (sub_43aa00(arg2, 0x6eb380) != 0)
                return arg1 + 0x310
            
            if (sub_43aa00(arg2, 0x6eb290) != 0)
                return arg1 + 0x230
            
            if (sub_43aa00(arg2, 0x6eb220) == 0)
                if (sub_43aa00(arg2, 0x6eb270) == 0)
                    if (sub_43aa00(arg2, 0x6eb3b0) != 0)
                        return arg1 + 0x2ec
                    
                    if (sub_43aa00(arg2, 0x6eb2c0) != 0)
                        return arg1 + 0x1dc
                    
                    if (sub_43aa00(arg2, 0x6eb360) != 0)
                        return arg1 + 0x2f4
                    
                    if (sub_43aa00(arg2, 0x6eb400) != 0)
                        return arg1 + 0x2fc
                    
                    if (sub_43aa00(arg2, 0x6eb3c0) != 0)
                        return arg1 + 0x2dc
                    
                    if (sub_43aa00(arg2, 0x6eb3a0) != 0)
                        return arg1 + 0x26c
                    
                    if (sub_43aa00(arg2, 0x6eb250) == 0)
                        if (sub_43aa00(arg2, 0x6eb370) != 0)
                            return arg1 + 0x17c
                        
                        if (sub_43aa00(arg2, 0x6eb3d0) != 0)
                            return sub_5e8450(arg1 + 0x148)
                        
                        if (sub_43aa00(arg2, 0x6eb230) != 0)
                            return arg1 + 0xd8
                    else
                        int32_t* ecx_32 = data_75d4e8
                        
                        if (ecx_32 != 0)
                            (**ecx_32)()
                            return data_75d4e8
                else
                    int32_t* ecx_24 = *(arg1 + 0x2e8)
                    
                    if (ecx_24 != 0)
                        (**ecx_24)()
                        return *(arg1 + 0x2e8)
            else if (arg1 != 0xffffff28)
                return arg1 + 0xdc
        else if (arg1 != 0xfffffeb8)
            return arg1 + 0x14c
        
        return 0
    
    return arg1 + 0x18

return arg1 + 0x15c
