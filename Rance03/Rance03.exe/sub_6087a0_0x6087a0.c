// 函数: sub_6087a0
// 地址: 0x6087a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccb18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x18) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct filesystem::CFile::VTable* const var_1c = &filesystem::CFile::`vftable'
BOOL var_18 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
BOOL eax_6
int32_t ebx

if (sub_6049e0(&var_1c, arg1 + 8) == 0)
    eax_6 = var_18
    ebx.b = 0
else
    eax_6 = var_18
    int32_t lDistanceToMove = *(arg2 + 4)
    
    if (eax_6 == 0xffffffff || lDistanceToMove u>= var_10)
        ebx.b = 0
    else
        SetFilePointer(eax_6, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t lDistanceToMove_1 = lDistanceToMove
        sub_403540(arg3, *(arg2 + 8))
        uint8_t* ecx_4 = *arg3
        
        if (sub_604e90(&var_1c, ecx_4, arg3[1] - ecx_4) == 0)
            eax_6 = var_18
            ebx.b = 0
        else
            eax_6 = var_18
            ebx.b = 1

if (eax_6 != 0xffffffff)
    CloseHandle(eax_6)

eax_6.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
