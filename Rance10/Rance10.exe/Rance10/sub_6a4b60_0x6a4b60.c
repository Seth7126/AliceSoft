// 函数: sub_6a4b60
// 地址: 0x6a4b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_e0
int32_t eax_1 = __security_cookie ^ &var_e0

if ((*(arg2 + 0x4a) & 1) != 0)
    int32_t eax_2 = sub_6a65c0(eax_1, *arg2, &var_e0, 0x186a0, arg4)
    
    if (eax_2 == 0)
    label_6a4bca:
        void* ecx_8
        char* edx_3
        
        if ((*(arg2 + 0x4a) & 0x20) != 0 || arg5 == 2)
            edx_3 = "gamma value does not match sRGB"
            ecx_8 = arg3
            
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                sub_6a77d0(ecx_8, "gamma value does not match sRGB")
                int32_t eax_6
                eax_6.b = arg5 == 2
                @__security_check_cookie@4(eax_1 ^ &var_e0)
                return eax_6
            
            if ((*(arg3 + 0x78) & &__dos_header) != 0)
                sub_6a7530(ecx_8, "gamma value does not match sRGB")
                int32_t eax_7
                eax_7.b = arg5 == 2
                @__security_check_cookie@4(eax_1 ^ &var_e0)
                return eax_7
        else
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                char var_dc[0xd8]
                sub_6a7650(eax_2, &var_dc, arg3, "gamma value does not match libpng estimate")
                sub_6a7530(arg3, &var_dc)
                int32_t eax_4
                eax_4.b = arg5 == 1
                @__security_check_cookie@4(eax_1 ^ &var_e0)
                return eax_4
            
            edx_3 = "gamma value does not match libpng estimate"
            
            if ((*(arg3 + 0x78) & 0x200000) != 0)
                sub_6a7530(arg3, "gamma value does not match libpng estimate")
                int32_t eax_5
                eax_5.b = arg5 == 1
                @__security_check_cookie@4(eax_1 ^ &var_e0)
                return eax_5
            
            ecx_8 = arg3
        
        sub_6a7500(ecx_8, edx_3)
        noreturn
    
    eax_2 = var_e0 - 0x17318
    
    if (eax_2 u> 0x2710)
        goto label_6a4bca

@__security_check_cookie@4(eax_1 ^ &var_e0)
return 1
