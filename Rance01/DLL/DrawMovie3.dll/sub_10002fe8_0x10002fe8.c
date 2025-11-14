// 函数: sub_10002fe8
// 地址: 0x10002fe8
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_4

if (TlsGetValue(data_1002011c) == 0)
label_10003027:
    HMODULE hModule = GetModuleHandleW(u"KERNEL32.DLL")
    
    if (hModule != 0)
    label_10003042:
        eax_4 = GetProcAddress(hModule, "EncodePointer")
        goto label_10003048
    
    hModule = sub_100042a7(u"KERNEL32.DLL")
    
    if (hModule != 0)
        goto label_10003042
else
    int32_t eax_1 = data_10020118
    
    if (eax_1 == 0xffffffff)
        goto label_10003027
    
    void* eax_3 = TlsGetValue(data_1002011c)(eax_1)
    
    if (eax_3 == 0)
        goto label_10003027
    
    eax_4 = *(eax_3 + 0x1f8)
label_10003048:
    
    if (eax_4 != 0)
        return eax_4(arg1)
return arg1
