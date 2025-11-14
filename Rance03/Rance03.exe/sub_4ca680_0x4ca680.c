// 函数: sub_4ca680
// 地址: 0x4ca680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_418220(*(*(arg1 + 0x10) + 4))
void* eax_6 = *(arg1 + 0x10)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x10)
*eax_7 = eax_7
void** result = *(arg1 + 0x10)
result[2] = result
*(arg1 + 0x14) = 0
char* ecx_1 = *(arg2 + 4)

if (&ecx_1[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t esi_1 = 0
    int32_t edi_7 =
        ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
    *(arg2 + 4) = &ecx_1[4]
    
    if (edi_7 s<= 0)
    label_4ca787:
        result.b = 1
    else
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            int32_t ecx_3
            result, ecx_3 = sub_468d00(arg2, &var_2c)
            
            if (result.b == 0)
                if (var_18_1 u>= 0x10)
                    j__free(var_2c.d)
                
                break
            
            uint32_t var_4c_2 = zx.d(data_75dd2a)
            char* var_50_1 = &var_2c
            sub_4ce1a0(arg1 + 0x10, &var_34, ecx_3)
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            esi_1 += 1
            
            if (esi_1 s>= edi_7)
                goto label_4ca787
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
