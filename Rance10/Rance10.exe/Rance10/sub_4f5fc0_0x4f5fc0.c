// 函数: sub_4f5fc0
// 地址: 0x4f5fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736486
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 != 0)
    int32_t __saved_ebp
    result = (*(*arg2 + 8))(__security_cookie ^ &__saved_ebp)
    
    if (result s> 1)
        char* var_24
        sub_431b80(&var_24, (result << 2) + 0xfffffffc)
        int32_t var_8_1 = 0
        int32_t ebx = *(*(*arg2 + 0xc))(0)
        char* eax_7 = (*(*arg2 + 0xc))(1, (result << 2) + 0xfffffffc)
        char* edi_1 = var_24
        sub_700660(edi_1, eax_7)
        struct commonsystemdata::CZlibDecompressor::VTable* const var_18 =
            &commonsystemdata::CZlibDecompressor::`vftable'
        int32_t* var_14 = nullptr
        var_8_1.b = 1
        sub_454990(&var_18)
        sub_405950(arg1, ebx)
        int32_t var_20
        
        if (var_14 != 0)
            ebx.b = (*(*var_14 + 8))(*arg1, ebx, edi_1, var_20 - edi_1)
        else
            ebx.b = 0
        var_8_1.b = 2
        
        if (var_14 != 0)
            (*(*var_14 + 4))()
        
        int32_t var_1c
        
        if (edi_1 != 0)
            sub_403160(edi_1, var_1c - edi_1, 1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return ebx.b

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
