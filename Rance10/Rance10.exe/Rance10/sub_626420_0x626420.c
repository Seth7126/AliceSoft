// 函数: sub_626420
// 地址: 0x626420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_c = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_61ed80(arg2, arg1).b != 0 && sub_61ed80(arg2, arg1 + 0x18).b != 0)
    sub_5ffa20(arg1 + 0x30, arg2)
    var_c = 0
    
    if (sub_61ec90(arg2, &var_c).b != 0)
        result.b = var_c != 0
        *(arg1 + 0x4c) = result.b
        
        if (result.b == 0)
            result.b = 1
            return result
        
        result = *(arg1 + 0x34) - 0xa
        
        if (result u> 0x52)
            result.b = 1
            return result
        
        switch (result)
            case nullptr, 0x25, 0x52
                if (sub_61ec90(arg2, arg1 + 0x50).b != 0)
                    result.b = 1
                    return result
            case 1
                char* edx_1 = *(arg2 + 4)
                
                if (&edx_1[4] u<= *(arg2 + 8))
                    uint32_t ecx_11 =
                        ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8
                        | zx.d(*edx_1)
                    *(arg2 + 4) = &edx_1[4]
                    var_c = ecx_11
                    *(arg1 + 0x54) = var_c
                    result.b = 1
                    return result
            case 2
                result = sub_61ed80(arg2, arg1 + 0x58)
                
                if (result.b == 0)
                    return result
                
                result.b = 1
                return result
            case 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                    0x22, 0x23, 0x24, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 
                    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                    0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 
                    0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51
                result.b = 1
                return result

result.b = 0
return result
