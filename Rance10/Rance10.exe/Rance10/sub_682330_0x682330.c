// 函数: sub_682330
// 地址: 0x682330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746d78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x18) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct storage::CStorageFile::VTable* const var_24 = &storage::CStorageFile::`vftable'
struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
BOOL var_1c = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
BOOL eax_5
int32_t ebx

if (sub_5f21b0(&var_24, arg1 + 8) == 0)
    eax_5 = var_1c
    ebx.b = 0
else
    eax_5 = var_1c
    int32_t lDistanceToMove = *(arg2 + 4)
    
    if (eax_5 == 0xffffffff || lDistanceToMove u>= var_14)
        ebx.b = 0
    else
        SetFilePointer(eax_5, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t lDistanceToMove_1 = lDistanceToMove
        sub_405950(arg3, *(arg2 + 8))
        uint8_t* ecx_5 = *arg3
        
        if (sub_5f2320(&var_24, ecx_5, arg3[1] - ecx_5) == 0)
            eax_5 = var_1c
            ebx.b = 0
        else
            eax_5 = var_1c
            ebx.b = 1

if (eax_5 != 0xffffffff)
    CloseHandle(eax_5)

eax_5.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
