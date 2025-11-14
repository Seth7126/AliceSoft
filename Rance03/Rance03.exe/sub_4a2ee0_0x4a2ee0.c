// 函数: sub_4a2ee0
// 地址: 0x4a2ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4b8070(arg1 + 0x6c, arg2, arg3, arg4, arg5, arg6, arg7)
int32_t esi = 0
bool result

if (arg4 s<= 0)
label_4a2f99:
    result = true
else
    while (true)
        int32_t var_40_1 = esi + arg3
        sub_4691f0(&var_28, 
            std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                arg2))
        int32_t var_4 = 0
        int32_t* eax_8 = &var_28
        int32_t var_14
        
        if (var_14 u>= 0x10)
            eax_8 = var_28
        
        if (sub_44a260(eax_8) == 0)
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            result = false
            break
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        esi += 1
        
        if (esi s>= arg4)
            goto label_4a2f99

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
