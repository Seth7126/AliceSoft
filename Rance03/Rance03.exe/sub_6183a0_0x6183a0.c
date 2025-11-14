// 函数: sub_6183a0
// 地址: 0x6183a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdc28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* arg_8
void* esi = arg_8
int32_t var_18 = 0
char* arg_4

if ((esi.b & 3) != 1)
    char* eax_4 = arg_4
    *(eax_4 + 0x14) = 0xf
    *(eax_4 + 0x10) = 0
    *eax_4 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

int32_t* var_14 = nullptr
int32_t var_10 = 0
var_14 = sub_42f580()
int32_t var_4 = 0
sub_617d00(&var_14)
int32_t* edi = var_14
void* eax_6 = *edi
arg_8 = eax_6
char* esi_3

if (eax_6 == edi)
label_618457:
    esi_3 = arg_4
    *(esi_3 + 0x14) = 0xf
    *(esi_3 + 0x10) = 0
    *esi_3 = 0
else
    while (*(eax_6 + 0x28) != (esi u>> 4 & 0xf))
        sub_418380(&arg_8)
        eax_6 = arg_8
        
        if (eax_6 == edi)
            goto label_618457
    
    esi_3 = arg_4
    *(esi_3 + 0x14) = 0xf
    *(esi_3 + 0x10) = 0
    *esi_3 = 0
    sub_401ff0(esi_3, eax_6 + 0x10, 0, 0xffffffff)

int32_t* ecx_4 = var_14
sub_417e10(&var_14, &arg_4, *ecx_4, ecx_4)
j__free(var_14)
fsbase->NtTib.ExceptionList = ExceptionList
return esi_3
