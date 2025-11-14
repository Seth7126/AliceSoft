// 函数: sub_5bec70
// 地址: 0x5bec70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    int32_t esi_1
    
    if (ecx_6 u> 0)
        *(arg1 + 0x40) = *(arg1 + 0x3c)
        var_30 = 0
        sub_420c80(arg1 + 0x3c, ecx_6, &var_30)
        esi_1 = 0
        *(arg1 + 0x4c) = *(arg1 + 0x48)
    
    if (ecx_6 u<= 0 || (*(arg1 + 0x40) - *(arg1 + 0x3c)) s>> 2 == 0)
    label_5bed74:
        result.b = 1
    else
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            
            if (sub_468d00(arg2, &var_2c).b == 0)
                if (var_18_1 u>= 0x10)
                    j__free(var_2c.d)
                
                break
            
            sub_5db390(arg1 + 0x3c, esi_1, &var_2c)
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            esi_1 += 1
            
            if (esi_1 u>= (*(arg1 + 0x40) - *(arg1 + 0x3c)) s>> 2)
                goto label_5bed74
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
