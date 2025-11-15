// 函数: sub_6d628c
// 地址: 0x6d628c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x38
int32_t (* var_c)(void* arg1) = sub_74909c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_11
void* const var_5c_5 = &data_6d6298
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg4
void* esi = arg3
int32_t* eax_1
eax_1.b = *edi

if (eax_1.b != 0)
    char i = eax_1.b
    char* edx_1 = edi
    
    do
        if (i == eax_1.b)
            esi += 1
        
        edx_1 = &edx_1[1]
        i = *edx_1
    while (i != 0)

int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
sub_4e2870(&var_2c, esi, 0)
int32_t var_8 = 0
int32_t var_5c = 0xfffffffe
int32_t result = 0xfffffffe
int32_t edx_2 = 1
int32_t var_38 = 1
int32_t var_34 = var_2c.d

while (true)
    int32_t eax_2
    eax_2:1.b = 0
    int32_t result_1 = 0
    char* ebx_1 = nullptr
    char var_2d_1 = 0
    int32_t result_2 = 0
    
    if (esi == 0)
        break
    
    do
        eax_2.b = *(ebx_1 + edi)
        
        if (eax_2.b != 0)
            result_1.b = *edi
            
            while (eax_2.b != result_1.b)
                ebx_1 = &ebx_1[1]
                eax_2.b = *(ebx_1 + edi)
                
                if (eax_2.b == 0)
                    break
            
            result_1 = result_2
        
        int32_t eax_3 = var_34
        
        if (var_18 u< 0x10)
            eax_3 = &var_2c
        
        if (*(eax_3 + result_1) == 0)
            ebx_1 = &ebx_1[edx_2]
            eax_3.b = *(ebx_1 + edi)
            char eax_7
            
            if (eax_3.b == *edi || eax_3.b == 0)
                if (edx_2 u>= 0x7f)
                    int32_t var_5c_3 = 0x7f
                    eax_7 = 0x7f
                else
                    eax_7 = edx_2.b
                
                if (var_18 u< 0x10)
                    var_34 = &var_2c
                
                result = result_1
            label_6d63cb:
                *(var_34 + result_1) = eax_7
                edi = arg4
                var_34 = var_2c.d
                eax_2:1.b = var_2d_1
            else
                char eax_5 = sub_6e320e(arg1, arg2)
                int32_t* eax_6
                
                if (eax_5 == 0)
                    eax_6 = arg1
                    
                    if (eax_6[1].b == 0)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            eax_6)
                        eax_6 = arg1
                
                if (eax_5 != 0 || sx.d(*(ebx_1 + edi)) != zx.d(*(eax_6 + 6)))
                    edx_2 = var_38
                    
                    if (edx_2 u>= 0x7f)
                        int32_t var_5c_2 = 0x7f
                        eax_7 = 0x7f
                    else
                        eax_7 = edx_2.b
                    
                    if (var_18 u< 0x10)
                        var_34 = &var_2c
                    
                    result_1 = result_2
                    goto label_6d63cb
                
                result_1 = result_2
                eax_2:1.b = 1
                edx_2 = var_38
                var_2d_1 = 1
        else
            int32_t eax_4 = var_34
            
            if (var_18 u< 0x10)
                eax_4 = &var_2c
            
            ebx_1 = &ebx_1[sx.d(*(eax_4 + result_1))]
            eax_2:1.b = var_2d_1
        
        result_1 += 1
        result_2 = result_1
    while (result_1 u< esi)
    
    if (eax_2:1.b == 0)
        break
    
    if (sub_6e320e(arg1, arg2) != 0)
        break
    
    var_38 += 1
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg1)
    result = 0xffffffff
    edx_2 = var_38

sub_4033f0(&var_2c, 1, nullptr)
@__security_check_cookie@4(eax_11 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d6425
return result
