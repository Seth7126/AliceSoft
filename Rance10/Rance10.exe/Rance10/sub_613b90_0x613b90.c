// 函数: sub_613b90
// 地址: 0x613b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result
char var_2c

if (arg1[0x386] u> &arg1[0x286])
    int32_t edi_1 = *(arg1[0x386] - 4)
    
    if (edi_1 == 2)
        if (sub_621db0(&arg1[0x52], *(arg1[0x488] - 4)) != 0)
            arg1[0x488] -= 4
            sub_610a60(arg1)
        
        goto label_613c5e
    
    result = edi_1 - 4
    
    if (edi_1 != 4)
    label_613c5e:
        arg1[0x386] -= 4
        
        if (sub_6107c0(arg1) == 0)
            sub_403360(&var_2c, 0x76bddc)
            int32_t var_8_2 = 1
            sub_612230(arg1, "RETURN", &var_2c)
            result = sub_403320(&var_2c)
        else if (arg1[0x284] u<= &arg1[0x184])
            sub_403360(&var_2c, 0x76bcdc)
            int32_t var_8_3 = 2
            sub_612320(arg1, &var_2c)
            result = sub_403320(&var_2c)
        else if (arg1[0x182] u> &arg1[0x82])
            result = arg1[0x182]
            int32_t ecx_12 = *(result - 4)
            arg1[0x182] -= 4
            
            if (ecx_12 == 0xfffffffe)
                arg1[0x7a].b = 0
            else if (ecx_12 == 0xffffffff)
                arg1[0x7f] -= 1
                sub_610c40(arg1)
                void var_44
                sub_403360(&var_44, "main")
                int32_t var_8_5 = 4
                sub_612320(arg1, &var_44)
                result = sub_403320(&var_44)
            else
                result = arg1[0x75] + ecx_12
                arg1[0x74] = result
                
                if (edi_1 == 3)
                    arg1[0x7a].b = 0
        else
            sub_403360(&var_2c, 0x76bd60)
            int32_t var_8_4 = 3
            sub_612320(arg1, &var_2c)
            result = sub_403320(&var_2c)
else
    char* result_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x76bdb8, 0x22)
    int32_t var_8_1 = 0
    sub_612320(arg1, &var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, &result[1], 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
