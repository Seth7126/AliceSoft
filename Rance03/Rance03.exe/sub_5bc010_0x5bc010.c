// 函数: sub_5bc010
// 地址: 0x5bc010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t ebx
int32_t var_38 = ebx
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result = sub_468d00(arg2, &var_2c)
char* ecx_2

if (result.b != 0)
    if (arg1 != &var_2c)
        sub_401ff0(arg1, &var_2c, 0, 0xffffffff)
    
    ecx_2 = *(arg2 + 4)

if (result.b == 0 || &ecx_2[4] u> *(arg2 + 8))
label_5bc110:
    ebx.b = 0
else
    ebx = ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
    *(arg2 + 4) = &ecx_2[4]
    
    if (ebx s> 0)
        char* var_4c_1 = arg1
        char* var_50_1 = ecx_2
        sub_5bc190(*(arg1 + 0x18), *(arg1 + 0x1c))
        *(arg1 + 0x1c) = *(arg1 + 0x18)
        sub_5bc3a0(&arg1[0x18], ebx)
        int32_t esi_1 = 0
        
        if (ebx s> 0)
            int32_t edi_1 = 0
            
            do
                if (sub_5bc260(*(arg1 + 0x18) + edi_1, arg2, esi_1).b == 0)
                    goto label_5bc110
                
                esi_1 += 1
                edi_1 += 0x30
            while (esi_1 s< ebx)
    
    ebx.b = 1

if (var_18 u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
