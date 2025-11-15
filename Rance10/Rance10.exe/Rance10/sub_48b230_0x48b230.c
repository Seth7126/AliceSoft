// 函数: sub_48b230
// 地址: 0x48b230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t var_14
int32_t* var_4 = __security_cookie ^ &var_14
char* esi = arg1
int32_t* result
result.b = *esi

while (result.b != 0)
    esi = &esi[1]
    bool cond:0_1 = result.b == 0x25
    result.b = *esi
    
    if (cond:0_1)
        if (result.b != 0)
            while (true)
                __builtin_strncpy(&var_14, "diouxXfeEgGcspn%", 0x10)
                void* eax_2 = _memchr(&var_14, result.b, 0x10)
                void* ecx_2 = &var_4
                
                if (eax_2 != 0)
                    ecx_2 = eax_2
                
                if (ecx_2 != &var_4)
                    break
                
                if (*esi == 0x2a)
                    result.b = 1
                    @__security_check_cookie@4(var_4 ^ &var_14)
                    return result
                
                result.b = esi[1]
                esi = &esi[1]
                
                if (result.b == 0)
                    @__security_check_cookie@4(var_4 ^ &var_14)
                    return result
        
        break

result.b = 0
@__security_check_cookie@4(var_4 ^ &var_14)
return result
