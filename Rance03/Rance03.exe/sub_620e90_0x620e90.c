// 函数: sub_620e90
// 地址: 0x620e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_43aa00(arg1, 0x6ed2c0) == 0)
    if (sub_43aa00(arg1, 0x6ed2f0) == 0)
        if (sub_43aa00(arg1, 0x6ed2e0) == 0)
            if (sub_43aa00(arg1, 0x6ed300) == 0)
                if (sub_43aa00(arg1, "-6eC") != 0)
                    struct ICompressor::nutria::CZlibCompressor::VTable** eax_9 = sub_69adc6(0xc)
                    
                    if (eax_9 != 0)
                        *eax_9 = &nutria::CZlibCompressor::`vftable'{for `ICompressor'}
                        eax_9[1] = 1
                        eax_9[2] = 0
                        return eax_9
            else
                struct ICompressor::nutria::CZlibCompressor::VTable** eax_7 = sub_69adc6(0xc)
                
                if (eax_7 != 0)
                    *eax_7 = &nutria::CZlibCompressor::`vftable'{for `ICompressor'}
                    eax_7[1] = 1
                    eax_7[2] = 9
                    return eax_7
        else
            struct ICompressor::nutria::CZlibCompressor::VTable** eax_5 = sub_69adc6(0xc)
            
            if (eax_5 != 0)
                *eax_5 = &nutria::CZlibCompressor::`vftable'{for `ICompressor'}
                eax_5[1] = 1
                eax_5[2] = 1
                return eax_5
    else
        struct ICompressor::nutria::CZlibCompressor::VTable** eax_3 = sub_69adc6(0xc)
        
        if (eax_3 != 0)
            *eax_3 = &nutria::CZlibCompressor::`vftable'{for `ICompressor'}
            eax_3[1] = 1
            eax_3[2] = 0xffffffff
            return eax_3
else
    struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_1 = sub_69adc6(8)
    
    if (eax_1 != 0)
        *eax_1 = &nutria::CZlibDecompressor::`vftable'{for `IDecompressor'}
        eax_1[1] = 1
        return eax_1

return 0
