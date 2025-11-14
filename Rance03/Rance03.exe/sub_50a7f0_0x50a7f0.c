// 函数: sub_50a7f0
// 地址: 0x50a7f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6be788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
void* ebx

if (sub_468d00(arg2, &var_34) == 0)
    ebx.b = 0
else
    char* ecx_1 = *(arg2 + 4)
    
    if (&ecx_1[4] u> *(arg2 + 8))
        ebx.b = 0
    else
        uint32_t edi_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg2 + 4) = &ecx_1[4]
        uint32_t var_3c
        uint32_t var_44
        
        if (sub_468b20(arg2, &var_3c) == 0)
            ebx.b = 0
        else if (sub_468b20(arg2, &var_44) == 0)
            ebx.b = 0
        else
            uint32_t var_40
            
            if (sub_468b20(arg2, &var_4c) == 0)
                ebx.b = 0
            else
                uint32_t var_38
                
                if (sub_468b20(arg2, &var_40) == 0)
                    ebx.b = 0
                else
                    uint32_t var_48
                    
                    if (sub_468b20(arg2, &var_38) == 0)
                        ebx.b = 0
                    else if (sub_468b20(arg2, &var_48) == 0)
                        ebx.b = 0
                    else
                        sub_504320(arg1, var_4c, var_40, var_38, var_48)
                        
                        if (sub_50a440(arg1, &var_34, edi_7, var_3c, var_44) == 0)
                            ebx.b = 0
                        else
                            ebx.b = 1

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return ebx.b
