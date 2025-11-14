// 函数: sub_4e6370
// 地址: 0x4e6370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4107c0(arg1[1], arg1[2])
arg1[2] = arg1[1]
char* ecx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&ecx[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t esi_1 = 0
    int32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg2 + 4) = &ecx[4]
    
    if (edi_7 s<= 0)
    label_4e6459:
        char* edx_1 = *(arg2 + 4)
        
        if (&edx_1[4] u> *(arg2 + 8))
            result.b = 0
        else
            uint32_t ecx_9 =
                ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
            *(arg2 + 4) = &edx_1[4]
            arg1[4] = ecx_9
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
            
            sub_421cd0(&arg1[1], &var_2c)
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            esi_1 += 1
            
            if (esi_1 s>= edi_7)
                goto label_4e6459
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
