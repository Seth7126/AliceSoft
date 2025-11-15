// 函数: sub_6d6426
// 地址: 0x6d6426
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x38
int32_t (* var_c)(void* arg1) = sub_74909c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_12 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_12
void* const var_5c_5 = &data_6d6432
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int16_t* edi = arg4
int32_t edx = 0
void* esi = arg3
int16_t i_2 = *edi

if (i_2 != 0)
    int16_t i = i_2
    
    do
        if (i == i_2)
            esi += 1
        
        edx += 1
        i = edi[edx]
    while (i != 0)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_4e2870(&var_2c, esi, 0)
int32_t var_5c = 0xfffffffe
int32_t result = 0xfffffffe
int32_t edx_1 = 1
int32_t var_8 = 0
int32_t var_38 = 1
char* var_34 = var_2c.d

while (true)
    int32_t result_1 = 0
    char var_2d_1 = 0
    int32_t result_2 = 0
    
    if (esi == 0)
        break
    
    int32_t eax_7
    
    do
        int16_t i_1 = edi[ebx]
        
        if (i_1 != 0)
            while (i_1 != *edi)
                ebx += 1
                i_1 = edi[ebx]
                
                if (i_1 == 0)
                    break
            
            result_1 = result_2
        
        char* eax_3 = var_34
        
        if (var_18 u< 0x10)
            eax_3 = &var_2c
        
        if (eax_3[result_1] == 0)
            ebx += edx_1
            int16_t eax_5 = edi[ebx]
            char eax_8
            
            if (eax_5 == *edi || eax_5 == 0)
                if (edx_1 u>= 0x7f)
                    int32_t var_5c_3 = 0x7f
                    eax_8 = 0x7f
                else
                    eax_8 = edx_1.b
                
                if (var_18 u< 0x10)
                    var_34 = &var_2c
                
                result = result_1
            label_6d656c:
                var_34[result_1] = eax_8
                edi = arg4
                var_34 = var_2c.d
                eax_7.b = var_2d_1
            else
                char eax_6 = sub_6e320e(arg1, arg2)
                
                if (eax_6 == 0)
                    eax_7 = arg1
                    
                    if (*(eax_7 + 4) == 0)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            eax_7)
                    
                    eax_7.w = edi[ebx]
                
                if (eax_6 != 0 || eax_7.w != *(arg1 + 6))
                    edx_1 = var_38
                    
                    if (edx_1 u>= 0x7f)
                        int32_t var_5c_2 = 0x7f
                        eax_8 = 0x7f
                    else
                        eax_8 = edx_1.b
                    
                    if (var_18 u< 0x10)
                        var_34 = &var_2c
                    
                    result_1 = result_2
                    goto label_6d656c
                
                result_1 = result_2
                eax_7.b = 1
                edx_1 = var_38
                var_2d_1 = 1
        else
            char* eax_4 = var_34
            
            if (var_18 u< 0x10)
                eax_4 = &var_2c
            
            ebx += sx.d(eax_4[result_1])
            eax_7.b = var_2d_1
        
        result_1 += 1
        result_2 = result_1
    while (result_1 u< esi)
    
    if (eax_7.b == 0)
        break
    
    if (sub_6e320e(arg1, arg2) != 0)
        break
    
    var_38 += 1
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg1)
    result = 0xffffffff
    ebx = 0
    edx_1 = var_38

sub_4033f0(&var_2c, 1, nullptr)
@__security_check_cookie@4(eax_12 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d65c8
return result
