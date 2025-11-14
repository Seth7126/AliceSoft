// 函数: sub_45ae00
// 地址: 0x45ae00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b81b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_60 = arg1
int32_t ebx = arg3
int32_t var_64 = ebx
char result

if (ebx != 0)
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    char var_58 = 0
    int32_t var_4 = 0
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
    labelid_6:
        ebx.b = 0
    else
        uint32_t ecx_6 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        
        if (sub_468c20(arg2, &var_58, ecx_6) == 0)
        labelid_6:
            ebx.b = 0
        else
            sub_4681d0(ebx, &var_58)
            
            if (sub_468b20(arg2, &var_68) == 0)
            labelid_6:
                ebx.b = 0
            else
                if (var_68 != 1)
                    goto label_45aff6
                
                uint32_t var_5c
                
                if (sub_468b20(arg2, &var_5c) == 0)
                labelid_6:
                    ebx.b = 0
                else if (sub_468b20(arg2, &var_68) == 0 || var_68 == 0)
                label_45afac:
                    ebx.b = 0
                else
                    int32_t var_2c_1 = 0xf
                    int32_t var_30_1 = 0
                    char var_40 = 0
                    var_4.b = 1
                    
                    if (sub_468b20(arg2, &var_68) == 0)
                    label_45afa7:
                        sub_401fb0(&var_40)
                    label_45afac_1:
                        ebx.b = 0
                    else
                        if (sub_468c20(arg2, &var_40, var_68) == 0)
                            goto label_45afa7
                        
                        void* eax_10 = sub_468270(ebx)
                        
                        if (sub_45a740(arg1, var_5c, arg2, eax_10) == 0)
                            char* eax_12 = &var_58
                            
                            if (var_44_1 u>= 0x10)
                                eax_12 = var_58.d
                            
                            char* var_80_9 = eax_12
                            void var_28
                            int32_t* eax_13 = sub_4691f0(&var_28, 0x6dbcb0)
                            var_4.b = 2
                            sub_456a00(*(arg1 + 4), eax_13)
                            sub_401fb0(&var_28)
                            goto label_45afa7
                        
                        var_4.b = 0
                        sub_401fb0(&var_40)
                    label_45aff6:
                        var_68 = 0
                        
                        if (sub_468b20(arg2, &var_68) == 0)
                        label_45afac_2:
                            ebx.b = 0
                        else
                            uint32_t ebp_1 = var_68
                            int32_t esi_2 = 0
                            
                            if (ebp_1 s> 0)
                                do
                                    sub_401f60(&var_40, 0x6da167)
                                    var_4.b = 3
                                    var_4.b = 0
                                    ebx.b = sub_45ae00(arg2, sub_4682e0(ebx, &var_40)) == 0
                                    sub_401fb0(&var_40)
                                    
                                    if (ebx.b != 0)
                                        goto label_45afac_2
                                    
                                    ebx = var_64
                                    esi_2 += 1
                                while (esi_2 s< ebp_1)
                            
                            ebx.b = 1
    
    if (var_44_1 u>= 0x10)
        j__free(var_58.d)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
