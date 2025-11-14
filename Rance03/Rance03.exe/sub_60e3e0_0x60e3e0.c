// 函数: sub_60e3e0
// 地址: 0x60e3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd31b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_180 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 4) = 0

char const* const var_7c = "POSITION"
int32_t var_78 = 0
int32_t var_74 = 2
int32_t var_70 = 0
int32_t var_6c = 0xffffffff
int32_t var_68 = 0
int32_t var_64 = 0
char const* const var_124 = "POSITION"
int32_t var_120 = 0
int32_t var_11c = 6
int32_t var_118 = 0
int32_t var_114 = 0xffffffff
int32_t var_110 = 0
int32_t var_10c = 0
char const* const var_44 = "NORMAL"
int32_t var_40 = 0
int32_t var_3c = 6
int32_t var_38 = 0
int32_t var_34 = 0xffffffff
int32_t var_30 = 0
int32_t var_2c = 0
char const* const var_ec = "TANGENT"
int32_t var_e8 = 0
int32_t var_e4 = 6
int32_t var_e0 = 0
int32_t var_dc = 0xffffffff
int32_t var_d8 = 0
int32_t var_d4 = 0
char const* const var_15c = "TEXCOORD"
int32_t var_158 = 0
int32_t var_154 = 0x10
int32_t var_150 = 0
int32_t var_14c = 0xffffffff
int32_t var_148 = 0
int32_t var_144 = 0
char const* const var_b4 = "TEXCOORD"
int32_t var_b0 = 1
int32_t var_ac = 0x10
int32_t var_a8 = 0
int32_t var_a4 = 0xffffffff
int32_t var_a0 = 0
int32_t var_9c = 0
char* var_140 = "TEXCOORD"
int32_t var_13c = 2
int32_t var_138 = 0x10
int32_t var_134 = 0
int32_t var_130 = 0xffffffff
int32_t var_12c = 0
int32_t var_128 = 0
char* var_108 = "COLOR"
int32_t var_104 = 0
int32_t var_100 = 0x1c
int32_t var_fc = 0
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
int32_t var_f0 = 0
char* var_d0 = "COLOR"
int32_t var_cc = 1
int32_t var_c8 = 0x1c
int32_t var_c4 = 0
int32_t var_c0 = 0xffffffff
int32_t var_bc = 0
int32_t var_b8 = 0
char* var_98 = "BLENDINDICES"
int32_t var_94 = 0
int32_t var_90 = 0x1e
int32_t var_8c = 0
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0
char* var_60 = "BLENDWEIGHT"
int32_t var_5c = 0
int32_t var_58 = 2
int32_t var_54 = 0
int32_t var_50 = 0xffffffff
int32_t var_4c = 0
int32_t var_48 = 0
char* var_28 = "BLENDINDICES"
int32_t var_24 = 1
int32_t var_20 = 0x2b
int32_t var_1c = 0
int32_t ebx_1 = 0
int32_t var_18 = 0xffffffff
int32_t edi = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_16c = 0
int32_t var_168 = 0
int32_t var_164 = 0
int32_t var_4 = 0
int32_t* i = *arg2
int32_t result

if (i != arg2[1])
    do
        result = *i
        
        if (result u> 0xb)
            edi = var_16c
            ebx_1.b = 0
            goto label_60e886
        
        char const* const* eax_4
        
        switch (result)
            case 0
                eax_4 = &var_7c
            case 1
                eax_4 = &var_124
            case 2
                eax_4 = &var_44
            case 3
                eax_4 = &var_ec
            case 4
                eax_4 = &var_108
            case 5
                eax_4 = &var_d0
            case 6
                eax_4 = &var_15c
            case 7
                eax_4 = &var_b4
            case 8
                eax_4 = &var_140
            case 9
                eax_4 = &var_98
            case 0xa
                eax_4 = &var_60
            case 0xb
                eax_4 = &var_28
        
        sub_60e8f0(&var_16c, eax_4)
        i = &i[1]
    while (i != arg2[1])
    
    ebx_1 = var_168
    edi = var_16c

if ((*(*arg5 + 0x2c))(arg5, edi, (ebx_1 - edi) s/ 0x1c, arg3, arg4, arg1 + 4) s>= 0)
    ebx_1.b = 1
else
    ebx_1.b = 0

label_60e886:

if (edi != 0)
    j__free(edi)

result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
