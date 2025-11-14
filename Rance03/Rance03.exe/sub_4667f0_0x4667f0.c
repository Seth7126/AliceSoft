// 函数: sub_4667f0
// 地址: 0x4667f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9054
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t var_b0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x14) == 0
struct _EXCEPTION_REGISTRATION_RECORD*** esi = arg2
var_9c = esi
struct _EXCEPTION_REGISTRATION_RECORD** i

if (not(cond:0) && *(arg1 + 0x20) != 0)
    sub_421cd0(esi, arg1 + 4)
    bool cond:1_1 = *(arg1 + 0x20) == 0
    i = *(arg1 + 0x1c)
    struct _EXCEPTION_REGISTRATION_RECORD* ecx_1 = *i
    *(arg1 + 0x24) = ecx_1
    
    if (not(cond:1_1) && ecx_1 != i)
        for (i = &ecx_1[1]; i != 0; i = sub_4665c0(arg1))
            char eax_6
            
            if (i[7] == 2)
                eax_6 = sub_40c250(&i[1], "#include")
            
            if (i[7] != 2 || eax_6 == 0)
                *(arg1 + 0x24) = **(arg1 + 0x24)
            else
                void* eax_9
                
                if (*(arg1 + 0x20) != 0 && *(arg1 + 0x24) != *(arg1 + 0x1c))
                    eax_9 = **(arg1 + 0x24)
                    *(arg1 + 0x24) = eax_9
                
                int32_t var_88
                void* ebx_2
                
                if (*(arg1 + 0x20) == 0 || *(arg1 + 0x24) == *(arg1 + 0x1c) || *(arg1 + 0x20) == 0
                        || eax_9 == *(arg1 + 0x1c))
                    ebx_2 = nullptr
                label_466af0:
                    sub_401f60(&var_88, "#includ")
                    int32_t var_4_2 = 0
                    sub_456ab0(*(arg1 + 0x28), &var_88, ebx_2)
                    int32_t var_74
                    
                    if (var_74 u>= 0x10)
                        j__free(var_88)
                    
                    i.b = 0
                    goto label_466a22
                
                ebx_2 = eax_9 + 8
                
                if (eax_9 == 0xfffffff8 || *(ebx_2 + 0x1c) != 0x11)
                    goto label_466af0
                
                int32_t var_4 = 1
                void var_70
                void var_2c
                sub_410ad0(ebx_2 + 4, sub_402960(&var_2c, arg1 + 4), &var_70, ebx_2 + 4)
                var_4.b = 3
                sub_401fb0(&var_2c)
                
                if (sub_605500(&var_70) == 0)
                    sub_401f60(&var_88, "#includ")
                    var_4.b = 4
                label_466ac7:
                    sub_456ab0(*(arg1 + 0x28), &var_88, ebx_2)
                    sub_401fb0(&var_88)
                    sub_401fb0(&var_70)
                    i.b = 0
                    goto label_466a22
                
                int32_t esi_1 = esi[1]
                int32_t var_b4_3 = 0.d
                
                if (sub_43d650(&var_70, esi_1, *var_9c, &var_70) != esi_1)
                    sub_401f60(&var_88, "#includ")
                    var_4.b = 5
                    goto label_466ac7
                
                struct exfile::CTokenList::VTable* var_58
                sub_466460(&var_58, *(arg1 + 0x28))
                var_4.b = 6
                sub_466610(&var_58, &var_70)
                esi = var_9c
                
                if (sub_4667f0(esi) == 0)
                    sub_401f60(&var_88, "#includ")
                    var_4.b = 7
                    sub_456ab0(*(arg1 + 0x28), &var_88, ebx_2)
                    sub_401fb0(&var_88)
                    var_4.b = 3
                    sub_466520(&var_58)
                    sub_401fb0(&var_70)
                    i.b = 0
                    goto label_466a22
                
                int32_t* eax_17 = *(*(arg1 + 0x24) + 4)
                *(arg1 + 0x24) = eax_17
                void var_90
                int32_t* eax_19 = *sub_467330(arg1 + 0x1c, &var_90, eax_17)
                *(arg1 + 0x24) = eax_19
                void var_8c
                void* eax_21 = *sub_467330(arg1 + 0x1c, &var_8c, eax_19)
                *(arg1 + 0x24) = eax_21
                void var_94
                int32_t* var_3c
                sub_467860(arg1 + 0x1c, &var_94, eax_21, *var_3c, var_3c)
                var_4.b = 3
                sub_466520(&var_58)
                int32_t var_4_1 = 0xffffffff
                sub_401fb0(&var_70)

i.b = 1
label_466a22:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return i
