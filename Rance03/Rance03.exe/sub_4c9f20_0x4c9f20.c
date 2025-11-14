// 函数: sub_4c9f20
// 地址: 0x4c9f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&ecx[4] u> *(arg1 + 8))
    result.b = 0
else
    int32_t esi_1 = 0
    int32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg1 + 4) = &ecx[4]
    
    if (edi_7 s<= 0)
    label_4c9ff9:
        result.b = 1
    else
        while (true)
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            int32_t var_4 = 0
            
            if (sub_468d00(arg1, &var_28).b == 0)
                if (var_14_1 u>= 0x10)
                    j__free(var_28.d)
                
                break
            
            sub_421cd0(arg2, &var_28)
            int32_t var_4_1 = 0xffffffff
            
            if (var_14_1 u>= 0x10)
                j__free(var_28.d)
            
            esi_1 += 1
            
            if (esi_1 s>= edi_7)
                goto label_4c9ff9
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
