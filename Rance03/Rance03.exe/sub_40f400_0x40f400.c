// 函数: sub_40f400
// 地址: 0x40f400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6b3862
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_174
int32_t eax_2 = __security_cookie ^ &var_174
int32_t __saved_edi
int32_t var_184 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_148 = 0

if (*(arg1 + 0x70) != 0)
    int32_t var_130_1 = 0xf
    int32_t var_134_1 = 0
    char var_144 = 0
    int32_t var_44_1 = 0
    char const* const var_18c
    int32_t var_12c
    int32_t var_114
    
    switch (*(arg1 + 4) - 0x12)
        case 0, 1, 0x21
            int32_t var_188_1 = *(arg1 + 0x40)
            var_18c = *(arg1 + 0x3c)
            sub_408340(&var_144, sub_4691f0(&var_114, "Pointer(%d, %d) -> "))
            int32_t var_100
            
            if (var_100 u>= 0x10)
                j__free(var_114)
        case 2, 3, 4, 5, 6, 7, 0x22, 0x31
            int32_t var_188_4 = *(arg1 + 0x3c)
            var_18c = "Pointer(%d) -> "
            sub_408340(&var_144, sub_4691f0(&var_12c, "Pointer(%d) -> "))
            int32_t var_118
            
            if (var_118 u>= 0x10)
                j__free(var_12c)
    
    char* eax_11 = *(arg1 + 4) - 2
    
    if (eax_11 u> 0x41)
    label_40f75e:
        sub_410930(eax_11, &var_144, arg2, U"?")
        
        if (var_130_1 u>= 0x10)
            j__free(var_144.d)
    else
        eax_11 = zx.d(*(eax_11 + &lookup_table_40f804))
        
        switch (eax_11)
            case nullptr
                int32_t var_188_6 = *(arg1 + 0x44)
                int32_t* eax_12 = sub_4691f0(&var_12c, 0x6da1fc)
                var_44_1.b = 1
                sub_410b00(eax_12, &var_144, arg2, eax_12)
                sub_401fb0(&var_12c)
                sub_401fb0(&var_144)
            case 1
                var_18c.q = _mm_cvtps_pd(*(arg1 + 0x48))
                int32_t* eax_13 = sub_4691f0(&var_114, 0x6da210)
                var_44_1.b = 2
                sub_410b00(eax_13, &var_144, arg2, eax_13)
                sub_401fb0(&var_114)
                sub_401fb0(&var_144)
            case 2
                void var_fc
                int32_t* eax_14 = sub_410930(eax_11, &var_144, &var_fc, U""")
                var_44_1.b = 3
                void var_b4
                char* eax_15 = sub_410ad0(eax_14, eax_14, &var_b4, arg1 + 0x4c)
                var_44_1.b = 4
                sub_410a80(eax_15.b, eax_15, arg2, U"""")
                sub_401fb0(&var_b4)
                sub_401fb0(&var_fc)
                sub_401fb0(&var_144)
            case 3
                if (arg4 s> arg3)
                    sub_410930(eax_11, &var_144, arg2, "{...}")
                    sub_401fb0(&var_144)
                else
                    void var_e4
                    char* eax_16 = sub_40f850(eax_11, arg1 + 0x64, &var_e4, arg3, arg4)
                    var_44_1.b = 5
                    sub_410b00(eax_16, &var_144, arg2, eax_16)
                    sub_401fb0(&var_e4)
                    sub_401fb0(&var_144)
            case 4
                if (arg4 s> arg3)
                    sub_410930(eax_11, &var_144, arg2, "{...}")
                    sub_401fb0(&var_144)
                else
                    void var_cc
                    char* eax_17 = sub_40fc40(eax_11, arg1 + 0x64, &var_cc, arg3, arg4)
                    var_44_1.b = 6
                    sub_410b00(eax_17, &var_144, arg2, eax_17)
                    sub_401fb0(&var_cc)
                    sub_401fb0(&var_144)
            case 5
                eax_11 = "true"
                
                if (*(arg1 + 0x44) == 0)
                    eax_11 = "false"
                
                sub_410930(eax_11, &var_144, arg2, eax_11)
                sub_401fb0(&var_144)
            case 6
                eax_11 = *(arg1 + 0x44)
                
                if (eax_11 s< 0)
                    sub_410930(eax_11, &var_144, arg2, "[]")
                    sub_401fb0(&var_144)
                else
                    char* var_188_12 = eax_11
                    void var_9c
                    int32_t* eax_18 = sub_4691f0(&var_9c, "[%d]")
                    var_44_1.b = 7
                    sub_410b00(eax_18, &var_144, arg2, eax_18)
                    sub_401fb0(&var_9c)
                    sub_401fb0(&var_144)
            case 7
                goto label_40f75e
else
    sub_401f60(arg2, U"?")

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_174)
return arg2
