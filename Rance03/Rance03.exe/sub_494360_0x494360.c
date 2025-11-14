// 函数: sub_494360
// 地址: 0x494360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb5e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_493690(arg1)
sub_4932b0(arg1)
char* ecx_1 = *(arg3 + 4)
void* result

if (&ecx_1[4] u> *(arg3 + 8))
    result.b = 0
else
    int32_t edi_1 = 0
    int32_t ebx_7 =
        ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
    *(arg3 + 4) = &ecx_1[4]
    char var_40
    int32_t var_2c
    char var_28
    int32_t var_14_1
    
    if (ebx_7 s> 0)
        while (true)
            var_14_1 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            int32_t var_4 = 0
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            var_40 = 0
            var_4.b = 1
            
            if (sub_468d00(arg3, &var_28).b != 0 && sub_468d00(arg3, &var_40).b != 0)
                sub_493010(arg1, &var_28, &var_40)
                
                if (var_2c_1 u>= 0x10)
                    j__free(var_40.d)
                
                int32_t var_4_1 = 0xffffffff
                var_2c = 0xf
                int32_t var_30_2 = 0
                var_40 = 0
                
                if (var_14_1 u>= 0x10)
                    j__free(var_28.d)
                
                edi_1 += 1
                
                if (edi_1 s>= ebx_7)
                    goto label_4944ac
                
                continue
            
            if (var_2c_1 u>= 0x10)
                j__free(var_40.d)
            
            int32_t var_2c_2 = 0xf
            int32_t var_30_3 = 0
            var_40 = 0
            break
        
        goto label_4945a8
    
label_4944ac:
    char* ecx_5 = *(arg3 + 4)
    
    if (&ecx_5[4] u> *(arg3 + 8))
        result.b = 0
    else
        int32_t ebp_1 = 0
        void* edi_2 = arg1
        int32_t ebx_14 =
            ((zx.d(ecx_5[3]) << 8 | zx.d(ecx_5[2])) << 8 | zx.d(ecx_5[1])) << 8 | zx.d(*ecx_5)
        *(arg3 + 4) = &ecx_5[4]
        
        if (ebx_14 s<= 0)
        label_4946d1:
            char* edx_3 = *(arg3 + 4)
            
            if (&edx_3[4] u> *(arg3 + 8))
                result.b = 0
            else
                int32_t ecx_26 = ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8
                    | zx.d(*edx_3)
                *(arg3 + 4) = &edx_3[4]
                result.b = 1
                *(edi_2 + 0x30) = ecx_26
        else
            while (true)
                var_14_1 = 0xf
                int32_t var_18_2 = 0
                var_28 = 0
                int32_t var_4_2 = 2
                int32_t var_44_1 = 0xf
                int32_t var_48_1 = 0
                char var_58 = 0
                var_4_2.b = 3
                
                if (sub_468d00(arg3, &var_28).b != 0)
                    if (arg2 s< 3)
                        char* edx_2 = *(arg3 + 4)
                        
                        if (&edx_2[4] u<= *(arg3 + 8))
                            uint32_t ecx_17 =
                                ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                                | zx.d(*edx_2)
                            *(arg3 + 4) = &edx_2[4]
                            uint32_t var_78_11 = ecx_17
                            int32_t* eax_12 = sub_4691f0(&var_40, "%05d")
                            
                            if (&var_58 != eax_12)
                                if (var_44_1 u>= 0x10)
                                    j__free(var_58.d)
                                
                                var_44_1 = 0xf
                                int32_t var_48_3 = 0
                                var_58 = 0
                                sub_4030b0(&var_58, eax_12)
                            
                            if (var_2c u>= 0x10)
                                j__free(var_40.d)
                            
                            edi_2 = arg1
                            goto label_494680
                    else if (sub_468d00(arg3, &var_58).b != 0)
                    label_494680:
                        sub_493380(edi_2, &var_28, &var_58)
                        
                        if (var_44_1 u>= 0x10)
                            j__free(var_58.d)
                        
                        int32_t var_4_3 = 0xffffffff
                        int32_t var_44_3 = 0xf
                        int32_t var_48_4 = 0
                        var_58 = 0
                        
                        if (var_14_1 u>= 0x10)
                            j__free(var_28.d)
                        
                        ebp_1 += 1
                        
                        if (ebp_1 s>= ebx_14)
                            goto label_4946d1
                        
                        continue
                
                if (var_44_1 u>= 0x10)
                    j__free(var_58.d)
                
                int32_t var_44_2 = 0xf
                int32_t var_48_2 = 0
                var_58 = 0
                break
            
        label_4945a8:
            
            if (var_14_1 u< 0x10)
                result.b = 0
            else
                j__free(var_28.d)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
