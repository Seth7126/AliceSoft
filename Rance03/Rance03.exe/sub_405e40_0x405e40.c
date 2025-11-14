// 函数: sub_405e40
// 地址: 0x405e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2f2d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_15c
int32_t eax_2 = __security_cookie ^ &var_15c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
var_15c = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_40d770(arg3)
else
    void var_110
    (*(*ecx + 0xc))(&var_110, arg4)
    int32_t var_c_1 = 0
    void var_98
    (*(**(arg1 + 8) + 0xc))(&var_98, arg4)
    var_c_1.b = 1
    int32_t var_10c
    
    if (var_10c == 0xa || var_10c == 2 || var_10c == 0x12 || var_10c == 0x2f || var_10c == 0x30
            || var_10c == 0x33)
        sub_405990(arg3, &var_98)
    else if (var_10c == 0xc || var_10c == 4 || var_10c == 0x14)
        int32_t var_144_1 = 0xf
        int32_t var_148_1 = 0
        char var_158 = 0
        var_c_1.b = 2
        void var_140
        void* ecx_13
        int32_t ebx
        
        if (sub_421dd0(&var_98) == 0)
            if (sub_421e00(&var_98) == 0)
                void* ecx_21 = &var_98
                
                if (sub_421e20(ecx_21) == 0)
                    sub_40d770(arg3)
                    sub_401fb0(&var_158)
                else
                    void var_128
                    sub_4220a0(ecx_21, &var_128)
                    var_c_1.b = 5
                    sub_4220a0(&var_110, &var_140)
                    var_c_1.b = 6
                    ebx.b = sub_5d2730(&var_158) == 0
                    sub_401fb0(&var_140)
                    var_c_1.b = 2
                    sub_401fb0(&var_128)
                    
                    if (ebx.b != 0)
                        sub_408340(&var_158, sub_4220a0(&var_110, &var_128))
                        ecx_13 = &var_128
                        goto label_4060ee
                    
                    sub_40da30(arg3, &var_158)
                    sub_401fb0(&var_158)
            else
                sub_4220a0(&var_110, &var_140)
                var_c_1.b = 4
                var_c_1.b = 2
                ebx.b = sub_5d2110(sub_421f70(&var_98), eax_4, arg2) == 0
                sub_401fb0(&var_140)
                
                if (ebx.b != 0)
                    sub_408340(&var_158, sub_4220a0(&var_110, &var_140))
                    ecx_13 = &var_140
                    goto label_4060ee
                
                sub_40da30(arg3, &var_158)
                sub_401fb0(&var_158)
        else
            sub_4220a0(&var_110, &var_140)
            var_c_1.b = 3
            sub_421e40(&var_98)
            var_c_1.b = 2
            ebx.b = sub_5d1970(&var_158, eax_4, arg2) == 0
            sub_401fb0(&var_140)
            
            if (ebx.b == 0)
                sub_40da30(arg3, &var_158)
                sub_401fb0(&var_158)
            else
                sub_408340(&var_158, sub_4220a0(&var_110, &var_140))
                ecx_13 = &var_140
            label_4060ee:
                sub_401fb0(ecx_13)
                sub_40da30(arg3, &var_158)
                sub_401fb0(&var_158)
    else
        sub_40d770(arg3)
    
    sub_405be0(&var_98)
    sub_405be0(&var_110)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_15c)
return arg3
