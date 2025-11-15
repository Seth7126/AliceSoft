// 函数: sub_6ca500
// 地址: 0x6ca500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748ea1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
int32_t* result_3 = result
int32_t* result_2 = result
int32_t var_8_1 = 0
int32_t var_4c = 0
result[4] = 0
result[5] = 0
result[5] = 0xf
bool cond:0 = result[5] u< 0x10
int32_t* result_1 = result
result[4] = 0
char* result_4

if (cond:0)
    result_4 = result
else
    result_4 = *result

*result_4 = 0
sub_403590(arg3, arg2, 0, 0xffffffff)
int32_t var_8_2 = 0
int32_t var_4c_1 = 1
int32_t* esi = *arg4
int32_t edi_1 = arg4[1]
int32_t* var_44 = esi
int32_t var_48 = edi_1

while (esi != edi_1)
    int32_t var_20_1 = 0
    int32_t eax_4 = 0xf
    int32_t var_1c_1 = 0xf
    char var_30 = 0
    int32_t var_8_3 = 1
    int32_t* var_40_1
    
    if (esi[5] u< 0x10)
        var_40_1 = esi
    else
        var_40_1 = *esi
    
    int32_t ecx = esi[4]
    int32_t var_38_1 = ecx
    
    if (result[4] s> 0)
        int32_t i = 0
        
        do
            int32_t eax_5 = result[5]
            
            if (eax_5 u>= 0x10)
                result = *result
            
            int32_t* eax_6 = var_40_1
            void* edx_1 = result + i
            int32_t j_1 = ecx - 4
            
            if (ecx u>= 4)
                int32_t j
                
                do
                    if (*edx_1 != *eax_6)
                        goto label_6ca626
                    
                    edx_1 += 4
                    eax_6 = &eax_6[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            int32_t eax_8
            
            if (j_1 == 0xfffffffc)
                eax_8 = 0
            else
            label_6ca626:
                ecx.b = *edx_1
                char temp1_1 = *eax_6
                
                if (ecx.b != temp1_1)
                    eax_8 = sbb.d(eax_6, eax_6, ecx.b u< temp1_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_8 = 0
                else
                    ecx.b = *(edx_1 + 1)
                    char temp3_1 = *(eax_6 + 1)
                    
                    if (ecx.b != temp3_1)
                        eax_8 = sbb.d(eax_6, eax_6, ecx.b u< temp3_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_8 = 0
                    else
                        ecx.b = *(edx_1 + 2)
                        char temp4_1 = *(eax_6 + 2)
                        
                        if (ecx.b != temp4_1)
                            eax_8 = sbb.d(eax_6, eax_6, ecx.b u< temp4_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_8 = 0
                        else
                            ecx.b = *(edx_1 + 3)
                            char temp5_1 = *(eax_6 + 3)
                            
                            if (ecx.b == temp5_1)
                                eax_8 = 0
                            else
                                eax_8 = sbb.d(eax_6, eax_6, ecx.b u< temp5_1) | 1
            
            if (eax_8 == 0)
                sub_4055a0(&var_30, &esi[6], 0, 0xffffffff)
                ecx = var_38_1
                result = result_3
                i = i - 1 + ecx
            else
                result = result_3
                int32_t* result_5
                
                if (eax_5 u< 0x10)
                    result_5 = result
                else
                    result_5 = *result
                
                result_5.b = *(result_5 + i)
                sub_405500(&var_30, 1, result_5.b)
                int32_t ecx_2 = result[5]
                int32_t* result_6
                
                if (ecx_2 u< 0x10)
                    result_6 = result
                else
                    result_6 = *result
                
                result_6.b = *(result_6 + i)
                
                if (result_6.b u< 0x81 || result_6.b u> 0x9f)
                    result_6.b += 0x20
                    
                    if (result_6.b u<= 0xf)
                        goto label_6ca6a5
                else
                label_6ca6a5:
                    i += 1
                    int32_t* result_7
                    
                    if (ecx_2 u< 0x10)
                        result_7 = result
                    else
                        result_7 = *result
                    
                    result_7.b = *(result_7 + i)
                    sub_405500(&var_30, 1, result_7.b)
                
                ecx = var_38_1
            
            i += 1
        while (i s< result[4])
        
        eax_4 = var_1c_1
        esi = var_44
        edi_1 = var_48
    
    if (result != &var_30)
        sub_403590(result, &var_30, 0, 0xffffffff)
        eax_4 = var_1c_1
    
    var_8_3.b = 0
    
    if (eax_4 u>= 0x10)
        sub_403160(var_30.d, eax_4 + 1, 1)
    
    esi = &esi[0xc]
    var_44 = esi

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
