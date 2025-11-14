// 函数: sub_100139a5
// 地址: 0x100139a5
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_38 = edi
void var_28
sub_10004910(&var_28, arg3)
char* var_2c
void var_14
char eax_2 = sub_10014853(&var_14, &var_2c, arg2, 0, 0, 0, 0, &var_28)
int32_t eax_3 = sub_1001430f(&var_14, arg1)
int32_t result
void* var_20
char var_1c

if ((eax_2 & 3) == 0)
    if (eax_3 != 1)
        if (eax_3 != 2)
            goto label_10013a33
        
        goto label_10013a17
    
label_10013a01:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 3
else if ((eax_2 & 1) != 0)
label_10013a17:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 4
else
    if ((eax_2 & 2) != 0)
        goto label_10013a01
    
label_10013a33:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 0
sub_10001d19(eax_1 ^ &__saved_ebp)
return result
