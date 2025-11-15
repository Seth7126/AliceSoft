// 函数: sub_4a5a70
// 地址: 0x4a5a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7314a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_54 = edi
sub_4a5040(arg1)
*(edi + 4) = arg3
int32_t* result

if (arg3 == 0)
    result.b = 0
else
    (**arg3)(eax_2)
    *(edi + 0x14) = *(edi + 0x6c)
    int32_t eax_5 = *(edi + 0x70)
    *(edi + 0x18) = eax_5
    int32_t eax_6 = 1
    
    if (eax_5 s> 1)
        do
            eax_6 *= 2
        while (eax_6 s< eax_5)
    
    int32_t* edx_1 = *(edi + 0x14)
    int32_t ecx_2 = 1
    
    if (edx_1 s> 1)
        do
            ecx_2 *= 2
        while (ecx_2 s< edx_1)
    
    *(edi + 0x24) = eax_6
    *(edi + 0x20) = ecx_2
    *(edi + 0x2c) = *(edi + 0x78)
    *(edi + 0x30) = *(edi + 0x7c)
    int32_t esi_1 = *(edi + 0x2c)
    int32_t ecx_3 = *(edi + 0x30)
    int32_t temp0_1 = divs.dp.d(sx.q(esi_1 * *(edi + 0x18)), edx_1)
    
    if (temp0_1 s> ecx_3)
        int32_t temp0_2 = divs.dp.d(sx.q(ecx_3 * edx_1), *(edi + 0x18))
        *(edi + 0x18)
        *(edi + 0x3c) = ecx_3
        *(edi + 0x38) = temp0_2
    else
        *(edi + 0x38) = esi_1
        *(edi + 0x3c) = temp0_1
    
    char eax_17
    
    if (esi_1 != *(edi + 0x14) || ecx_3 != *(edi + 0x18))
        eax_17 = 1
    else
        eax_17 = 0
    
    *(edi + 0x44) = eax_17
    
    if (arg2 == 0)
        goto label_4a5c0d
    
    result = (*(**(edi + 4) + 0x50))()
    *(edi + 8) = result
    
    if (result == 0)
        result.b = 0
    else
        void* ecx_5 = var_54
        int32_t edi_1 = *(edi + 0x24)
        int32_t* ebx_1 = *result + 0x30
        int32_t esi_2 = *(ecx_5 + 0x20)
        int32_t eax_20 = (*(**(ecx_5 + 4) + 0x88))(1)
        edi = var_54
        *(edi + 8)
        void var_2c
        
        if ((*ebx_1)(esi_2, edi_1, 1, 1, eax_20) != 0)
            result = (*(**(edi + 4) + 0x5c))()
            *(edi + 0xc) = result
            
            if (result == 0)
                result.b = 0
            else
                (*(*result + 0x28))(0, 0, *(edi + 0x14), *(edi + 0x18), 0, 0x3f800000)
            label_4a5c0d:
                result = (*(**(edi + 4) + 0x58))()
                *(edi + 0x40) = result
                
                if (result == 0)
                    result.b = 0
                else
                    var_54.b = 0
                    void* var_68_3 = var_54
                    int32_t var_38 = 0
                    int32_t var_34_1 = 4
                    int32_t var_30_1 = 6
                    int32_t var_20 = 0
                    int32_t var_1c_1 = 0
                    int32_t var_18_1 = 0
                    sub_452440(&var_20, &var_38, &var_2c)
                    int32_t var_8_2 = 2
                    int32_t edx_7 = var_20
                    char eax_33 = (*(**(edi + 0x40) + 8))(4, edx_7, (var_1c_1 - edx_7) s>> 2, 0)
                    bool eax_34
                    
                    if (eax_33 != 0)
                        eax_34 = sub_4a5d10(edi)
                    
                    if (eax_33 == 0 || eax_34 == 0)
                        ebx_1.b = 0
                    else
                        ebx_1.b = 1
                        *(edi + 0x48) = arg4
                    
                    sub_4043e0(&var_20)
                    result.b = ebx_1.b
        else
            var_54 = *(edi + 0x20)
            sub_403360(&var_2c, 0x761458)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            void var_50
            sub_6c52e0(sub_417810(&var_54, &var_2c, &var_50, &var_54, *(edi + 0x24)))
            sub_403320(&var_50)
            sub_403320(&var_2c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
