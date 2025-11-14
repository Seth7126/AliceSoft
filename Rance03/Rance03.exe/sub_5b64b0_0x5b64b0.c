// 函数: sub_5b64b0
// 地址: 0x5b64b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
uint32_t* ebx
uint32_t* var_30 = ebx
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x30) = arg3
*(arg1 + 4) = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0

if (sub_468d00(arg2, &var_28) == 0)
    ebx.b = 0
else
    if (arg1 + 8 != &var_28)
        sub_401ff0(arg1 + 8, &var_28, 0, 0xffffffff)
    
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        ebx.b = 0
    else
        uint32_t ecx_8 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        *(arg1 + 0x20) = ecx_8
        
        if (sub_468b20(arg2, arg1 + 0x24) == 0)
            ebx.b = 0
        else if (sub_468b20(arg2, arg1 + 0x28) == 0)
            ebx.b = 0
        else if (sub_468b20(arg2, arg1 + 0x2c) == 0)
            ebx.b = 0
        else if (sub_5dc4c0(arg1 + 0x3c, arg2, *(arg1 + 0x2c)) == 0)
            ebx.b = 0
        else
            ebx.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return ebx.b
