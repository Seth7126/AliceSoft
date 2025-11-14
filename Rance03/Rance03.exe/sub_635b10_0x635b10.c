// 函数: sub_635b10
// 地址: 0x635b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ce5a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 == 0 || arg2 s< 3)
    result = 0xffffffff
else
    char eax_5 = *arg1
    
    if (eax_5 == 0x50 && arg1[1] == 0x4d)
        result = 0
    else if (eax_5 == 0x42 && arg1[1] == 0x4d)
        result = 1
    else if (eax_5 == 0x51 && arg1[1] == 0x4e && arg1[2] == 0x54)
        result = 2
    else if (eax_5 == 0x41 && arg1[1] == 0x4a && arg1[2] == 0x50)
        result = 4
    else if (arg2 s<= 0xa || eax_5 != 0xff)
    label_635bd9:
        int32_t ecx_2
        
        if (arg2 s> 8)
            int32_t var_24 = 0x474e5089
            int32_t var_20_1 = 0xa1a0a0d
            ecx_2 = 0
            
            while (true)
                int32_t eax_7
                eax_7.b = *(&var_24 + arg1 - &var_24 + ecx_2)
                
                if (eax_7.b != *(&var_24 + ecx_2))
                    break
                
                ecx_2 += 1
                
                if (ecx_2 s>= 8)
                    result = 5
                    goto label_635c72
        
        if (arg2 s> 8 && ecx_2 s>= 8)
            result = 5
        else if (arg1[arg2 - 1] != 0 || arg2 s< 0x12)
            result = 0xffffffff
        else
            void var_3c
            sub_401f60(&var_3c, &arg1[0xffffffee + arg2])
            int32_t var_c_1 = 0
            char eax_10 = sub_40c250(&var_3c, "TRUEVISION-TARGA")
            char eax_11
            
            if (eax_10 == 0)
                eax_11 = sub_40c250(&var_3c, "TRUEVISION-XFILE.")
            
            if (eax_10 != 0 || eax_11 != 0)
                sub_401fb0(&var_3c)
                result = 6
            else
                sub_401fb0(&var_3c)
                result = 0xffffffff
    else
        if (sub_635ca0(arg1) == 0)
            goto label_635bd9
        
        result = 3

label_635c72:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
