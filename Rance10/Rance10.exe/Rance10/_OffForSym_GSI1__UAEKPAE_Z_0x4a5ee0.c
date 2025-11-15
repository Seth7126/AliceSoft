// 函数: ?OffForSym@GSI1@@UAEKPAE@Z
// 地址: 0x4a5ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg2 != 1)
    goto label_4a5f40

int32_t __saved_ebp

if ((*(**(arg1 + 4) + 0x94))(__security_cookie ^ &__saved_ebp) != 0)
    if (*arg2 != 1)
        goto label_4a5f40
    
    int32_t eax_10 = (*(**(arg1 + 8) + 0x20))()
    int32_t eax_11 = (*(**(arg1 + 8) + 0x1c))()
    struct common::CSize::VTable* const var_1c_1 = &common::CSize::`vftable'
    int32_t var_18_1 = eax_11
    int32_t var_14_1 = eax_10
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    
    if ((*(**(arg1 + 4) + 0xe8))(*(arg1 + 0x14), *(arg1 + 0x18), eax_11, eax_10) == 0)
        if ((*(**(arg1 + 4) + 0xbc))(1, 0, 0, 0, 1, 0xffffffff) == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return false
        
        *arg2 = 0
else
    *arg2 = 0
label_4a5f40:
    
    if ((*(**(arg1 + 4) + 0xbc))(1, 0, 0, 0, 1, 0xffffffff) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return false

fsbase->NtTib.ExceptionList = ExceptionList
return true
