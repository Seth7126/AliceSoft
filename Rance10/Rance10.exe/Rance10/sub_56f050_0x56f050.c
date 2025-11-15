// 函数: sub_56f050
// 地址: 0x56f050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a7d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_2 = (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 4
bool var_14 = esi_2 s> 0xffff
int32_t ecx
ecx.b = esi_2 s> 0xffff
int16_t* var_24
sub_431b80(&var_24, sub_56ee30(arg1) * ((ecx << 1) + 2))
int32_t var_8_1 = 0
int16_t* ebx = var_24

if (esi_2 s> 0xffff)
    sub_56ed60(arg1, ebx)
else
    sub_56ed10(arg1, ebx)

char result

if (sub_58f120(arg1 + 0x4c, arg2) == 0)
    result = 0
else
    __Smtx_lock_shared(arg1 + 0x58)
    int32_t* edi_1 = *(arg1 + 0x54)
    __Smtx_unlock_shared(arg1 + 0x58)
    
    if ((*(*edi_1 + 0xc))(sub_56ee30(arg1), var_14.d, ebx) == 0)
        result = 0
    else
        result = 1

arg2:3.b = result

if (ebx != 0)
    int32_t var_1c
    sub_403160(ebx, var_1c - ebx, 1)
    result = arg2:3.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
