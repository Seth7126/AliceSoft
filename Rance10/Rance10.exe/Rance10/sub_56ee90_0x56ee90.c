// 函数: sub_56ee90
// 地址: 0x56ee90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 4
int32_t result_1 = result

if (result s> 0)
    void* var_6c
    sub_431b80(&var_6c, result * 0x58)
    int32_t var_8_1 = 0
    int32_t* eax_7 = *(arg2 + 0x60)
    int32_t ecx_2 = *(arg2 + 0x64)
    char var_48_1
    
    if (eax_7 == ecx_2)
    label_56ef10:
        var_48_1 = 0
    else
        while (true)
            void* edx_1
            edx_1.b = *(*eax_7 + 0x21)
            
            if (edx_1.b != 0)
                var_48_1 = 1
                break
            
            eax_7 = &eax_7[1]
            
            if (eax_7 == ecx_2)
                goto label_56ef10
    
    int32_t* eax_8 = *(arg2 + 0x60)
    char var_4c_1
    
    if (eax_8 == ecx_2)
    label_56ef30:
        var_4c_1 = 0
    else
        while (true)
            void* edx_2
            edx_2.b = *(*eax_8 + 0x20)
            
            if (edx_2.b != 0)
                var_4c_1 = 1
                break
            
            eax_8 = &eax_8[1]
            
            if (eax_8 == ecx_2)
                goto label_56ef30
    
    void* ebx_1 = var_6c
    sub_5df580(arg1 + 0x38, ebx_1, arg2, var_4c_1, arg3, var_48_1, arg4)
    result = sub_58f090(arg1 + 0x4c, arg5)
    bool var_3d_1
    
    if (result.b != 0)
        int32_t var_80_4 = 0
        int128_t var_3c
        __builtin_memcpy(&var_3c, 
            "\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x"
        "00\x00\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00", 
            0x28)
        void* var_58 = nullptr
        int32_t var_54_1 = 0
        int32_t var_50_1 = 0
        sub_452440(&var_58, &var_3c, &var_14)
        var_8_1.b = 1
        __Smtx_lock_shared(arg1 + 0x50)
        int32_t* edi_2 = *(arg1 + 0x4c)
        __Smtx_unlock_shared(arg1 + 0x50)
        void* esi_2 = var_58
        var_3d_1 = (*(*edi_2 + 0xc))(result_1, esi_2, (var_54_1 - esi_2) s>> 2, ebx_1).b != 0
        
        if (esi_2 != 0)
            sub_403160(esi_2, (var_50_1 - esi_2) s>> 2, 4)
    else
        var_3d_1 = result.b
    
    int32_t var_64
    
    if (ebx_1 != 0)
        sub_403160(ebx_1, var_64 - ebx_1, 1)
    result.b = var_3d_1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
