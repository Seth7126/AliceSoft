// 函数: sub_5b24e0
// 地址: 0x5b24e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f208
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* esi = arg1
uint32_t* var_58 = esi
char* ecx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&ecx[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t var_5c_1 = 0
    int32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg2 + 4) = &ecx[4]
    
    if (edi_7 s<= 0)
    label_5b2740:
        result.b = 1
    else
        while (true)
            struct _EXCEPTION_REGISTRATION_RECORD** var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            int32_t var_8_1 = 0
            
            if (sub_61ed80(arg2, &var_48) != 0)
                int32_t var_68 = 0
                int32_t var_64_1 = 0
                int32_t var_60_1 = 0
                var_8_1.b = 1
                
                if (sub_5b2aa0(esi, arg2, &var_68) != 0)
                    char* ecx_3 = *(arg2 + 4)
                    
                    if (&ecx_3[4] u<= *(arg2 + 8))
                        uint32_t edi_14 =
                            ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8
                            | zx.d(*ecx_3)
                        *(arg2 + 4) = &ecx_3[4]
                        int32_t* var_94_3 = &var_68
                        char var_49
                        char* eax_10 = &var_49
                        void** edx_2 = &var_48
                        char* var_98_2 = &var_49
                        int32_t* ecx_6
                        
                        if (edi_14 != 0)
                            var_49 = 1
                            int32_t* var_50
                            sub_5b4fa0(eax_10, edx_2, &var_50, var_98_2, var_94_3)
                            var_8_1.b = 3
                            int32_t var_54_1 = 0
                            
                            if (edi_14 s<= 0)
                            label_5b26f8:
                                sub_5b5010(&esi[2], &var_50)
                                ecx_6 = var_50
                                goto label_5b2702
                            
                            int32_t* esi_1 = var_50
                            
                            while (true)
                                int32_t var_1c_1 = 0xf
                                int32_t var_20_1 = 0
                                char var_30 = 0
                                var_8_1.b = 4
                                char eax_12
                                int32_t* ecx_9
                                eax_12, ecx_9 = sub_61ed80(arg2, &var_30)
                                
                                if (eax_12 != 0)
                                    int32_t var_74 = 0
                                    int32_t var_70_1 = 0
                                    int32_t var_6c_1 = 0
                                    var_8_1.b = 5
                                    
                                    if (sub_5b2aa0(var_58, arg2, &var_74) == 0)
                                        ecx_9 = &var_74
                                        sub_5b47d0(ecx_9)
                                    else
                                        var_49 = 0
                                        var_8_1.b = 6
                                        int32_t* var_7c
                                        sub_5b5010(&esi_1[0xa], 
                                            sub_5b4fa0(&var_49, &var_30, &var_7c, &var_49, &var_74))
                                        int32_t* ecx_13 = var_7c
                                        
                                        if (ecx_13 != 0)
                                            int32_t* var_94_9 = ecx_13
                                            sub_5b4c50(ecx_13)
                                        
                                        sub_5b47d0(&var_74)
                                        var_8_1.b = 3
                                        sub_403320(&var_30)
                                        int32_t eax_17 = var_54_1 + 1
                                        var_54_1 = eax_17
                                        
                                        if (eax_17 s< edi_14)
                                            continue
                                        
                                        esi = var_58
                                        goto label_5b26f8
                                
                                if (var_1c_1 u>= 0x10)
                                    ecx_9 = sub_403160(var_30.d, var_1c_1 + 1, 1)
                                
                                int32_t var_1c_2 = 0xf
                                int32_t var_20_2 = 0
                                var_30 = 0
                                
                                if (esi_1 != 0)
                                    int32_t* var_94_12 = ecx_9
                                    sub_5b4c50(esi_1)
                                
                                break
                        else
                            var_49 = 0
                            var_8_1.b = 2
                            int32_t* var_78
                            sub_5b5010(&esi[2], 
                                sub_5b4fa0(eax_10, edx_2, &var_78, var_98_2, var_94_3))
                            ecx_6 = var_78
                        label_5b2702:
                            
                            if (ecx_6 != 0)
                                int32_t* var_94_11 = ecx_6
                                sub_5b4c50(ecx_6)
                            
                            sub_5b47d0(&var_68)
                            int32_t var_8_2 = 0xffffffff
                            
                            if (var_34_1 u>= 0x10)
                                sub_403160(var_48.d, var_34_1 + 1, 1)
                            
                            int32_t edi_16 = var_5c_1 + 1
                            var_5c_1 = edi_16
                            
                            if (edi_16 s>= edi_7)
                                goto label_5b2740
                            
                            continue
                
                sub_5b47d0(&var_68)
            
            if (var_34_1 u< 0x10)
                break
            
            sub_403160(var_48.d, var_34_1 + 1, 1)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
