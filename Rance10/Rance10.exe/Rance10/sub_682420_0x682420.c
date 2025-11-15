// 函数: sub_682420
// 地址: 0x682420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746db0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x18) != 0 && *(arg2 + 0xc) != 0 && *(arg1 + 0x34) != 0)
    struct storage::CStorageFile::VTable* const var_30 = &storage::CStorageFile::`vftable'
    struct filesystem::CFile::VTable* const var_2c = &filesystem::CFile::`vftable'
    BOOL hObject = 0xffffffff
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t var_8_1 = 0
    char eax_5 = sub_5f21b0(&var_30, arg1 + 8)
    char eax_6
    
    if (eax_5 != 0)
        eax_6 = sub_5f23c0(&var_30, *(arg2 + 4))
    
    void* ebx
    
    if (eax_5 == 0 || eax_6 == 0)
        ebx.b = 0
    else
        uint8_t* var_1c
        sub_431b80(&var_1c, *(arg2 + 8))
        var_8_1.b = 1
        uint8_t* ecx_5 = var_1c
        int32_t var_18
        uint32_t eax_8 = var_18 - ecx_5
        char eax_9 = sub_5f2320(&var_30, ecx_5, eax_8)
        char eax_12
        
        if (eax_9 != 0)
            sub_405950(arg3, *(arg2 + 0xc))
            eax_12 = (*(**(arg1 + 0x34) + 8))(*arg3, arg3[1] - *arg3, var_1c, eax_8)
        
        if (eax_9 == 0 || eax_12 == 0)
            ebx.b = 0
            sub_4059a0(&var_1c)
        else
            ebx.b = 1
            sub_4059a0(&var_1c)
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    BOOL eax_13
    eax_13.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_13

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
