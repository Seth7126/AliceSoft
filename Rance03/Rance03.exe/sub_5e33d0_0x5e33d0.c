// 函数: sub_5e33d0
// 地址: 0x5e33d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6caf6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t __saved_edi
int32_t var_a8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (sub_5e3dd0(arg1) != 0)
    if (sub_5e8030(arg1 + 0x148) == 0)
        result = false
    else
        if (arg2 != 0 && *(arg1 + 0x1b1) != 0)
            sub_5e5610(arg1 + 0x148)
        
        sub_5ec4b0(arg1 + 0x3bc)
        result = sub_5eaf60(arg1 + 0x450, *(arg1 + 0x14))
        
        if (result == 0)
            result = false
        else
            int32_t* ecx_4 = *(arg1 + 0x454)
            
            if (ecx_4 != 0)
                result = (*(*ecx_4 + 8))(arg1, arg1 + 4)
            
            if (ecx_4 == 0 || result == 0)
                sub_5e3fa0(arg1)
                result = false
            else
                if (arg2 != 0)
                    if (*(arg1 + 0x144) == 0 && sub_43afd0() == 0)
                        sub_64b6b0(0x6eb040)
                    
                    if (*(arg1 + 0x144) != 0)
                        void var_2c
                        int32_t* eax_8 = sub_5e4660(arg1, &var_2c)
                        int32_t var_4 = 0
                        void var_5c
                        char* eax_9 = sub_5e4950(arg1, &var_5c)
                        var_4.b = 1
                        void var_74
                        char* eax_10 = sub_410a80(eax_9.b, eax_9, &var_74, " [ ")
                        var_4.b = 2
                        void var_8c
                        char* eax_11 = sub_410a20(eax_10, eax_10, &var_8c, eax_8)
                        var_4.b = 3
                        void var_44
                        char* lpString = sub_410a80(eax_11.b, eax_11, &var_44, " ]")
                        HWND* ecx_11 = *(arg1 + 0x154)
                        
                        if (*ecx_11 != 0)
                            if (*(lpString + 0x14) u>= 0x10)
                                lpString = *lpString
                            
                            SetWindowTextA(*ecx_11, lpString)
                        
                        sub_401fb0(&var_44)
                        sub_401fb0(&var_8c)
                        sub_401fb0(&var_74)
                        sub_401fb0(&var_5c)
                        int32_t var_4_1 = 0xffffffff
                        sub_401fb0(&var_2c)
                
                if (*(arg1 + 0x3b8) == 0 && *(arg1 + 0x144) != 0)
                    sub_5e0a80(arg1 + 0x470)
                    
                    if (arg2 != 0)
                        int32_t var_4_2 = 4
                        sub_5e59b0(arg1 + 0x148, sub_5e0f20(arg1 + 0x470, &var_98))
                        sub_410440(&var_98)
                
                result = true
else
    sub_64b530(0x6eaf94)
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_98)
return result
