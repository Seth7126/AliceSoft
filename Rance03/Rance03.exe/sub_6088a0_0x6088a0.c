// 函数: sub_6088a0
// 地址: 0x6088a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cce40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x18) == 0 || *(arg2 + 0xc) == 0 || *(arg1 + 0x34) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct filesystem::CFile::VTable* const var_1c = &filesystem::CFile::`vftable'
BOOL hObject = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
char eax_5 = sub_6049e0(&var_1c, arg1 + 8)
char eax_6

if (eax_5 != 0)
    eax_6 = sub_6052e0(&var_1c, *(arg2 + 4))

void* ebx

if (eax_5 == 0 || eax_6 == 0)
    ebx.b = 0
else
    uint8_t* var_28
    sub_448e90(&var_28, *(arg2 + 8))
    var_4.b = 1
    uint8_t* eax_7 = var_28
    int32_t var_24
    uint32_t ebp_2 = var_24 - eax_7
    char eax_8 = sub_604e90(&var_1c, eax_7, ebp_2)
    char eax_11
    
    if (eax_8 != 0)
        sub_403540(arg3, *(arg2 + 0xc))
        eax_11 = (*(**(arg1 + 0x34) + 8))(*arg3, arg3[1] - *arg3, var_28, ebp_2)
    
    if (eax_8 == 0 || eax_11 == 0)
        ebx.b = 0
        sub_403510(&var_28)
    else
        ebx.b = 1
        sub_403510(&var_28)

if (hObject != 0xffffffff)
    CloseHandle(hObject)

BOOL eax_12
eax_12.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_12
