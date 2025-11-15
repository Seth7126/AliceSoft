// 函数: ___std_fs_copy_file@12
// 地址: 0x44fd30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_7fcb4c
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(edi + 0x18) != 0)
    int32_t* ecx_1 = data_7fcb88
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1
    
    if (ecx_1 != 0)
        int32_t* eax_4 = (**ecx_1)(0x75dd78)
        
        if (eax_4 != 0)
            var_14 = nullptr
            (*(*eax_4 + 4))(0, &var_14)
            esi_1 = var_14
        else
            esi_1 = nullptr
    else
        esi_1 = nullptr
    
    int32_t eax_7 = (*(**(edi + 4) + 0x54))(eax_2)
    int32_t eax_8 = (*(**(edi + 4) + 0x50))()
    struct common::CSize::VTable* const var_20_1 = &common::CSize::`vftable'
    int32_t var_1c_1 = eax_8
    int32_t var_18_1 = eax_7
    int32_t var_8_1 = 0
    void* edi_1 = *(edi + 0x18)
    int32_t* ecx_6 = *(edi_1 + 0x80)
    var_14 = *(*(edi + 0x14) + 0xc)
    
    if (ecx_6 != 0 && (*(*ecx_6 + 8))(var_14, eax_8, eax_7, esi_1).b != 0
            && (*(**(edi_1 + 0x80) + 0xc))(arg1).b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
