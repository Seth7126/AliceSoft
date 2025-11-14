// 函数: sub_4063a0
// 地址: 0x4063a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2ff1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_130
int32_t eax_2 = __security_cookie ^ &var_130
int32_t __saved_edi
int32_t var_13c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_12c = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_40d770(arg2)
else
    void var_110
    (*(*ecx + 0xc))(&var_110, arg3)
    int32_t var_c_1 = 0
    int32_t var_10c
    
    if (var_10c == 0xd || var_10c == 0x15)
        var_c_1.b = 1
        void var_98
        void** eax_9 = (*(**(arg1 + 8) + 0xc))(&var_98, 0) + 0x24
        int32_t var_114_1 = 0xf
        int32_t var_118_1 = 0
        char var_128 = 0
        sub_401ff0(&var_128, eax_9, 0, 0xffffffff)
        var_c_1.b = 3
        sub_405be0(&var_98)
        int32_t* esi_1
        int32_t* var_ac
        
        if (var_118_1 != 0)
            esi_1 = var_ac
        int32_t var_a8
        
        if (var_118_1 == 0 || esi_1 == var_a8)
        label_40649a:
            sub_40d770(arg2)
        else
            while (true)
                if (sub_4058a0(&esi_1[9], &var_128) != 0)
                    sub_40db10(arg2, esi_1)
                    break
                
                esi_1 = &esi_1[0x1d]
                
                if (esi_1 == var_a8)
                    goto label_40649a
        
        if (var_114_1 u>= 0x10)
            j__free(var_128.d)
        
        int32_t var_114_2 = 0xf
        int32_t var_118_2 = 0
        var_128 = 0
        sub_405be0(&var_110)
    else
        sub_40d770(arg2)
        sub_405be0(&var_110)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_130)
return arg2
