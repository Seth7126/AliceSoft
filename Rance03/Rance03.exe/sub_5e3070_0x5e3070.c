// 函数: sub_5e3070
// 地址: 0x5e3070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6caf11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = __security_cookie ^ &var_ac
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = arg2
arg1[0x3b8] = 0
sub_5e38f0(arg1, arg3)
bool result

if (sub_5e3b60(arg1) == 0)
    result = false
else
    int32_t var_a4
    sub_401f60(&var_a4, (*(*(arg1 + 0x18) + 0xc))(eax_4))
    int32_t var_4 = 0
    int32_t var_4_1 = 0xffffffff
    int32_t ebx
    ebx.b = sub_5e3c80(arg1, &var_a4) == 0
    int32_t var_90
    
    if (var_90 u>= 0x10)
        j__free(var_a4)
    
    if (ebx.b != 0)
        result = false
    else
        sub_401f60(&var_a4, (*(*(arg1 + 0x18) + 4))())
        int32_t var_4_2 = 1
        sub_5ea970(&arg1[0x3c8], &var_a4)
        int32_t var_4_3 = 0xffffffff
        
        if (var_90 u>= 0x10)
            j__free(var_a4)
        
        int32_t var_2c
        sub_401f60(&var_2c, (*(*(arg1 + 0x18) + 4))())
        int32_t var_4_4 = 2
        sub_401ff0(&data_74f9cc, &var_2c, 0, 0xffffffff)
        int32_t var_4_5 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        char eax_13
        
        if (arg1[0x3b8] == 0)
            eax_13 = sub_697d20(&arg1[8], &arg1[0x70])
        
        if (arg1[0x3b8] != 0 || eax_13 != 0)
            sub_5f4b20()
            void* eax_16 = *(arg1 + 0x2e8)
            
            if (eax_16 != 0)
                *(*(eax_16 + 4) + 4) = arg1[0xd0]
            
            *(arg1 + 0x39c) = arg1
            *(arg1 + 0x394) = arg1
            char var_8c
            sub_401f60(&var_8c, (*(*(arg1 + 0x18) + 0x18))())
            int32_t var_4_6 = 3
            var_4_6.b = 4
            char var_44[0x10]
            void* eax_22 = (*(*(arg1 + 0x3c8) + 8))(sub_4028a0(&var_44, &var_8c))
            char var_74
            void** eax_23 = sub_421670(eax_22.b, eax_22, &var_74)
            var_4_6.b = 5
            int32_t var_c4_14 = 0
            var_4_6.b = 6
            char var_5c
            void* ebx_1
            ebx_1.b =
                sub_5e4f80(&arg1[0x148], arg2, 0x400, 0x300, sub_5e4950(arg1, &var_5c), eax_23) == 0
            int32_t var_48
            
            if (var_48 u>= 0x10)
                j__free(var_5c.d)
            
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            int32_t var_60
            
            if (var_60 u>= 0x10)
                j__free(var_74.d)
            
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            var_74 = 0
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44[0].d)
            
            int32_t var_4_7 = 0xffffffff
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            var_44[0] = 0
            int32_t var_78
            
            if (var_78 u>= 0x10)
                j__free(var_8c.d)
            
            int32_t var_78_1 = 0xf
            int32_t var_7c_1 = 0
            var_8c = 0
            
            if (ebx_1.b != 0)
                result = false
            else if (sub_5e33d0(arg1, 1) == 0)
                result = false
            else
                arg1[0x10] = 1
                result = true
        else
            int32_t var_c4_10 = (*(*(arg1 + 0x18) + 4))()
            sub_64b530(0x6eafbc)
            result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ac)
return result
