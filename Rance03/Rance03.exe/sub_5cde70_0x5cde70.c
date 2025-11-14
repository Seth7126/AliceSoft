// 函数: sub_5cde70
// 地址: 0x5cde70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca17d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_140
int32_t eax_2 = __security_cookie ^ &var_140
int32_t __saved_edi
int32_t var_154 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_d4 = 0xf
int32_t var_d8 = 0
char var_e8 = 0
int32_t var_4 = 0
int32_t var_11c = 0xf
int32_t var_120 = 0
char var_130 = 0
int32_t var_104 = 0xf
int32_t var_108 = 0
char var_118 = 0
var_4.b = 2
*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t eax_7 = **(arg1 + 0x234)
char result = sub_5cea10(arg1, &var_118, "system.GroupSave")

if (result != 0)
    result = sub_5cea10(arg1, &var_130, "system.GroupLoad")
    
    if (result != 0)
        result = sub_5cea10(arg1, &var_e8, "system.GroupLoad")
        
        if (result != 0)
            char var_100
            sub_5c0db0(arg1, &var_100)
            var_4.b = 3
            int32_t var_b8
            char* eax_8 = sub_4028a0(&var_b8, &var_100)
            var_4.b = 4
            char var_d0
            sub_410ad0(eax_8, eax_8, &var_d0, &var_130)
            int32_t var_a4
            
            if (var_a4 u>= 0x10)
                j__free(var_b8)
            
            char var_139_1 = 1
            int32_t var_138 = 0
            void var_a0
            sub_5b6da0(&var_a0, arg1 + 0x30)
            var_4.b = 7
            void var_54
            sub_401ff0(&var_54, &var_118, 0, 0xffffffff)
            char var_3c_1 = 1
            void* var_158_5 = arg1 + 0x16c
            void* var_15c_3 = arg1 + 0x48
            char eax_11 = sub_5b7080(&var_a0, &var_e8, &var_d0, &var_138)
            char temp0_1 = eax_11
            eax_11 = neg.b(eax_11)
            char var_139_2 = var_139_1 & sbb.b(eax_11, eax_11, temp0_1 != 0)
            int32_t eax_12
            int32_t ecx_9
            int32_t edx_3
            eax_12, ecx_9, edx_3 = sub_5d7430(arg1 + 0x16c, eax_7, ebp, var_138)
            
            if (eax_12.b != 0)
                int32_t eax_13
                eax_13.b = var_139_2 != 0
                sub_5ddf10(arg1 + 0x220, eax_13)
            else
                int32_t var_158_7 = ebp
                int32_t var_15c_5 = eax_7
                char const* const var_160_4 = "Page = %d, Index = %d"
                sub_5c2400(eax_12, edx_3, ecx_9, arg1, "system.GroupLoad")
            
            result = sub_5b6e90(&var_a0)
            int32_t var_bc
            
            if (var_bc u>= 0x10)
                result = j__free(var_d0.d)
            
            int32_t var_bc_1 = 0xf
            int32_t var_c0_1 = 0
            var_d0 = 0
            int32_t var_ec
            
            if (var_ec u>= 0x10)
                result = j__free(var_100.d)
            
            int32_t var_ec_1 = 0xf
            int32_t var_f0_1 = 0
            var_100 = 0

if (var_104 u>= 0x10)
    result = j__free(var_118.d)

int32_t var_104_1 = 0xf
int32_t var_108_1 = 0
var_118 = 0

if (var_11c u>= 0x10)
    result = j__free(var_130.d)

int32_t var_11c_1 = 0xf
int32_t var_120_1 = 0
var_130 = 0

if (var_d4 u>= 0x10)
    result = j__free(var_e8.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_140)
return result
