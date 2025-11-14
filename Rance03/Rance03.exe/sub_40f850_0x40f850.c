// 函数: sub_40f850
// 地址: 0x40f850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b38dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_120
int32_t eax_2 = __security_cookie ^ &var_120
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t ebx = arg5
int32_t var_114 = ebx
int32_t var_104 = 0
int32_t i_3 = (arg2[1] - *arg2) s/ 0x74

if (i_3 s> 0)
    int32_t edi_1 = 0
    var_120 = 0
    int32_t var_e8
    int32_t var_d4
    void var_88
    void var_84
    
    if (i_3 s> 0)
        int32_t i_2 = i_3
        int32_t ebx_1 = 0
        int32_t i
        
        do
            sub_40db10(&var_88, *arg2 + ebx_1)
            int32_t var_4 = 0
            int32_t var_54
            int32_t var_10c = var_54 + 1 + *(sub_421060(&var_84, &var_e8) + 0x10)
            
            if (var_d4 u>= 0x10)
                j__free(var_e8)
            
            int32_t* eax_13 = &var_10c
            
            if (edi_1 s>= var_10c)
                eax_13 = &var_120
            
            edi_1 = *eax_13
            var_120 = edi_1
            int32_t var_4_1 = 0xffffffff
            sub_405be0(&var_88)
            ebx_1 += 0x74
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = result_1
        ebx = var_114
    
    int32_t var_ec_1 = 0xf
    void* const var_f0_1 = nullptr
    char var_100 = 0
    sub_402110(&var_100, 0x6da240, 2)
    int32_t var_4_2 = 1
    
    if (i_3 s> 0)
        var_120 = ebx + 1
        int32_t ebx_2 = 0
        int32_t i_1
        
        do
            sub_40db10(&var_88, *arg2 + ebx_2)
            var_4_2.b = 2
            sub_4031c0(&var_100, ebx << 2, 0x20)
            char* eax_18 = sub_421060(&var_84, &var_e8)
            var_4_2.b = 3
            char var_b8
            char* eax_19 = sub_410a80(eax_18.b, eax_18, &var_b8, U" ")
            var_4_2.b = 4
            char var_d0
            void* var_64
            sub_410ad0(eax_19, eax_19, &var_d0, &var_64)
            int32_t var_a4
            
            if (var_a4 u>= 0x10)
                j__free(var_b8.d)
            
            var_a4 = 0xf
            int32_t var_a8_1 = 0
            var_b8 = 0
            var_4_2.b = 7
            
            if (var_d4 u>= 0x10)
                j__free(var_e8)
            
            var_d4 = 0xf
            int32_t var_d8_1 = 0
            var_e8.b = 0
            sub_403110(&var_100, &var_d0, nullptr, 0xffffffff)
            int32_t var_c0
            sub_4031c0(&var_100, edi_1 - var_c0, 0x20)
            sub_4057c0(&var_100, 0x6da248, 3)
            var_4_2.b = 8
            int32_t var_a0
            sub_403110(&var_100, sub_40f400(&var_88, &var_a0, arg4, var_120), nullptr, 0xffffffff)
            var_4_2.b = 7
            int32_t var_8c
            
            if (var_8c u>= 0x10)
                j__free(var_a0)
            
            sub_4057c0(&var_100, 0x6da24c, 1)
            int32_t var_bc
            
            if (var_bc u>= 0x10)
                j__free(var_d0.d)
            
            var_bc = 0xf
            var_c0 = 0
            var_d0 = 0
            var_4_2.b = 1
            sub_405be0(&var_88)
            ebx_2 += 0x74
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        result = result_1
    
    if (var_114 s> 0)
        sub_4031c0(&var_100, (var_114 << 2) + 0xfffffffc, 0x20)
    
    sub_4057c0(&var_100, 0x6da250, 1)
    *(result + 0x14) = 0xf
    *(result + 0x10) = 0
    *result = 0
    int32_t ecx_23 = var_ec_1
    
    if (ecx_23 u>= 0x10)
        *result = var_100.d
    else if (var_f0_1 != 0xffffffff)
        _memcpy(result, &var_100, var_f0_1 + 1, eax_4)
        ecx_23 = var_ec_1
    
    *(result + 0x10) = var_f0_1
    *(result + 0x14) = ecx_23
else
    sub_401f60(result, "{ }")

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_120)
return result
