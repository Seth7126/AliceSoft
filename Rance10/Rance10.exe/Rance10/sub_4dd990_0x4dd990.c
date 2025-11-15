// 函数: sub_4dd990
// 地址: 0x4dd990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7348ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4dd450(arg1)
sub_4dd0c0(arg1)
char* ecx_1 = *(arg3 + 4)
uint32_t result

if (&ecx_1[4] u> *(arg3 + 8))
    result.b = 0
else
    int32_t ebx_1 = 0
    uint32_t edi_7 =
        ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
    *(arg3 + 4) = &ecx_1[4]
    char var_5c
    uint32_t var_48_1
    char var_44
    
    if (edi_7 s> 0)
        while (true)
            var_48_1 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            int32_t var_8_1 = 0
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            var_8_1.b = 1
            
            if (sub_61ed80(arg3, &var_5c) != 0 && sub_61ed80(arg3, &var_44) != 0)
                sub_4dcdd0(arg1, &var_5c, &var_44)
                
                if (var_30_1 u>= 0x10)
                    sub_403160(var_44.d, var_30_1 + 1, 1)
                
                int32_t var_8_2 = 0xffffffff
                int32_t var_30_2 = 0xf
                int32_t var_34_2 = 0
                var_44 = 0
                
                if (var_48_1 u>= 0x10)
                    sub_403160(var_5c.d, var_48_1 + 1, 1)
                
                ebx_1 += 1
                
                if (ebx_1 s>= edi_7)
                    goto label_4ddac5
                
                continue
            
            if (var_30_1 u>= 0x10)
                sub_403160(var_44.d, var_30_1 + 1, 1)
            
            int32_t var_30_3 = 0xf
            int32_t var_34_3 = 0
            var_44 = 0
            break
        
        goto label_4ddbc2
    
label_4ddac5:
    char* ecx_5 = *(arg3 + 4)
    
    if (&ecx_5[4] u> *(arg3 + 8))
        result.b = 0
    else
        int32_t edi_8 = 0
        int32_t var_78_1 = 0
        uint32_t ebx_8 =
            ((zx.d(ecx_5[3]) << 8 | zx.d(ecx_5[2])) << 8 | zx.d(ecx_5[1])) << 8 | zx.d(*ecx_5)
        *(arg3 + 4) = &ecx_5[4]
        uint32_t var_80
        
        if (ebx_8 s<= 0)
        label_4ddd45:
            char* edx_4 = *(arg3 + 4)
            
            if (&edx_4[4] u> *(arg3 + 8))
                result.b = 0
            else
                uint32_t ecx_28 =
                    ((zx.d(edx_4[3]) << 8 | zx.d(edx_4[2])) << 8 | zx.d(edx_4[1])) << 8
                    | zx.d(*edx_4)
                *(arg3 + 4) = &edx_4[4]
                var_80 = ecx_28
                *(arg1 + 0x18) = var_80
                result.b = 1
        else
            while (true)
                var_48_1 = 0xf
                int32_t var_4c_2 = 0
                var_5c = 0
                int32_t var_8_3 = 2
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_8_3.b = 3
                
                if (sub_61ed80(arg3, &var_5c) != 0)
                    if (arg2 s< 3)
                        char* edx_2 = *(arg3 + 4)
                        
                        if (&edx_2[4] u<= *(arg3 + 8))
                            int32_t var_30_4 = 0xf
                            int32_t var_34_4 = 0
                            uint32_t ecx_17 =
                                ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                                | zx.d(*edx_2)
                            *(arg3 + 4) = &edx_2[4]
                            var_80 = ecx_17
                            var_44 = 0
                            sub_403490(&var_44, "%05d", 4)
                            var_8_3.b = 4
                            char var_74
                            char* eax_23 = sub_409350(&var_80, &var_44, &var_74, &var_80)
                            
                            if (&var_2c != eax_23)
                                if (var_18_1 u>= 0x10)
                                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                                
                                var_18_1 = 0xf
                                int32_t var_1c_3 = 0
                                var_2c = 0
                                sub_4056a0(&var_2c, eax_23)
                            
                            int32_t var_60
                            
                            if (var_60 u>= 0x10)
                                sub_403160(var_74.d, var_60 + 1, 1)
                            
                            var_8_3.b = 3
                            var_60 = 0xf
                            int32_t var_64_1 = 0
                            var_74 = 0
                            
                            if (var_30_4 u>= 0x10)
                                sub_403160(var_44.d, var_30_4 + 1, 1)
                            
                            edi_8 = var_78_1
                            goto label_4ddced
                    else if (sub_61ed80(arg3, &var_2c) != 0)
                    label_4ddced:
                        sub_4dd1a0(arg1, &var_5c, &var_2c)
                        
                        if (var_18_1 u>= 0x10)
                            sub_403160(var_2c.d, var_18_1 + 1, 1)
                        
                        int32_t var_8_4 = 0xffffffff
                        int32_t var_18_3 = 0xf
                        int32_t var_1c_4 = 0
                        var_2c = 0
                        
                        if (var_48_1 u>= 0x10)
                            sub_403160(var_5c.d, var_48_1 + 1, 1)
                        
                        edi_8 += 1
                        var_78_1 = edi_8
                        
                        if (edi_8 s>= ebx_8)
                            goto label_4ddd45
                        
                        continue
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                break
            
        label_4ddbc2:
            
            if (var_48_1 u< 0x10)
                result.b = 0
            else
                sub_403160(var_5c.d, var_48_1 + 1, 1)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
