// 函数: sub_5d8f00
// 地址: 0x5d8f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741486
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x10].b = 0
bool cond:0 = arg1[0xf] u< 0x10
arg1[0xe] = 0
char* eax_4

if (cond:0)
    eax_4 = &arg1[0xa]
else
    eax_4 = arg1[0xa]

void* var_78 = arg3
*eax_4 = 0
int32_t* var_7c = arg1
sub_56b630(arg1[7], arg1[8])
arg1[8] = arg1[7]
arg1[6].b = 0
arg1[4] = arg1[3]
arg1[1] = *arg1
arg1[0x12] = arg1[0x11]
void* result

if (arg2 != 0)
    int32_t edi_3 = (*(arg2 + 0x58) - *(arg2 + 0x54)) s/ 0x3c
    
    if (edi_3 s> 0)
        void* result_1
        sub_422370(&result_1, edi_3)
        int32_t esi_1 = 0
        int32_t var_8_1 = 0
        int32_t* ebx
        
        if (edi_3 s<= 0)
        label_5d9034:
            sub_56b770(arg1, &result_1)
            sub_5da040(arg1)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, ".bone", 5)
            var_8_1.b = 1
            char var_44
            char* eax_17 = sub_4053d0(&var_2c, arg2 + 0x84, &var_44, &var_2c)
            
            if (&arg1[0xa] != eax_17)
                int32_t eax_18 = arg1[0xf]
                
                if (eax_18 u>= 0x10)
                    sub_403160(arg1[0xa], eax_18 + 1, 1)
                
                arg1[0xf] = 0xf
                bool cond:1_1 = arg1[0xf] u< 0x10
                arg1[0xe] = 0
                char* eax_20
                
                if (cond:1_1)
                    eax_20 = &arg1[0xa]
                else
                    eax_20 = arg1[0xa]
                
                *eax_20 = 0
                sub_4056a0(&arg1[0xa], eax_17)
            
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            var_8_1.b = 0
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            if (sub_5d9740(arg1, arg3) != 0)
                void* eax_26 = *arg1
                int32_t ecx_13 = arg1[1]
                
                if (eax_26 == ecx_13)
                label_5d912f:
                    eax_26.b = 0
                else
                    while (*(eax_26 + 0x7c) == 0)
                        eax_26 += 0xd8
                        
                        if (eax_26 == ecx_13)
                            goto label_5d912f
                    
                    eax_26.b = 1
                
                arg1[6].b = eax_26.b
                ebx.b = 1
            else
                ebx.b = 0
        else
            int32_t i = 0
            
            while (i s>= 0)
                if (esi_1 s>= (*(arg2 + 0x58) - *(arg2 + 0x54)) s/ 0x3c)
                    break
                
                int32_t eax_15 = *(i + *(arg2 + 0x54) + 0x18)
                
                if (eax_15 != 0xffffffff)
                    if (eax_15 s< 0)
                        break
                    
                    if (eax_15 s>= edi_3)
                        break
                
                i += 0x3c
                *(result_1 + (esi_1 << 2)) = eax_15
                esi_1 += 1
                
                if (esi_1 s>= edi_3)
                    goto label_5d9034
            
            ebx.b = 0
        
        result = result_1
        int32_t var_58
        
        if (result != 0)
            sub_403160(result, (var_58 - result) s>> 2, 4)
        result.b = ebx.b
    else
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
