// 函数: sub_627cd0
// 地址: 0x627cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_e4
int32_t eax_1 = __security_cookie ^ &var_e4

if ((*(arg2 + 0x4a) & 1) != 0)
    int32_t eax_2 = sub_629750(eax_1, *arg2, &var_e4, 0x186a0, arg4)
    
    if (eax_2 == 0)
    label_627d3a:
        void* ecx_8
        char* edx_3
        
        if ((*(arg2 + 0x4a) & 0x20) != 0 || arg5 == 2)
            edx_3 = "gamma value does not match sRGB"
            ecx_8 = arg3
            
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                sub_62a7c0(ecx_8, "gamma value does not match sRGB")
                int32_t eax_6
                eax_6.b = arg5 == 2
                sub_69a5bc(eax_1 ^ &var_e4)
                return eax_6
            
            if ((*(arg3 + 0x78) & &__dos_header) != 0)
                sub_62a550(ecx_8, "gamma value does not match sRGB")
                int32_t eax_7
                eax_7.b = arg5 == 2
                sub_69a5bc(eax_1 ^ &var_e4)
                return eax_7
        else
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                char var_e0[0xdc]
                sub_62a640(eax_2, &var_e0, arg3, "gamma value does not match libpng estimate")
                sub_62a550(arg3, &var_e0)
                int32_t eax_4
                eax_4.b = arg5 == 1
                sub_69a5bc(eax_1 ^ &var_e4)
                return eax_4
            
            edx_3 = "gamma value does not match libpng estimate"
            
            if ((*(arg3 + 0x78) & 0x200000) != 0)
                sub_62a550(arg3, "gamma value does not match libpng estimate")
                int32_t eax_5
                eax_5.b = arg5 == 1
                sub_69a5bc(eax_1 ^ &var_e4)
                return eax_5
            
            ecx_8 = arg3
        
        sub_62a520(ecx_8, edx_3)
        noreturn
    
    eax_2 = var_e4 - 0x17318
    
    if (eax_2 u> 0x2710)
        goto label_627d3a

sub_69a5bc(eax_1 ^ &var_e4)
return 1
