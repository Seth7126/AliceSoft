// 函数: sub_5833a0
// 地址: 0x5833a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2[4] != 0 && *arg1 == 4)
    void* ecx = arg1[0x86]
    
    if (ecx != 0)
    label_5833f6:
        struct fileimage::CFileImageMaker::VTable* var_24 = &fileimage::CFileImageMaker::`vftable'
        uint8_t* var_20_1 = nullptr
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_8_1 = 0
        sub_58a880(ecx, &var_24)
        uint8_t* edx_1 = nullptr
        
        if (var_20_1 != var_1c_1)
            edx_1 = var_20_1
        
        struct fileimage::CFileImageMaker::VTable** ecx_3 = &var_24
        
        if (sub_67efe0(var_20_1, edx_1, arg2, var_1c_1 - var_20_1) != 0)
            sub_6ca060(ecx_3)
            int32_t result
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        sub_6ca060(ecx_3)
    else if (sub_5822a0(arg1) != 0)
        ecx = arg1[0x86]
        
        if (ecx != 0)
            goto label_5833f6

fsbase->NtTib.ExceptionList = ExceptionList
return 0
