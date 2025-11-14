// 函数: sub_548070
// 地址: 0x548070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c371b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_148
int32_t eax_2 = __security_cookie ^ &var_148
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 != 0)
    if (arg2 == 6 && *(arg1 + 0xc) == 0 && *(arg1 + 0xd) == 0 && *(arg1 + 8) s> 0)
        goto label_5480ec
    
    result.b = 1
else if ((*(arg1 + 0xc) != 0 || *(arg1 + 0xd) != 0) && *(arg1 + 8) s> 0)
label_5480ec:
    int32_t* ecx = *(arg1 + 4)
    int32_t __saved_edi
    
    if (ecx == 0)
        result.b = 1
    else if ((*(*ecx + 0x14))(__security_cookie ^ &__saved_edi).b == 0)
        result.b = 1
    else if ((*(**(arg1 + 4) + 0x38))().b == 0)
        result.b = 1
    else
        void var_100
        sub_535530(&var_100)
        int32_t var_c_1 = 0
        void var_140
        sub_5356d0(&var_100, EnumC13Lines::EnumC13Lines(&var_140))
        (*(*arg4 + 0xc4))(zx.d(*(arg1 + 0xc)))
        (*(*arg4 + 0xc8))(zx.d(*(arg1 + 0xd)))
        (*(*arg4 + 0xbc))(0)
        int128_t var_b0_1 = data_709450
        int32_t var_90_1 = 0x3f800000
        char var_b3_1 = 0
        int128_t var_a0_1 = zx.o(0)
        
        if ((*(**(arg1 + 4) + 0x24))().b == 0)
            result.b = 0
        else if (sub_58c7b0(arg3, &var_100).b == 0)
            result.b = 0
        else if ((*(**(arg1 + 4) + 0x34))().b != 0)
            result.b = 1
        else
            result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_148)
return result
