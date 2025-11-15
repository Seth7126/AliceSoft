// 函数: sub_4d5af0
// 地址: 0x4d5af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7341b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** result

if (*(arg1 + 0x3c) != 0)
    int32_t* lpFileName_1
    sub_4175e0(&ExceptionList, arg2, &lpFileName_1, ".flat")
    int32_t var_8_1 = 0
    int32_t* lpFileName = &lpFileName_1
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        lpFileName = lpFileName_1
    
    uint32_t eax_4 = GetFileAttributesA(lpFileName)
    struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** result_1
    
    if (eax_4 == 0xffffffff || (not.b((eax_4 u>> 4).b) & 1) == 0)
        result_1 = nullptr
    else
        struct _EXCEPTION_REGISTRATION_RECORD** var_3c = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        var_8_1.b = 1
        char eax_6 = sub_67edf0(&lpFileName_1, &var_3c)
        struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = var_3c
        
        if (eax_6 == 0)
            result_1 = nullptr
        else
            struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
                eax_7 = sub_6e810c(0x8c)
            struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
                var_40_1 = eax_7
            var_8_1.b = 2
            result_1 = sub_4cbfd0(eax_7)
            var_8_1.b = 1
            
            if (sub_4cc900(result_1, edi_1, var_38_1 - edi_1) == 0)
                (*result_1)->vFunc_1(eax_2)
                result_1 = nullptr
        
        if (edi_1 != 0)
            sub_403160(edi_1, var_34_1 - edi_1, 1)
    
    if (var_1c u>= 0x10)
        sub_403160(lpFileName_1, var_1c + 1, 1)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
