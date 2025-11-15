// 函数: sub_688e50
// 地址: 0x688e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_6c = 0xffffffff
int32_t (* var_70)(void* arg1) = sub_747128
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char const* const var_68
int32_t var_180 = __security_cookie ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 4) = 0

char const* const var_30 = "POSITION"
int32_t var_2c = 0
int32_t var_28 = 2
int32_t var_24 = 0
int32_t var_20 = 0xffffffff
int32_t var_1c = 0
int32_t var_18 = 0
char const* const var_4c = "POSITION"
int32_t var_48 = 0
int32_t var_44 = 6
int32_t var_40 = 0
int32_t var_3c = 0xffffffff
int32_t var_38 = 0
int32_t var_34 = 0
var_68 = "NORMAL"
int32_t var_64 = 0
int32_t var_60 = 6
int32_t var_5c = 0
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_50 = 0
char const* const var_90 = "TANGENT"
int32_t var_8c = 0
int32_t var_88 = 6
int32_t var_84 = 0
int32_t var_80 = 0xffffffff
int32_t var_7c = 0
int32_t var_78 = 0
char const* const var_ac = "TEXCOORD"
int32_t var_a8 = 0
int32_t var_a4 = 0x10
int32_t var_a0 = 0
int32_t var_9c = 0xffffffff
int32_t var_98 = 0
int32_t var_94 = 0
char const* const var_c8 = "TEXCOORD"
int32_t var_c4 = 1
int32_t var_c0 = 0x10
int32_t var_bc = 0
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int32_t var_b0 = 0
char* var_e4 = "TEXCOORD"
int32_t var_e0 = 2
int32_t var_dc = 0x10
int32_t var_d8 = 0
int32_t var_d4 = 0xffffffff
int32_t var_d0 = 0
int32_t var_cc = 0
char* var_100 = "COLOR"
int32_t var_fc = 0
int32_t var_f8 = 0x1c
int32_t var_f4 = 0
int32_t var_f0 = 0xffffffff
int32_t var_ec = 0
int32_t var_e8 = 0
char* var_11c = "COLOR"
int32_t var_118 = 1
int32_t var_114 = 0x1c
int32_t var_110 = 0
int32_t var_10c = 0xffffffff
int32_t var_108 = 0
int32_t var_104 = 0
char* var_138 = "BLENDINDICES"
int32_t var_134 = 0
int32_t var_130 = 0x1e
int32_t var_12c = 0
int32_t var_128 = 0xffffffff
int32_t var_124 = 0
int32_t var_120 = 0
char* var_154 = "BLENDWEIGHT"
int32_t var_150 = 0
int32_t var_14c = 2
int32_t var_148 = 0
int32_t var_144 = 0xffffffff
int32_t var_140 = 0
int32_t var_13c = 0
char* var_170 = "BLENDINDICES"
int32_t var_16c = 1
int32_t var_168 = 0x2b
int32_t var_164 = 0
int32_t edx = 0
int32_t var_160 = 0xffffffff
void* ebx_1 = nullptr
int32_t var_15c = 0
int32_t var_158 = 0
void* var_10 = nullptr
int32_t var_c = 0
int32_t var_8 = 0
int32_t var_6c_1 = 0
int32_t* esi = *arg2
int32_t edi_1 = arg2[1]
int32_t result

if (esi != edi_1)
    do
        result = *esi
        
        if (result u> 0xb)
            ebx_1 = var_10
            result.b = 0
            goto label_68921f
        
        char const* const* eax_4
        
        switch (result)
            case 0
                eax_4 = &var_30
            case 1
                eax_4 = &var_4c
            case 2
                eax_4 = &var_68
            case 3
                eax_4 = &var_90
            case 4
                eax_4 = &var_100
            case 5
                eax_4 = &var_11c
            case 6
                eax_4 = &var_ac
            case 7
                eax_4 = &var_c8
            case 8
                eax_4 = &var_e4
            case 9
                eax_4 = &var_138
            case 0xa
                eax_4 = &var_154
            case 0xb
                eax_4 = &var_170
        
        sub_6892a0(&var_10, eax_4)
        esi = &esi[1]
    while (esi != edi_1)
    
    edx = var_c
    ebx_1 = var_10

if ((*(*arg5 + 0x2c))(arg5, ebx_1, (edx - ebx_1) s/ 0x1c, arg3, arg4, arg1 + 4) s>= 0)
    result.b = 1
else
    result.b = 0

label_68921f:
arg2:3.b = result.b

if (ebx_1 != 0)
    sub_403160(ebx_1, (var_8 - ebx_1) s/ 0x1c, 0x1c)
    result.b = arg2:3.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
