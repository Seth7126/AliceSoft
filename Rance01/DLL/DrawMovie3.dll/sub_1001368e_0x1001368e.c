// 函数: sub_1001368e
// 地址: 0x1001368e
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_40 = edi
int32_t var_44 = 0x16
void var_20
void* var_48 = &var_20
int32_t var_34
sub_10013bc4(*arg1, arg1[1], &var_34)
int32_t result

if (arg2 != 0 && arg3 u> 0)
    void* eax_6
    eax_6.b = var_34 == 0x2d
    char* edi_1 = eax_6 + arg2
    void* ecx_2
    
    if (arg3 != 0xffffffff)
        ecx_2 = arg3 - eax_6
    else
        ecx_2 = arg3
    
    int32_t ecx_3
    int32_t edx_1
    result, ecx_3, edx_1 = sub_10013a4d(edi_1, ecx_2, arg4, &var_34)
    
    if (result == 0)
        int32_t var_30
        ecx_3.b = var_30 - 1 s< var_30 - 1
        
        if (var_30 - 1 s< 0xfffffffc || var_30 - 1 s>= arg4)
            int32_t* var_44_3 = arg6
            int32_t var_48_2 = 1
            result = sub_10012f0a(arg2, edx_1, ecx_3, arg3, arg4, arg5, &var_34)
        else
            if (ecx_3.b != 0)
                int32_t eax_8
                
                do
                    eax_8.b = *edi_1
                    edi_1 = &edi_1[1]
                while (eax_8.b != 0)
                edi_1[0xfffffffe] = 0
            
            result = sub_100134dc(&var_34, edx_1, arg2, arg3, arg4, 1, arg6)
    else
        *arg2 = 0
else
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    result = 0x16

sub_10001d19(eax_1 ^ &__saved_ebp)
return result
