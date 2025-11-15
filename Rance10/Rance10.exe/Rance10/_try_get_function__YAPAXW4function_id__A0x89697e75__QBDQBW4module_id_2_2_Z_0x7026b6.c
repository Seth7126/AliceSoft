// 函数: ?try_get_function@@YAPAXW4function_id@?A0x89697e75@@QBDQBW4module_id@2@2@Z
// 地址: 0x7026b6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = 0

if (0 == *((arg1 << 2) + &data_7fc3bc))
    *((arg1 << 2) + &data_7fc3bc) = 0
else
    eax_1 = *((arg1 << 2) + &data_7fc3bc)

uint32_t __security_cookie_1 = __security_cookie
int32_t result = ror.d(__security_cookie_1 ^ eax_1, __security_cookie_1.b & 0x1f)

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
                goto label_702712
            
            esi_2 = &esi_2[1]
        while (esi_2 != arg4)
        
        __security_cookie_1 = __security_cookie
    
    hModule = nullptr
label_702712:
    
    if (hModule != 0)
        result = GetProcAddress(hModule, arg2)
        
        if (result != 0)
            int32_t eax_3 = __crt_fast_encode_pointer<void (__cdecl**)()>(result)
            *((arg1 << 2) + &data_7fc3bc)
            *((arg1 << 2) + &data_7fc3bc) = eax_3
            return result
        
        __security_cookie_1 = __security_cookie
    
    *((arg1 << 2) + &data_7fc3bc)
    *((arg1 << 2) + &data_7fc3bc) =
        ror.d(0xffffffff, 0x20 - (__security_cookie_1.b & 0x1f)) ^ __security_cookie_1

return 0
