// 函数: ??1__ExceptionPtr@@QAE@XZ
// 地址: 0x6d4f57
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x14].b != 0 && *arg1 == 0xe06d7363 && arg1[4] == 3)
    result = arg1[5]
    
    if (result == 0x19930520 || result == 0x19930521 || result == 0x19930522 || result == 0x1994000)
        void* eax_3 = DecodePointer(arg1[7])
        
        if (eax_3 == 0)
            _terminate()
            noreturn
        
        int32_t* ecx = arg1[6]
        
        if (ecx != 0)
            if (*(eax_3 + 4) != 0)
                sub_6d5159(ecx, *(eax_3 + 4))
            else if ((**(*(eax_3 + 0xc) + 4) & 8) != 0)
                int32_t* ecx_1 = *ecx
                
                if (ecx_1 != 0)
                    int32_t esi_1 = *(*ecx_1 + 8)
                    j_sub_4033e0()
                    esi_1(ecx_1)
        
        result = _free(arg1[6])

fsbase->NtTib.ExceptionList = ExceptionList
return result
