// 函数: sub_48caa0
// 地址: 0x48caa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bae7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    int32_t* eax_4 = (*(*ecx + 0x10))(3)
    void** ecx_1 = arg2
    
    if (ecx_1[5] u>= 0x10)
        ecx_1 = *ecx_1
    
    int32_t* eax_6 = (*(*eax_4 + 8))(ecx_1)
    
    if (eax_6 != 0)
        struct IInterface::partsengine::CFlatData::VTable** eax_7 = sub_69adc6(0x88)
        arg2 = eax_7
        int32_t var_4 = 0
        struct IInterface::partsengine::CFlatData::VTable** result
        
        if (eax_7 == 0)
            result = nullptr
        else
            result = sub_485e60(eax_7)
        
        int32_t var_4_1 = 0xffffffff
        bool cond:0_1 = sub_486450(result, (*(*eax_6 + 0x18))((*(*eax_6 + 0x14))(eax_2))) != 0
        int32_t eax_14 = *eax_6
        
        if (cond:0_1)
            (*(eax_14 + 4))()
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        (*(eax_14 + 4))()
        (*result)->__offset(0x4).d()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
