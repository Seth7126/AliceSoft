// 函数: ?try_get_function@@YAPAXW4function_id@?A0x9b56aee1@@QBDQBW4module_id@2@2@Z
// 地址: 0x71522b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t result =
    ror.d(__security_cookie_1 ^ *((arg1 << 2) + &data_7fc970), __security_cookie_1.b & 0x1f)

if (result != 0xffffffff)
    if (result != 0)
        return result
    
    int32_t* esi_2 = arg3
    HMODULE hModule
    
    if (esi_2 != arg4)
        do
            hModule = try_get_module(*esi_2)
            
            if (hModule != 0)
                __security_cookie_1 = __security_cookie
                goto label_715283
            
            esi_2 = &esi_2[1]
        while (esi_2 != arg4)
        
        __security_cookie_1 = __security_cookie
    
    hModule = nullptr
label_715283:
    
    if (hModule != 0)
        result = GetProcAddress(hModule, arg2)
        
        if (result != 0)
            int32_t eax_3 = __crt_fast_encode_pointer<void (__cdecl**)()>(result)
            *((arg1 << 2) + &data_7fc970)
            *((arg1 << 2) + &data_7fc970) = eax_3
            return result
        
        __security_cookie_1 = __security_cookie
    
    *((arg1 << 2) + &data_7fc970)
    *((arg1 << 2) + &data_7fc970) =
        ror.d(0xffffffff, 0x20 - (__security_cookie_1.b & 0x1f)) ^ __security_cookie_1

return 0
