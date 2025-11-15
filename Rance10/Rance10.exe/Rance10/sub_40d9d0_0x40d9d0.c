// 函数: sub_40d9d0
// 地址: 0x40d9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7279de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_13c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_12c = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_414340(arg2)
else
    void var_a8
    (*(*ecx + 0xc))(&var_a8, arg3)
    int32_t var_8_1 = 0
    int32_t var_a4
    
    if (var_a4 == 0xd || var_a4 == 0x15)
        var_8_1.b = 1
        void var_124
        void** eax_7 = (*(**(arg1 + 8) + 0xc))(&var_124, 0) + 0x2c
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403590(&var_2c, eax_7, 0, 0xffffffff)
        var_8_1.b = 3
        sub_40ad50(&var_124)
        int32_t ecx_6 = var_1c_1
        
        if (ecx_6 != 0)
            int32_t* var_3c
            int32_t* esi_1 = var_3c
            int32_t var_38
            
            if (esi_1 == var_38)
            label_40db23:
                sub_414340(arg2)
            else
                while (true)
                    int32_t* edx_1 = &var_2c
                    
                    if (var_18_1 u>= 0x10)
                        edx_1 = var_2c.d
                    
                    void* eax_8
                    
                    if (esi_1[0x10] u< 0x10)
                        eax_8 = &esi_1[0xb]
                    else
                        eax_8 = esi_1[0xb]
                    
                    int32_t edi_1 = esi_1[0xf]
                    int32_t eax_9 = ecx_6
                    
                    if (edi_1 u< ecx_6)
                        eax_9 = edi_1
                    
                    ecx_6 = var_1c_1
                    
                    if (sub_406ac0(eax_9, edx_1, eax_8, eax_9) == 0 && edi_1 u>= ecx_6
                            && edi_1 u<= ecx_6)
                        sub_414740(arg2, esi_1)
                        break
                    
                    esi_1 = &esi_1[0x1f]
                    
                    if (esi_1 == var_38)
                        goto label_40db23
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            sub_40ad50(&var_a8)
        else
            sub_414340(arg2)
            sub_403320(&var_2c)
            sub_40ad50(&var_a8)
    else
        sub_414340(arg2)
        sub_40ad50(&var_a8)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
