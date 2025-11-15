// 函数: sub_687960
// 地址: 0x687960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (arg1[9] == 0)
    result = false
else
    (*(*arg1 + 8))(eax_2)
    int32_t* ecx = arg1[0xb0]
    int32_t var_48 = 0
    (*(*ecx + 4))(0, &var_48)
    int32_t edi_1
    
    switch (var_48)
        case 1
            edi_1 = 2
        case 2
            edi_1 = 4
        case 3
            edi_1 = 8
        case 4
            edi_1 = 0x10
        default
            edi_1 = 0
    
    int32_t* ecx_1 = arg1[0xb0]
    int32_t var_4c = 0
    (*(*ecx_1 + 4))(1, &var_4c)
    
    if (sub_684f10(&arg1[0xb], arg1[9], arg1[6], arg1[7], edi_1, var_4c == 1) == 0)
        result = false
    else if (sub_692460(&arg1[0x5d], arg1[0xa], arg1) != 0)
        if (sub_693b90(&arg1[0x7b], arg1[0xa], arg1) != 0)
            if (sub_683f90(&arg1[0x9a], arg1[0xd]) == 0)
                result = false
            else
                int32_t var_60_7 = arg1[0xd]
                result = sub_68a9b0(&arg1[0xa2]) != 0
        else
            void var_44
            sub_403360(&var_44, 0x76eef4)
            int32_t var_8_2 = 1
            sub_6c52e0(&var_44)
            sub_403320(&var_44)
            result = false
    else
        void var_2c
        sub_403360(&var_2c, 0x76ef50)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        sub_403320(&var_2c)
        result = false

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
