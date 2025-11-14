// 函数: sub_4065e0
// 地址: 0x4065e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3036
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_edi
int32_t var_10c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
var_fc = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_40d770(arg2)
else
    void var_f8
    (*(*ecx + 0xc))(&var_f8, arg3)
    int32_t var_4 = 0
    int32_t var_f4
    
    if (var_f4 - 0xe u<= 3 || var_f4 - 0x16 u<= 3 || var_f4 == 0x1e || var_f4 == 0x20
            || var_f4 == 0x32 || var_f4 == 0x34)
        void var_84
        (*(**(arg1 + 8) + 0xc))(&var_84, arg3)
        var_4.b = 1
        int32_t var_80
        
        if (var_80 == 0xa || var_80 == 2 || var_80 == 0x12)
            int32_t eax_10 = sub_421e40(&var_84)
            int32_t var_94
            int32_t var_90
            
            if (eax_10 s< 0)
                sub_40d770(arg2)
            else if (eax_10 u>= (var_90 - var_94) s/ 0x74)
                sub_40d770(arg2)
            else
                sub_40db10(arg2, eax_10 * 0x74 + var_94)
        else
            sub_40d770(arg2)
        
        sub_405be0(&var_84)
        sub_405be0(&var_f8)
    else
        sub_40d770(arg2)
        sub_405be0(&var_f8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return arg2
