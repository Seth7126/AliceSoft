// 函数: sub_10003063
// 地址: 0x10003063
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_4

if (TlsGetValue(data_1002011c) == 0)
label_100030a2:
    HMODULE hModule = GetModuleHandleW(u"KERNEL32.DLL")
    
    if (hModule != 0)
    label_100030bd:
        eax_4 = GetProcAddress(hModule, "DecodePointer")
        goto label_100030c3
    
    hModule = sub_100042a7(u"KERNEL32.DLL")
    
    if (hModule != 0)
        goto label_100030bd
else
    int32_t eax_1 = data_10020118
    
    if (eax_1 == 0xffffffff)
        goto label_100030a2
    
    void* eax_3 = TlsGetValue(data_1002011c)(eax_1)
    
    if (eax_3 == 0)
        goto label_100030a2
    
    eax_4 = *(eax_3 + 0x1fc)
label_100030c3:
    
    if (eax_4 != 0)
        return eax_4(arg1)
return arg1
