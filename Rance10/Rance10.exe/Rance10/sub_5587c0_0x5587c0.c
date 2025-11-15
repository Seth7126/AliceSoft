// 函数: sub_5587c0
// 地址: 0x5587c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = data_7fcb6c
*arg1 = &partsengine::CSoundManager::`vftable'
void* ecx = *(result + 0x934)

if (ecx != 0)
    int32_t var_18_1 = 2
    sub_47fc90(ecx + 0x78)
    result = data_7fcb6c

void* ecx_2 = *(result + 0x934)

if (ecx_2 != 0)
    int32_t var_18_2 = 3
    result = sub_47fc90(ecx_2 + 0x78)

fsbase->NtTib.ExceptionList = ExceptionList
return result
