// 函数: sub_423810
// 地址: 0x423810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7292d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_20
sub_424cc0(&var_20)
int32_t var_8_1 = 0
void* edi = var_20
int32_t var_1c
int32_t ecx_5 = (var_1c - edi) s/ 0x18
(*(*arg2 + 0x44))(ecx_5)
int32_t esi = 0

if (ecx_5 s> 0)
    do
        void* ecx_7
        
        if (*(edi + 0x14) u< 0x10)
            ecx_7 = edi
        else
            ecx_7 = *edi
        
        (*(*arg2 + 0x34))(esi, ecx_7)
        esi += 1
        edi += 0x18
    while (esi s< ecx_5)

int32_t result = sub_417070(&var_20)
fsbase->NtTib.ExceptionList = ExceptionList
return result
