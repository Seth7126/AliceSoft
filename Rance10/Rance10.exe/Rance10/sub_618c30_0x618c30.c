// 函数: sub_618c30
// 地址: 0x618c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744210
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_ac[0x1a]
_memset(&var_ac, 0, 0x68)
void* ecx = arg2
int32_t esi = 0
int32_t eax_6 = (*(ecx + 0x24) - *(ecx + 0x20)) s>> 2
int32_t var_b4 = eax_6
float result

if (eax_6 s<= 0)
label_618db2:
    result = sub_5fa210(&var_ac, (arg3[1] - *arg3) s>> 4, *(ecx + 0x2c), &var_ac, *(ecx + 0x1c))
else
    int32_t edi_1 = 0
    
    while (true)
        int32_t eax_11
        
        switch (*(*(ecx + 0x20) + (esi << 2)) - 0xa)
            case 0, 0x52
                *arg3
                eax_11 = sub_602ff0()
            label_618d80:
                var_ac[esi] = eax_11
                goto label_618d87
            case 1
                *arg3
                var_ac[esi] = sub_603140()
            label_618d87:
                ecx = arg2
                esi += 1
                edi_1 += 0x10
                
                if (esi s>= var_b4)
                    goto label_618db2
                
                continue
            case 2, 0xa
                void* ecx_13 = data_7fcbb4
                
                if (ecx_13 == 0)
                    eax_11 = 0
                    goto label_618d80
                
                int32_t eax_14 = sub_6227b0(ecx_13, *(*arg3 + edi_1 + 8))
                
                if (eax_14 == 0)
                    eax_11 = 0
                    goto label_618d80
                
                eax_11 = eax_14 + 0x20
                goto label_618d80
            case 3, 0xb, 0x4f
                void* ecx_15 = data_7fcbb4
                
                if (ecx_15 == 0)
                    eax_11 = 0
                    goto label_618d80
                
                int32_t eax_18 = sub_6228d0(ecx_15, *(*arg3 + edi_1 + 8))
                
                if (eax_18 == 0)
                    eax_11 = 0
                    goto label_618d80
                
                eax_11 = eax_18 + 0x20
                goto label_618d80
            case 8, 0x53
                eax_11 = sub_603470(*arg3 + edi_1)
                goto label_618d80
            case 9
                eax_11 = sub_6034c0(*arg3 + edi_1)
                goto label_618d80
            case 0x25
                *arg3
                eax_11 = sub_602ea0().d
                goto label_618d80
            case 0x29
                eax_11 = sub_603430(*arg3 + edi_1)
                goto label_618d80
            case 0x45, 0x46
                void* ecx_14 = data_7fcbb4
                
                if (ecx_14 == 0)
                    eax_11 = 0
                    goto label_618d80
                
                int32_t eax_16 = sub_622840(ecx_14, *(*arg3 + edi_1 + 8))
                
                if (eax_16 == 0)
                    eax_11 = 0
                    goto label_618d80
                
                eax_11 = eax_16 + 0x20
                goto label_618d80
        
        int32_t var_18_1 = 0xf
        var_b4 = *(*(ecx + 0x20) + (esi << 2))
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, 0x76cc38, 0x38)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_44
        float result_1 = zx.d(sub_612320(arg1, sub_409350(&var_b4, &var_2c, &var_44, &var_b4)))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        result = result_1
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
