// 函数: sub_6317a0
// 地址: 0x6317a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_f0
int32_t var_4 = __security_cookie ^ &var_f0
char ecx = (*(arg3 + 0x74)).b

if ((ecx & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((ecx & 4) == 0)
    int32_t eax_1
    eax_1.b = *(arg3 + 0x157)
    
    if (eax_1.b != 3 || (ecx & 2) != 0)
        int32_t* eax_2
        
        if (arg2 == 0 || (*(arg2 + 8) & 0x20) == 0)
            void* eax_3
            
            if (eax_1.b != 3)
                eax_3 = ((zx.d(eax_1.b) & 2) | 1) * 2
            else
                eax_3 = 1
            
            if (arg4 == eax_3)
                char var_e4
                sub_62fc80(eax_3, &var_e4, arg3, eax_3)
                eax_2 = sub_62fcc0(arg3, nullptr)
                
                if (eax_2 == 0)
                    eax_2.b = *(arg3 + 0x157)
                    
                    if (eax_2.b != 3)
                        uint16_t ecx_10 = zx.w(var_e4)
                        var_f0 = 0
                        char var_e3
                        
                        if ((eax_2.b & 2) != 0)
                            uint16_t var_ee_4 = ecx_10 * 0x100 + zx.w(var_e3)
                            char var_e2
                            char var_e1
                            uint16_t var_ec_3 = zx.w(var_e2) * 0x100 + zx.w(var_e1)
                            char var_e0
                            char var_df
                            uint16_t var_ea_3 = zx.w(var_e0) * 0x100 + zx.w(var_df)
                        label_63193e:
                            eax_2 = nullptr
                        else
                            eax_2.w = zx.w(var_e3) + ecx_10 * 0x100
                            int16_t var_ea_2 = eax_2.w
                            int16_t var_ec_2 = eax_2.w
                            int16_t var_ee_3 = eax_2.w
                        
                        if (arg2 != 0)
                            int64_t xmm0 = var_f0.q
                            *(arg2 + 8) |= 0x20
                            *(arg2 + 0xaa) = xmm0
                            *(arg2 + 0xb2) = eax_2.w
                            sub_69a5bc(var_4 ^ &var_f0)
                            return eax_2
                    else
                        char ecx_7 = var_e4
                        var_f0 = ecx_7
                        int16_t edx_4
                        
                        if (arg2 != 0)
                            edx_4 = *(arg2 + 0x14)
                        
                        if (arg2 == 0 || edx_4 == 0)
                            int16_t var_ec
                            var_ec.d = 0
                            int16_t var_ee_2 = 0
                            goto label_63193e
                        
                        if (zx.w(ecx_7) u< edx_4)
                            char* ecx_9 = zx.d(ecx_7) * 3 + *(arg3 + 0x144)
                            uint16_t var_ee_1 = zx.w(*ecx_9)
                            uint16_t var_ec_1 = zx.w(ecx_9[1])
                            uint16_t var_ea_1 = zx.w(ecx_9[2])
                            goto label_63193e
                        
                        eax_2 = sub_62a7c0(arg3, "invalid index")
            else
                sub_62fcc0(arg3, arg4)
                eax_2 = sub_62a7c0(arg3, "invalid")
        else
            sub_62fcc0(arg3, arg4)
            eax_2 = sub_62a7c0(arg3, "duplicate")
        
        sub_69a5bc(var_4 ^ &var_f0)
        return eax_2

int32_t eax_15 = sub_62fcc0(arg3, arg4)

if ((*(arg3 + 0x78) & 0x100000) == 0)
    sub_62a740(arg3, "out of place")
    noreturn

char var_dc[0xd8]
sub_62a640(eax_15, &var_dc, arg3, "out of place")
int32_t* eax_16 = sub_62a550(arg3, &var_dc)
sub_69a5bc(var_4 ^ &var_f0)
return eax_16
