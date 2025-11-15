// 函数: sub_59c300
// 地址: 0x59c300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e3d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, U"{,,,},},==,==,,,=,=,", 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, &var_18[1], 1)

char* result
int32_t var_3c

if (ebx.b == 0)
    if (sub_5de8c0(&var_3c).b == 0)
        result.b = 0
    else
        sub_403360(&var_2c, &(*U"{,,,},},==,==,,,=,=,")[7])
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        ebx.b = sub_59f280(arg1, &var_2c) == 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, &var_18[1], 1)
        
        if (ebx.b != 0)
            result.b = 0
        else
            int32_t var_4c = 0
            int32_t var_48_1 = 0
            int32_t var_44_1 = 0
            
            if (sub_59c1e0(arg1, &var_4c).b == 0)
                result.b = 0
            else
                int32_t edi_1 = 1
                int32_t var_34 = 0
                int32_t var_30 = 1
                int32_t var_38 = 0
                
                if (sub_5de720(arg1, &(*U"{,,,},},==,==,,,=,=,")[6]) != 0)
                    goto label_59c587
                
                sub_403360(&var_2c, &(*U"{,,,},},==,==,,,=,=,")[5])
                int32_t var_8_5 = 2
                int32_t var_8_6 = 0xffffffff
                ebx.b = sub_59f280(arg1, &var_2c) == 0
                sub_403320(&var_2c)
                
                if (ebx.b != 0)
                    result.b = 0
                else if (sub_59c5e0(arg1, &var_30).b == 0)
                    result.b = 0
                else if (sub_5de720(arg1, &(*U"{,,,},},==,==,,,=,=,")[4]) != 0)
                label_59c569:
                    edi_1 = var_30
                label_59c587:
                    int32_t var_20_1 = var_44_1
                    int32_t var_1c_1 = var_34
                    int32_t xmm0_3 = var_38
                    int128_t xmm0_4 = var_4c.q.o
                    int32_t var_68 = var_3c
                    int32_t var_50_1 = xmm0_3
                    int32_t var_64_1 = edi_1
                    int128_t var_60_1 = xmm0_4
                    sub_5a4af0(arg2 + 0x298, &var_68)
                    result.b = 1
                else
                    sub_403360(&var_2c, &(*U"},,=")[2])
                    int32_t var_8_7 = 3
                    int32_t var_8_8 = 0xffffffff
                    ebx.b = sub_59f280(arg1, &var_2c) == 0
                    sub_403320(&var_2c)
                    
                    if (ebx.b != 0)
                        result.b = 0
                    else if (PDB1::ResetGUID(&var_34).b == 0)
                        result.b = 0
                    else
                        sub_403360(&var_2c, &(*U"},,=")[1])
                        int32_t var_8_9 = 4
                        int32_t var_8_10 = 0xffffffff
                        ebx.b = sub_59f280(arg1, &var_2c) == 0
                        sub_403320(&var_2c)
                        
                        if (ebx.b != 0)
                            result.b = 0
                        else if (PDB1::ResetGUID(&var_38).b == 0)
                            result.b = 0
                        else
                            sub_403360(&var_2c, U"},,=")
                            int32_t var_8_11 = 5
                            int32_t var_8_12 = 0xffffffff
                            ebx.b = sub_59f280(arg1, &var_2c) == 0
                            sub_403320(&var_2c)
                            
                            if (ebx.b == 0)
                                goto label_59c569
                            
                            result.b = 0
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
