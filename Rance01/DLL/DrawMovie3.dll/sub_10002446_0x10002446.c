// 函数: sub_10002446
// 地址: 0x10002446
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_c = edi

if (arg1 == 1)
    if (sub_10005d65(arg1) != 0)
        if (sub_10003466() != 0)
            sub_10005d19()
            data_10023658 = GetCommandLineA()
            data_10021a18 = sub_10005be2()
            
            if (sub_1000560d() s>= 0)
                if (sub_10005b27() s>= 0 && sub_100058af() s>= 0 && sub_10004396(0) == 0)
                    data_10021a14 += 1
                    return 1
                
                sub_10005861()
                sub_10003112()
                sub_10005d95()
            else
                sub_10003112()
                sub_10005d95()
        else
            sub_10005d95()
else if (arg1 != 0)
    if (arg1 != 2)
        if (arg1 == 3)
            sub_100033f8(nullptr)
        
        return 1
    
    sub_100030de()
    void* eax_9 = __calloc_crt(1, 0x214)
    
    if (eax_9 != 0)
        if (sub_10003063(data_1002206c)(data_10020118, eax_9) != 0)
            sub_1000314f(eax_9, 0)
            uint32_t eax_12 = GetCurrentThreadId()
            *(eax_9 + 4) = 0xffffffff
            *eax_9 = eax_12
            return 1
        
        sub_10003602(eax_9)
else if (data_10021a14 s> 0)
    data_10021a14 -= 1
    
    if (data_100220bc == 0)
        __cexit()
    
    if (arg2 == 0)
        sub_10005861()
        sub_10003112()
        sub_10005d95()
    
    return 1

return 0
