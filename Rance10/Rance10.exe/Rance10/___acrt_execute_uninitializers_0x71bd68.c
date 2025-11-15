// 函数: ___acrt_execute_uninitializers
// 地址: 0x71bd68
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
void* var_8_1 = __security_cookie ^ &__saved_ebp

if (arg1 != arg2)
    int32_t* esi_1 = arg2 - 4
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        int32_t edi_1 = *esi_1
        
        if (edi_1 != 0)
            edi_1(0)
        
        esi_1 -= 8
    while (&esi_1[1] != arg1)

void* result
result.b = 1
@__security_check_cookie@4(var_8_1 ^ &__saved_ebp)
return result
