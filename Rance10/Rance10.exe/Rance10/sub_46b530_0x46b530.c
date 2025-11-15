// 函数: sub_46b530
// 地址: 0x46b530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_2c
int32_t var_c = __security_cookie ^ &var_2c
int32_t* i = *(arg1 + 4)
int32_t result

for (int32_t edi = *(arg1 + 8); i != edi; i = &i[1])
    void* var_24
    char* ecx_1 = sub_470a10(*i, &var_24)
    
    if (arg2[5] u< 0x10)
        var_2c = arg2
    else
        var_2c = *arg2
    
    void* ebx_1 = &ecx_1[0x10]
    
    if (*(ecx_1 + 0x14) u>= 0x10)
        ecx_1 = *ecx_1
    
    int32_t edx_2 = arg2[4]
    int32_t eax_3 = edx_2
    int32_t ebx_2 = *ebx_1
    
    if (ebx_2 u< edx_2)
        eax_3 = ebx_2
    
    int32_t ebx_3 = sub_406ac0(eax_3, var_2c, ecx_1, eax_3)
    
    if (ebx_3 == 0)
        int32_t eax_5 = arg2[4]
        int32_t ecx_2 = *ebx_1
        bool c_1 = eax_5 u< ecx_2
        
        if (eax_5 == ecx_2 || c_1)
            ebx_3 = neg.d(sbb.d(ebx_1, ebx_1, c_1))
        else
            ebx_3 = 0xffffffff
    
    int32_t var_10
    
    if (var_10 u>= 0x10)
        sub_403160(var_24, var_10 + 1, 1)
    
    if (ebx_3 == 0)
        result.b = 1
        @__security_check_cookie@4(var_c ^ &var_2c)
        return result

result.b = 0
@__security_check_cookie@4(var_c ^ &var_2c)
return result
