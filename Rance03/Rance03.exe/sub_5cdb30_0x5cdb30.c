// 函数: sub_5cdb30
// 地址: 0x5cdb30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca0f8
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
int32_t var_104 = 0xf
int32_t var_108 = 0
char var_118 = 0
int32_t var_11c = 0xf
int32_t var_120 = 0
char var_130 = 0
var_4.b = 2
*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t esi = **(arg1 + 0x234)
char result = sub_5cea10(arg1, &var_130, "system.GroupSave")

if (result != 0)
    result = sub_5cea10(arg1, &var_118, "system.GroupSave")
    
    if (result != 0)
        result = sub_5cea10(arg1, &var_e8, "system.GroupSave")
        
        if (result != 0)
            if (var_120 != 0)
                int32_t* var_100
                sub_5c0db0(arg1, &var_100)
                var_4.b = 3
                void var_d0
                
                if (sub_605570(&var_100) == 0)
                    int32_t* eax_9 = &var_100
                    int32_t var_ec
                    
                    if (var_ec u>= 0x10)
                        eax_9 = var_100
                    
                    sub_401f60(&var_d0, eax_9)
                    var_4.b = 4
                    sub_607ce0(&var_d0)
                    var_4.b = 3
                    sub_401fb0(&var_d0)
                
                char* eax_10 = sub_4028a0(&var_d0, &var_100)
                var_4.b = 5
                void var_b8
                sub_410ad0(eax_10, eax_10, &var_b8, &var_118)
                sub_401fb0(&var_d0)
                char var_139_1 = 1
                int32_t var_138 = 0
                struct sys43vm::CGlobalSaver::VTable* var_a0
                sub_5b9d10(&var_a0, arg1 + 0x30)
                var_4.b = 8
                void var_54
                sub_401ff0(&var_54, &var_130, 0, 0xffffffff)
                char var_3c_1 = 1
                char eax_13 =
                    sub_5ba010(&var_a0, &var_e8, &var_b8, &var_138, arg1 + 0x48, arg1 + 0x16c)
                char temp0_1 = eax_13
                eax_13 = neg.b(eax_13)
                char var_139_2 = var_139_1 & sbb.b(eax_13, eax_13, temp0_1 != 0)
                int32_t eax_14
                int32_t ecx_17
                int32_t edx_4
                eax_14, ecx_17, edx_4 = sub_5d7430(arg1 + 0x16c, esi, ebp, var_138)
                
                if (eax_14.b != 0)
                    int32_t eax_15
                    eax_15.b = var_139_2 != 0
                    sub_5ddf10(arg1 + 0x220, eax_15)
                else
                    int32_t var_158_8 = ebp
                    int32_t var_15c_7 = esi
                    char const* const var_160_6 = "Page = %d, Index = %d"
                    sub_5c2400(eax_14, edx_4, ecx_17, arg1, "system.GroupSave")
                
                sub_5b9e00(&var_a0)
                sub_401fb0(&var_b8)
                result = sub_401fb0(&var_100)
            else
                int32_t eax_7
                int32_t ecx_3
                int32_t edx_1
                eax_7, ecx_3, edx_1 = sub_5d7430(arg1 + 0x16c, esi, ebp, 0)
                
                if (eax_7.b != 0)
                    result = sub_5ddf10(arg1 + 0x220, 0)
                else
                    int32_t var_158_1 = ebp
                    int32_t var_15c_4 = esi
                    char const* const var_160_2 = "Page = %d, Index = %d"
                    result = sub_5c2400(eax_7, edx_1, ecx_3, arg1, "system.GroupSave")

if (var_11c u>= 0x10)
    result = j__free(var_130.d)

int32_t var_11c_1 = 0xf
int32_t var_120_1 = 0
var_130 = 0

if (var_104 u>= 0x10)
    result = j__free(var_118.d)

int32_t var_104_1 = 0xf
int32_t var_108_1 = 0
var_118 = 0

if (var_d4 u>= 0x10)
    result = j__free(var_e8.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_140)
return result
