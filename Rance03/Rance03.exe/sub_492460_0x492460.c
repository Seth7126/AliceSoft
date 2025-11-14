// 函数: sub_492460
// 地址: 0x492460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
void* ebx

if (sub_468d00(arg3, &var_34) == 0)
    ebx.b = 0
else
    char* ecx_1 = *(arg3 + 4)
    
    if (&ecx_1[4] u> *(arg3 + 8))
        ebx.b = 0
    else
        uint32_t edi_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg3 + 4) = &ecx_1[4]
        uint32_t var_3c
        uint32_t var_40
        
        if (sub_468b20(arg3, &var_3c) == 0)
            ebx.b = 0
        else
            uint32_t var_38
            
            if (sub_468b20(arg3, &var_40) == 0)
                ebx.b = 0
            else if (sub_468b20(arg3, &var_38) == 0)
                ebx.b = 0
            else if (sub_494360(arg1 + 0x38, arg2, arg3) == 0)
                ebx.b = 0
            else if (sub_492050(arg1, &var_34) == 0)
                ebx.b = 0
            else
                sub_492130(arg1, edi_7, var_3c, var_40, var_38)
                sub_4958e0(*(arg1 + 0x70))
                *(arg1 + 0x20) = 1
                ebx.b = 1

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return ebx.b
