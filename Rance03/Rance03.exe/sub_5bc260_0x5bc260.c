// 函数: sub_5bc260
// 地址: 0x5bc260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = arg3
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
void* ebx

if (sub_468d00(arg2, &var_28) == 0)
label_5bc35a:
    ebx.b = 0
else
    if (&arg1[1] != &var_28)
        sub_401ff0(&arg1[1], &var_28, 0, 0xffffffff)
    
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
    label_5bc35a_1:
        ebx.b = 0
    else
        uint32_t ecx_8 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        arg1[7] = ecx_8
        uint32_t var_2c
        
        if (sub_468b20(arg2, &var_2c) == 0)
        label_5bc35a_2:
            ebx.b = 0
        else
            uint32_t edi_1 = var_2c
            
            if (edi_1 s> 0)
                arg1[9] = arg1[8]
                sub_5bcd80(&arg1[8], edi_1)
                int32_t esi_2 = 0
                
                if (edi_1 s> 0)
                    do
                        if (sub_5bccb0(arg1[8] + (esi_2 << 2), arg2) == 0)
                            goto label_5bc35a_2
                        
                        esi_2 += 1
                    while (esi_2 s< edi_1)
            
            ebx.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return ebx.b
