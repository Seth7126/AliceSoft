// 函数: sub_41c090
// 地址: 0x41c090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728a40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2

if (result == 0x500)
    *(arg1 + 0xc) = arg3
else if (result == 0x503)
    *(arg1 + 0xc) = 0
else
    uint32_t Msg
    struct fileimage::CFileImageMaker::VTable* var_4c
    struct win32only::CFileMapping::VTable* var_3c
    
    if (result == 0x501)
        var_4c = &fileimage::CFileImageMaker::`vftable'
        int32_t var_48_1 = 0
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        int32_t var_8_1 = 0
        
        if (sub_4f70c0(&var_4c) == 0)
            result = sub_6ca060(&var_4c)
        else
            sub_6cdd20(&var_3c)
            var_8_1.b = 1
            
            if (sub_41c1e0(&var_3c, &var_4c) == 0)
                sub_6cddb0(&var_3c)
                result = sub_6ca060(&var_4c)
            else
                int32_t var_58_3 = 0
                int32_t var_5c_2 = 0
                Msg = 0x501
            label_41c1a5:
                SendMessageA(*(arg1 + 0xc), Msg, 0, 0)
                sub_6cddb0(&var_3c)
                result = sub_6ca060(&var_4c)
    else if (result == 0x502)
        var_4c = &fileimage::CFileImageMaker::`vftable'
        int32_t var_48_2 = 0
        int32_t var_44_2 = 0
        int32_t var_40_2 = 0
        int32_t var_8_2 = 2
        
        if (sub_4f7140(arg3, &var_4c) == 0)
            result = sub_6ca060(&var_4c)
        else
            sub_6cdd20(&var_3c)
            var_8_2.b = 3
            
            if (sub_41c1e0(&var_3c, &var_4c) != 0)
                int32_t var_58_6 = 0
                int32_t var_5c_5 = 0
                Msg = 0x502
                goto label_41c1a5
            
            sub_6cddb0(&var_3c)
            result = sub_6ca060(&var_4c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
