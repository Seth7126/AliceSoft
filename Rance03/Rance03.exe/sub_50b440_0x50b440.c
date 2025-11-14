// 函数: sub_50b440
// 地址: 0x50b440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
void* var_8 = __security_cookie ^ &var_28
void* result

if (arg2 s< 3)
    char* ecx_4 = *(arg3 + 4)
    
    if (&ecx_4[4] u<= *(arg3 + 8))
        uint32_t edi_7 =
            ((zx.d(ecx_4[3]) << 8 | zx.d(ecx_4[2])) << 8 | zx.d(ecx_4[1])) << 8 | zx.d(*ecx_4)
        *(arg3 + 4) = &ecx_4[4]
        uint32_t var_24
        
        if (sub_468b20(arg3, &var_24).b != 0)
            uint32_t var_38_4 = edi_7
            int32_t var_20
            sub_408340(arg1, sub_4691f0(&var_20, "%05d"))
            int32_t var_c
            
            if (var_c u>= 0x10)
                j__free(var_20)
            
            uint32_t var_38_7 = var_24
            sub_408340(&arg1[6], sub_4691f0(&var_20, "%05d"))
            
            if (var_c u>= 0x10)
                j__free(var_20)
            
            goto label_50b533
else if (sub_468d00(arg3, arg1).b != 0 && sub_468d00(arg3, &arg1[6]).b != 0)
label_50b533:
    result.b = 1
    sub_69a5bc(var_8 ^ &var_28)
    return result

result.b = 0
sub_69a5bc(var_8 ^ &var_28)
return result
