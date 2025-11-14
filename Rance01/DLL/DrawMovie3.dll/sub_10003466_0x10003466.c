// 函数: sub_10003466
// 地址: 0x10003466
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_8 = edi
HMODULE hModule = GetModuleHandleW(u"KERNEL32.DLL")

if (hModule == 0)
    hModule = sub_100042a7(u"KERNEL32.DLL")

if (hModule == 0)
    sub_10003112()
else
    data_10022064 = GetProcAddress(hModule, "FlsAlloc")
    data_10022068 = GetProcAddress(hModule, "FlsGetValue")
    data_1002206c = GetProcAddress(hModule, "FlsSetValue")
    int32_t eax_3 = GetProcAddress(hModule, "FlsFree")
    bool cond:0_1 = data_10022064 == 0
    data_10022070 = eax_3
    
    if (cond:0_1 || data_10022068 == 0 || data_1002206c == 0 || eax_3 == 0)
        data_10022068 = TlsGetValue
        data_10022064 = sub_100030d5
        data_1002206c = TlsSetValue
        data_10022070 = TlsFree
    
    uint32_t dwTlsIndex = TlsAlloc()
    data_1002011c = dwTlsIndex
    
    if (dwTlsIndex != 0xffffffff && TlsSetValue(dwTlsIndex, data_10022068) != 0)
        sub_1000456c()
        int32_t eax_5 = sub_10002fe8(data_10022064)
        int32_t var_10_6 = data_10022068
        data_10022064 = eax_5
        int32_t eax_6 = sub_10002fe8(var_10_6)
        int32_t var_14_1 = data_1002206c
        data_10022068 = eax_6
        int32_t eax_7 = sub_10002fe8(var_14_1)
        int32_t var_18_1 = data_10022070
        data_1002206c = eax_7
        data_10022070 = sub_10002fe8(var_18_1)
        
        if (sub_100072bb() != 0)
            int32_t eax_11 = sub_10003063(data_10022064)(sub_100032c9)
            data_10020118 = eax_11
            
            if (eax_11 != 0xffffffff)
                void* eax_12 = __calloc_crt(1, 0x214)
                
                if (eax_12 != 0 && sub_10003063(data_1002206c)(data_10020118, eax_12) != 0)
                    sub_1000314f(eax_12, 0)
                    uint32_t eax_15 = GetCurrentThreadId()
                    *(eax_12 + 4) = 0xffffffff
                    *eax_12 = eax_15
                    return 1
        
        sub_10003112()

return 0
