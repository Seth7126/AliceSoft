// 函数: sub_50e4d0
// 地址: 0x50e4d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c1ab8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_c4
int32_t eax_2 = __security_cookie ^ &var_c4
uint32_t ebx
uint32_t var_c8 = ebx
int32_t __saved_edi
int32_t var_d4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
int32_t result_1 = 0
int32_t var_78 = 0
int32_t var_74 = 0
var_c_1.b = 1

if (sub_468d00(arg2, &var_34) == 0)
labelid_9:
    ebx.b = 0
else
    char* ecx_1 = *(arg2 + 4)
    
    if (&ecx_1[4] u> *(arg2 + 8))
    labelid_9:
        ebx.b = 0
    else
        uint32_t edi_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg2 + 4) = &ecx_1[4]
        
        if (sub_468b20(arg2, &var_c4) == 0)
        labelid_9:
            ebx.b = 0
        else
            bool cond:0_1 = var_c4 s<= 0
            uint32_t var_c0 = 0
            uint32_t var_bc
            
            if (not(cond:0_1))
                uint32_t eax_14
                
                do
                    char* edx_2 = *(arg2 + 4)
                    
                    if (&edx_2[4] u> *(arg2 + 8))
                        goto label_50e8cc_2
                    
                    uint32_t ecx_9 =
                        ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                        | zx.d(*edx_2)
                    *(arg2 + 4) = &edx_2[4]
                    var_bc = ecx_9
                    sub_4158d0(&result_1, &var_bc)
                    eax_14 = var_c0 + 1
                    var_c0 = eax_14
                while (eax_14 s< var_c4)
            
            char* ecx_11 = *(arg2 + 4)
            
            if (&ecx_11[4] u> *(arg2 + 8))
            labelid_9:
                ebx.b = 0
            else
                ebx = ((zx.d(ecx_11[3]) << 8 | zx.d(ecx_11[2])) << 8 | zx.d(ecx_11[1])) << 8
                    | zx.d(*ecx_11)
                *(arg2 + 4) = &ecx_11[4]
                
                if (&ecx_11[5] u> *(arg2 + 8))
                labelid_9:
                    ebx.b = 0
                else
                    bool cond:1_1 = ecx_11[4] == 1
                    *(arg2 + 4) = &ecx_11[5]
                    uint32_t var_94
                    uint32_t var_ac
                    
                    if (sub_468b20(arg2, &var_94) == 0)
                    labelid_9:
                        ebx.b = 0
                    else
                        uint32_t var_b4
                        
                        if (sub_468b20(arg2, &var_ac) == 0)
                        labelid_9:
                            ebx.b = 0
                        else
                            uint32_t var_98
                            
                            if (sub_468b20(arg2, &var_b4) == 0)
                            labelid_9:
                                ebx.b = 0
                            else
                                uint32_t var_b8
                                
                                if (sub_468b20(arg2, &var_98) == 0)
                                labelid_9:
                                    ebx.b = 0
                                else
                                    uint32_t var_90
                                    
                                    if (sub_468b20(arg2, &var_b8) == 0)
                                    labelid_9:
                                        ebx.b = 0
                                    else
                                        uint32_t var_70
                                        
                                        if (sub_468b20(arg2, &var_90) == 0)
                                        labelid_9:
                                            ebx.b = 0
                                        else
                                            uint32_t var_a0
                                            
                                            if (sub_468bc0(arg2, &var_70) == 0)
                                            labelid_9:
                                                ebx.b = 0
                                            else
                                                uint32_t var_6c
                                                
                                                if (sub_468bc0(arg2, &var_a0) == 0)
                                                labelid_9:
                                                    ebx.b = 0
                                                else
                                                    uint32_t var_a8
                                                    
                                                    if (sub_468b20(arg2, &var_6c) == 0)
                                                    labelid_9:
                                                        ebx.b = 0
                                                    else
                                                        uint32_t var_88
                                                        
                                                        if (sub_468b20(arg2, &var_a8) == 0)
                                                        labelid_9:
                                                            ebx.b = 0
                                                        else
                                                            int32_t var_a4
                                                            
                                                            if (sub_468b20(arg2, &var_88) == 0)
                                                            labelid_9:
                                                                ebx.b = 0
                                                            else
                                                                uint32_t var_8c
                                                                
                                                                if (sub_468ab0(arg2, &var_a4) == 0)
                                                                labelid_9:
                                                                    ebx.b = 0
                                                                else
                                                                    int32_t var_84
                                                                    
                                                                    if (sub_468b20(arg2, &var_8c) == 0)
                                                                    labelid_9:
                                                                        ebx.b = 0
                                                                    else
                                                                        uint32_t var_80
                                                                        
                                                                        if (sub_468ab0(arg2, &var_84) == 0)
                                                                        labelid_9:
                                                                            ebx.b = 0
                                                                        else if (sub_468b20(arg2, &var_80) == 0)
                                                                        labelid_9:
                                                                            ebx.b = 0
                                                                        else if (sub_468b20(arg2, &var_c0) == 0)
                                                                        labelid_9:
                                                                            ebx.b = 0
                                                                        else if (sub_468b20(arg2, &var_c4) == 0)
                                                                        label_50e8cc:
                                                                            ebx.b = 0
                                                                        else if (sub_468b20(arg2, &var_bc) == 0)
                                                                        label_50e8cc_1:
                                                                            ebx.b = 0
                                                                        else
                                                                            sub_50d410(arg1, var_80, var_c0, 
                                                                                var_c4, var_bc)
                                                                            
                                                                            if (edi_7 == 0)
                                                                                sub_50d170(arg1, &var_34)
                                                                            label_50e891:
                                                                                *(arg1 + 0x2b0) = ebx
                                                                                sub_50d490(arg1)
                                                                                sub_50d390(arg1, cond:1_1)
                                                                                sub_50d3b0(arg1, var_94)
                                                                                uint32_t var_d8_29 = var_8c
                                                                                sub_50d3d0(arg1)
                                                                                sub_50d470(arg1, var_84.b)
                                                                                ebx.b = 1
                                                                            else
                                                                                if (edi_7 == 1)
                                                                                    sub_50d240(arg1, &var_34, &result_1)
                                                                                    goto label_50e891
                                                                                
                                                                                if (edi_7 == 2)
                                                                                    var_c_1.b = 2
                                                                                    struct 
                                                                                        partsengine::CCharSpriteProperty::VTable
                                                                                        * var_68
                                                                                    sub_50d300(arg1, 
                                                                                        sub_4ff320(&var_68, var_ac, var_b4, 
                                                                                            var_90, var_b8, var_98, var_70, var_a0, 
                                                                                            var_88, var_a8, var_6c))
                                                                                    var_c_1.b = 1
                                                                                    char var_d8_24 = var_a4.b
                                                                                    var_68 = &partsengine::CCharSpriteProperty::`vftable'
                                                                                    sub_50d370(arg1, var_d8_24)
                                                                                    goto label_50e891
                                                                                
                                                                            label_50e8cc_2:
                                                                                ebx.b = 0

int32_t result = result_1

if (result != 0)
    j__free(result)

if (var_20 u>= 0x10)
    j__free(var_34.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_c4)
return result
