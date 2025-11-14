// 函数: sub_5bb350
// 地址: 0x5bb350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c94e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1

if (arg2 u< (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
    ebx_1 = *(*(arg3 + 8) + (arg2 << 2))

int32_t result

if (arg2 u>= (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2 || ebx_1 == 0)
    result = 0xffffffff
else
    int32_t* esi_1 = *(ebx_1 + 0x44)
    int128_t var_24
    __builtin_memset(&var_24, 0, 0x18)
    int32_t var_4 = 0
    int32_t* var_28 = esi_1
    
    if (esi_1 s> 0)
        sub_42f470(&var_24, esi_1)
    
    if (sub_5bb450(esi_1, &var_28, ebx_1, arg3) != 0)
        void* esi_3 = *(arg1 + 0x2c) - *(arg1 + 0x28)
        sub_5b8960(arg1 + 0x28, &var_28)
        sub_5b7dd0(&var_28)
        result = esi_3 s/ 0x1c
    else
        sub_5b7dd0(&var_28)
        result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return result
