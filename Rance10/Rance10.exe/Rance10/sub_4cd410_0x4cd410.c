// 函数: sub_4cd410
// 地址: 0x4cd410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733c08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx

if (arg3 != 0)
    ecx = *(arg2 + 4)

void** result

if (arg3 == 0 || &ecx[4] u> *(arg2 + 8))
    result.b = 0
else
    uint32_t ebx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg2 + 4) = &ecx[4]
    char* var_54
    sub_431b80(&var_54, ebx_7)
    int32_t var_8_1 = 0
    char* ecx_2 = *(arg2 + 4)
    char* edi_1 = var_54
    
    if (&ecx_2[ebx_7] u> *(arg2 + 8))
        ebx_7.b = 0
    else
        void* ecx_3 = sub_700660(edi_1, ecx_2, ebx_7)
        *(arg2 + 4) += ebx_7
        int32_t var_50
        
        if (*(arg1 + 0x34) != 0)
            int32_t eax_7 = 0
            ecx_3 = var_50 - edi_1
            
            if (ecx_3 s> 0)
                do
                    edi_1[eax_7] ^= 0x55
                    eax_7 += 1
                while (eax_7 s< ecx_3)
        
        void* var_68_3 = ecx_3
        void var_2c
        sub_47cdd0(&var_2c, edi_1, var_50)
        var_8_1.b = 1
        int32_t eax_9 = *(arg2 + 4) + ((ebx_7 + 3) & 0xfffffffc) - ebx_7
        
        if (eax_9 u> *(arg2 + 8))
            ebx_7.b = 0
            sub_403320(&var_2c)
        else
            *(arg2 + 4) = eax_9
            uint32_t var_38 = 0
            
            if (sub_61ec90(arg2, &var_38) == 0)
                ebx_7.b = 0
                sub_403320(&var_2c)
            else
                uint32_t var_30 = 0
                
                if (sub_61ec90(arg2, &var_30) == 0)
                    ebx_7.b = 0
                    sub_403320(&var_2c)
                else
                    ebx_7 = var_30
                    
                    if (ebx_7 s<= 0 || *(arg2 + 4) + ebx_7 u> *(arg2 + 8))
                        ebx_7.b = 0
                        sub_403320(&var_2c)
                    else
                        uint32_t var_48
                        sub_431b80(&var_48, ebx_7)
                        uint32_t var_68_7 = ebx_7
                        var_8_1.b = 2
                        ebx_7 = var_48
                        
                        if (sub_6c9430(arg2, ebx_7, var_68_7) == 0)
                        label_4cd5cf:
                            ebx_7.b = 0
                            sub_4059a0(&var_48)
                            sub_403320(&var_2c)
                        else
                            uint32_t ecx_13 = var_30
                            
                            if (sub_6c9230(arg2, ((ecx_13 + 3) & 0xfffffffc) - ecx_13) == 0)
                                goto label_4cd5cf
                            
                            uint32_t edx_3 = var_38
                            
                            if (*(arg1 + 0x34) != 0 && (edx_3 == 6 || edx_3 == 7))
                                int32_t eax_19 = 0
                                int32_t var_44
                                int32_t ecx_16 = var_44 - ebx_7
                                
                                if (ecx_16 s> 0)
                                    do
                                        *(ebx_7 + eax_19) ^= 0x55
                                        eax_19 += 1
                                    while (eax_19 s< ecx_16)
                            
                            if (sub_4cd630(arg1, edx_3, &var_2c, &var_48, arg3) == 0)
                                goto label_4cd5cf
                            
                            ebx_7.b = 1
                            sub_4059a0(&var_48)
                            sub_403320(&var_2c)
    
    int32_t var_4c
    
    if (edi_1 != 0)
        sub_403160(edi_1, var_4c - edi_1, 1)
    result.b = ebx_7.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
