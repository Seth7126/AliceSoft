// 函数: sub_4d5a20
// 地址: 0x4d5a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734172
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x38)

if (ecx != 0)
    int32_t* eax_4 = (*(*ecx + 0x10))(3)
    void** ecx_1 = arg2
    
    if (ecx_1[5] u>= 0x10)
        ecx_1 = *ecx_1
    
    int32_t* eax_6 = (*(*eax_4 + 0xc))(ecx_1)
    
    if (eax_6 != 0)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
            eax_7 = sub_6e810c(0x8c)
        arg2 = eax_7
        int32_t var_8_1 = 0
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
            result = sub_4cbfd0(eax_7)
        int32_t var_8_2 = 0xffffffff
        bool cond:0_1 = sub_4cc900(result, (*(*eax_6 + 0x18))((*(*eax_6 + 0x14))(eax_2))) != 0
        int32_t eax_11 = *eax_6
        
        if (cond:0_1)
            (*(eax_11 + 4))()
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        (*(eax_11 + 4))()
        (*result)->vFunc_1()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
