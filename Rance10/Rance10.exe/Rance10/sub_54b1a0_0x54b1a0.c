// 函数: sub_54b1a0
// 地址: 0x54b1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a3a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_80 = arg3
void** var_84 = arg2
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x767014, 0xa)
int32_t var_8_1 = 0
sub_4abfc0(&var_84, &var_2c)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x51eb851f, *(arg1 + 0x80) - *(arg1 + 0x7c))
int32_t edx_1 = edx s>> 6
int32_t var_78 = 0
int32_t ecx_7 = (edx_1 u>> 0x1f) + edx_1
int32_t var_7c = ecx_7
int32_t result

if (ecx_7 s<= 0)
label_54b3a4:
    var_7c = *(arg1 + 0x90)
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    sub_403490(&var_5c, 0x76704c, 0x25)
    int32_t var_8_7 = 4
    var_8_7.b = 5
    char var_74
    sub_4abfc0(&var_84, 
        sub_4b0f20(&var_7c, &var_5c, &var_74, &var_7c, *(arg1 + 0x94), *(arg1 + 0x9c), 
            *(arg1 + 0xa0)))
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    
    if (var_48_1 u>= 0x10)
        sub_403160(var_5c.d, var_48_1 + 1, 1)
    
    result.b = 1
else
    int32_t esi_1 = 0
    
    while (true)
        if (esi_1 s>= 0)
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = muls.dp.d(0x51eb851f, *(arg1 + 0x80) - *(arg1 + 0x7c))
            int32_t edx_3 = edx_2 s>> 6
            
            if ((edx_3 u>> 0x1f) + edx_3 s> var_78)
                void* edi_1 = *(arg1 + 0x7c)
                
                if (edi_1 != neg.d(esi_1))
                    int32_t ecx_11 = var_78 + 1
                    int32_t var_18_1 = 0xf
                    var_78 = ecx_11
                    int32_t var_88 = ecx_11
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    sub_403490(&var_2c, 0x767008, 8)
                    int32_t var_8_3 = 1
                    var_8_3.b = 2
                    char var_44
                    sub_4abfc0(&var_84, sub_409350(&var_88, &var_2c, &var_44, &var_88))
                    int32_t var_30
                    
                    if (var_30 u>= 0x10)
                        sub_403160(var_44.d, var_30 + 1, 1)
                    
                    int32_t var_8_4 = 0xffffffff
                    int32_t eax_14 = var_18_1
                    var_30 = 0xf
                    int32_t var_34_1 = 0
                    var_44 = 0
                    
                    if (eax_14 u>= 0x10)
                        eax_14 = sub_403160(var_2c.d, eax_14 + 1, 1)
                    
                    int32_t var_8_5 = 3
                    sub_4c3700(edi_1 + esi_1, sub_4175e0(eax_14, arg2, &var_44, "*\t*\t"), arg3)
                    int32_t var_8_6 = 0xffffffff
                    
                    if (var_30 u>= 0x10)
                        sub_403160(var_44.d, var_30 + 1, 1)
                    
                    esi_1 += 0xc8
                    
                    if (var_78 s>= var_7c)
                        goto label_54b3a4
                    
                    continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
