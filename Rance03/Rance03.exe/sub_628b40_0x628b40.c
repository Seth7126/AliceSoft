// 函数: sub_628b40
// 地址: 0x628b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax_2 = zx.d(arg6[3])
uint32_t ecx_6 = (((((zx.d(*arg6) << 8) + zx.d(arg6[1])) << 8) + zx.d(arg6[2])) << 8) + eax_2

if (ecx_6 != arg5)
    sub_6287e0(eax_2, arg2, arg3, arg4, ecx_6, "length does not match profile")
    return 0

uint32_t eax_5 = zx.d(arg6[0x83])
uint32_t ecx_14 =
    (((((zx.d(arg6[0x80]) << 8) + zx.d(arg6[0x81])) << 8) + zx.d(arg6[0x82])) << 8) + eax_5

if (ecx_14 u<= 0x1555554a)
    eax_5 = (ecx_14 + 0xb) * 0xc
    
    if (arg5 u>= eax_5)
        uint32_t eax_10 = zx.d(arg6[0x43])
        uint32_t ecx_21 =
            (((((zx.d(arg6[0x40]) << 8) + zx.d(arg6[0x41])) << 8) + zx.d(arg6[0x42])) << 8) + eax_10
        
        if (ecx_21 u>= 0xffff)
            sub_6287e0(eax_10, arg2, arg3, arg4, ecx_21, "invalid rendering intent")
            return 0
        
        if (ecx_21 u>= 4)
            sub_6287e0(eax_10, nullptr, arg3, arg4, ecx_21, "intent outside defined range")
        
        uint32_t eax_13 = zx.d(arg6[0x27])
        uint32_t ecx_30 =
            (((((zx.d(arg6[0x24]) << 8) + zx.d(arg6[0x25])) << 8) + zx.d(arg6[0x26])) << 8) + eax_13
        
        if (ecx_30 != 0x61637370)
            sub_6287e0(eax_13, arg2, arg3, arg4, ecx_30, "invalid signature")
            return 0
        
        int32_t eax_14 = *(arg6 + 0x44)
        
        if (eax_14 != 0xd6f60000)
            sub_6287e0(eax_14, nullptr, arg3, arg4, 0, "PCS illuminant is not D50")
        else
            eax_14 = *(arg6 + 0x48)
            
            if (eax_14 != 0x100)
                sub_6287e0(eax_14, nullptr, arg3, arg4, 0, "PCS illuminant is not D50")
            else
                eax_14 = *(arg6 + 0x4c)
                
                if (eax_14 != 0x2dd30000)
                    sub_6287e0(eax_14, nullptr, arg3, arg4, 0, "PCS illuminant is not D50")
        
        uint32_t eax_17 = zx.d(arg6[0x13])
        uint32_t ecx_39 =
            (((((zx.d(arg6[0x10]) << 8) + zx.d(arg6[0x11])) << 8) + zx.d(arg6[0x12])) << 8) + eax_17
        
        if (ecx_39 != 0x47524159)
            if (ecx_39 != 0x52474220)
                sub_6287e0(eax_17, arg2, arg3, arg4, ecx_39, "invalid ICC profile color space")
                return 0
            
            if ((arg7 & 2) == 0)
                sub_6287e0(eax_17, arg2, arg3, arg4, 0x52474220, 
                    "RGB color space not permitted on grayscale PNG")
                return 0
        else if ((arg7 & 2) != 0)
            sub_6287e0(eax_17, arg2, arg3, arg4, 0x47524159, 
                "Gray color space not permitted on RGB PNG")
            return 0
        
        uint32_t eax_20 = zx.d(arg6[0xf])
        uint32_t ecx_49 =
            (((((zx.d(arg6[0xc]) << 8) + zx.d(arg6[0xd])) << 8) + zx.d(arg6[0xe])) << 8) + eax_20
        uint32_t var_18_6
        bool cond:1_1
        
        if (ecx_49 u<= 0x6e6d636c)
            if (ecx_49 != 0x6e6d636c)
                if (ecx_49 == 0x61627374)
                    sub_6287e0(eax_20, arg2, arg3, arg4, 0x61627374, 
                        "invalid embedded Abstract ICC profile")
                    return 0
                
                if (ecx_49 == 0x6c696e6b)
                    sub_6287e0(eax_20, arg2, arg3, arg4, 0x6c696e6b, 
                        "unexpected DeviceLink ICC profile class")
                    return 0
                
                cond:1_1 = ecx_49 == 0x6d6e7472
                goto label_628dcd
            
            __builtin_strncpy(&var_18_6, "lcmn", 4)
            sub_6287e0(eax_20, nullptr, arg3, arg4, var_18_6, 
                "unexpected NamedColor ICC profile class")
        else if (ecx_49 != 0x70727472 && ecx_49 != 0x73636e72)
            cond:1_1 = ecx_49 == 0x73706163
        label_628dcd:
            
            if (not(cond:1_1))
                var_18_6 = ecx_49
                sub_6287e0(eax_20, nullptr, arg3, arg4, var_18_6, "unrecognized ICC profile class")
        uint32_t eax_23 = zx.d(arg6[0x17])
        uint32_t ecx_59 =
            (((((zx.d(arg6[0x14]) << 8) + zx.d(arg6[0x15])) << 8) + zx.d(arg6[0x16])) << 8) + eax_23
        
        if (ecx_59 == 0x4c616220 || ecx_59 == 0x58595a20)
            return 1
        
        sub_6287e0(eax_23, arg2, arg3, arg4, ecx_59, "unexpected ICC PCS encoding")
        return 0

sub_6287e0(eax_5, arg2, arg3, arg4, ecx_14, "tag count too large")
return 0
