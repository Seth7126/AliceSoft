// 函数: sub_4dbf90
// 地址: 0x4dbf90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734740
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 0x5c) == 0)
    result = 0
else
    void* ebx_1 = arg1 + 8
    
    if (sub_4076d0(ebx_1, arg2) != 0)
        result = 1
    else if (sub_4090e0(arg2, &data_7fceb4) == 0)
        sub_4deba0(*(arg1 + 0x60))
    label_4dc05d:
        
        if (ebx_1 != arg2)
            sub_403590(ebx_1, arg2, 0, 0xffffffff)
        
        *(arg1 + 0x20) = 1
        result = 1
    else
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
            eax_4 = sub_4d61b0(*(arg1 + 0x5c), arg2)
        
        if (eax_4 != 0)
            sub_4dec00(*(arg1 + 0x60), eax_4)
            (*eax_4)->vFunc_1(eax_2)
            ebx_1 = arg1 + 8
            goto label_4dc05d
        
        void var_48
        int32_t* eax_5 = sub_419600(eax_4, 0x7646d4, &var_48, arg2)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
            var_8_1 = eax_4
        var_8_1.b = 1
        void var_30
        sub_45ab60(sub_4176f0(eax_5.b, eax_5, &var_30, 0x7646a8))
        sub_403320(&var_30)
        sub_403320(&var_48)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
