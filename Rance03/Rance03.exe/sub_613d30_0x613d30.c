// 函数: sub_613d30
// 地址: 0x613d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd8d5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_19c
int32_t eax_2 = __security_cookie ^ &var_19c
int32_t __saved_edi
int32_t var_1ac = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_164 = 0xf
int32_t var_168 = 0
char var_178 = 0
int32_t var_4 = 0
int32_t var_17c = 0xf
int32_t var_180 = 0
char var_190 = 0
int32_t eax_6 = arg2 & 3
var_4.b = 1
int32_t ebx
int32_t var_1b0_10
char var_160

if (eax_6 == 1)
    char var_118
    sub_401f60(&var_118, "vs.fx")
    var_4.b = 2
    char var_e8
    char* eax_15 = sub_6108a0(&var_e8, &var_118)
    
    if (&var_178 != eax_15)
        if (var_164 u>= 0x10)
            j__free(var_178.d)
        
        var_164 = 0xf
        int32_t var_168_2 = 0
        var_178 = 0
        sub_4030b0(&var_178, eax_15)
    
    int32_t var_d4
    
    if (var_d4 u>= 0x10)
        j__free(var_e8.d)
    
    var_4.b = 1
    int32_t var_d4_1 = 0xf
    int32_t var_d8_1 = 0
    var_e8 = 0
    int32_t var_104
    
    if (var_104 u>= 0x10)
        j__free(var_118.d)
    
    int32_t var_104_1 = 0xf
    int32_t var_108_1 = 0
    var_118 = 0
    int32_t var_28
    sub_401f60(&var_28, "shader_vs_output.fx")
    var_4.b = 3
    char var_b8
    char* eax_16 = sub_6108a0(&var_b8, &var_28)
    
    if (&var_190 != eax_16)
        if (var_17c u>= 0x10)
            j__free(var_190.d)
        
        var_17c = 0xf
        int32_t var_180_3 = 0
        var_190 = 0
        sub_4030b0(&var_190, eax_16)
    
    int32_t var_a4
    
    if (var_a4 u>= 0x10)
        j__free(var_b8.d)
    
    var_4.b = 1
    int32_t var_a4_1 = 0xf
    int32_t var_a8_1 = 0
    var_b8 = 0
    int32_t var_14
    
    if (var_14 u< 0x10)
        goto label_61431c
    
    var_1b0_10 = var_28
label_61430e:
    j__free(var_1b0_10)
label_61431c:
    
    if (sub_615180(&var_178, arg1) != 0)
        char var_195 = 0
        sub_414b60(arg1, &var_195)
        var_160.d = 0
        int32_t var_15c_1 = 0
        int32_t var_158_1 = 0
        var_4.b = 9
        bool eax_9 = sub_615180(&var_190, &var_160)
        int32_t* esi_6 = var_160.d
        
        if (eax_9 != 0)
            int32_t var_194
            int32_t var_1b0_35 = var_194
            sub_617bb0(arg1, *arg1, esi_6, var_15c_1)
            ebx.b = 1
        else
            ebx.b = 0
        
        if (esi_6 != 0)
            j__free(esi_6)
    else
        ebx.b = 0
else
    if (eax_6 == 2)
        int32_t eax_8
        eax_8.b = ((arg2 u>> 0xe).b & 1) s> 0
        
        if (eax_8.b == 0)
            char var_130
            sub_401f60(&var_130, "vs_shadowmap.fx")
            var_4.b = 5
            char var_a0
            sub_408340(&var_178, sub_6109d0(&var_a0, &var_130))
            int32_t var_8c
            
            if (var_8c u>= 0x10)
                j__free(var_a0.d)
            
            var_4.b = 1
            int32_t var_8c_1 = 0xf
            int32_t var_90_1 = 0
            var_a0 = 0
            int32_t var_11c
            
            if (var_11c u>= 0x10)
                j__free(var_130.d)
            
            int32_t var_11c_1 = 0xf
            int32_t var_120_1 = 0
            var_130 = 0
        else
            char var_148
            sub_401f60(&var_148, "vs_shadowmap_blend.fx")
            var_4.b = 4
            char var_88
            sub_408340(&var_178, sub_6109d0(&var_88, &var_148))
            int32_t var_74
            
            if (var_74 u>= 0x10)
                j__free(var_88.d)
            
            var_4.b = 1
            int32_t var_74_1 = 0xf
            int32_t var_78_1 = 0
            var_88 = 0
            int32_t var_134
            
            if (var_134 u>= 0x10)
                j__free(var_148.d)
            
            int32_t var_134_1 = 0xf
            int32_t var_138_1 = 0
            var_148 = 0
        
        int32_t var_40
        sub_401f60(&var_40, "shader_vs_output.fx")
        var_4.b = 6
        char var_70
        char* eax_14 = sub_6109d0(&var_70, &var_40)
        
        if (&var_190 != eax_14)
            if (var_17c u>= 0x10)
                j__free(var_190.d)
            
            var_17c = 0xf
            int32_t var_180_2 = 0
            var_190 = 0
            sub_4030b0(&var_190, eax_14)
        
        int32_t var_5c
        
        if (var_5c u>= 0x10)
            j__free(var_70.d)
        
        var_4.b = 1
        int32_t var_5c_1 = 0xf
        int32_t var_60_1 = 0
        var_70 = 0
        int32_t var_2c
        
        if (var_2c u< 0x10)
            goto label_61431c
        
        var_1b0_10 = var_40
        goto label_61430e
    
    if (eax_6 == 3)
        sub_401f60(&var_160, "shader_vs.fx")
        var_4.b = 7
        char var_100
        char* eax_10 = sub_610b00(&var_100, &var_160)
        
        if (&var_178 != eax_10)
            if (var_164 u>= 0x10)
                j__free(var_178.d)
            
            var_164 = 0xf
            int32_t var_168_1 = 0
            var_178 = 0
            sub_4030b0(&var_178, eax_10)
        
        int32_t var_ec
        
        if (var_ec u>= 0x10)
            j__free(var_100.d)
        
        var_4.b = 1
        int32_t var_ec_1 = 0xf
        int32_t var_f0_1 = 0
        var_100 = 0
        int32_t var_14c
        
        if (var_14c u>= 0x10)
            j__free(var_160.d)
        
        int32_t var_14c_1 = 0xf
        int32_t var_150_1 = 0
        var_160 = 0
        int32_t var_58
        sub_401f60(&var_58, "shader_vs_output.fx")
        var_4.b = 8
        char var_d0
        char* eax_11 = sub_610b00(&var_d0, &var_58)
        
        if (&var_190 != eax_11)
            if (var_17c u>= 0x10)
                j__free(var_190.d)
            
            var_17c = 0xf
            int32_t var_180_1 = 0
            var_190 = 0
            sub_4030b0(&var_190, eax_11)
        
        int32_t var_bc
        
        if (var_bc u>= 0x10)
            j__free(var_d0.d)
        
        var_4.b = 1
        int32_t var_bc_1 = 0xf
        int32_t var_c0_1 = 0
        var_d0 = 0
        int32_t var_44
        
        if (var_44 u< 0x10)
            goto label_61431c
        
        var_1b0_10 = var_58
        goto label_61430e
    
    ebx.b = 0

if (var_17c u>= 0x10)
    j__free(var_190.d)

int32_t var_17c_1 = 0xf
int32_t var_180_4 = 0
var_190 = 0

if (var_164 u>= 0x10)
    j__free(var_178.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_19c)
return ebx.b
