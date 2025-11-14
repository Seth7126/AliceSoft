// 函数: sub_547a70
// 地址: 0x547a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b44b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_547640(arg1)
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
void* ebx

if (sub_468c20(arg2, &var_34, 4).b == 0)
label_547b4d:
    ebx.b = 0
else
    uint32_t var_38
    
    if (sub_40c250(&var_34, "LITP").b == 0)
    label_547b4d_1:
        ebx.b = 0
    else if (sub_468b20(arg2, &var_38).b == 0 || var_38 != 0
        || ((*(arg1 + 0x14) - *(arg1 + 0x10)) & 0xfffffffc) != 0xa4)
    label_547b4d_2:
        ebx.b = 0
    else
        for (uint32_t* i = nullptr; i s< 0xa4; i = &i[1])
            if (sub_468bc0(arg2, &var_38).b == 0)
                goto label_547b4d_2
            
            *(i + *(arg1 + 0x10)) = var_38
        
        ebx.b = 1

if (var_20 u>= 0x10)
    j__free(var_34.d)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
