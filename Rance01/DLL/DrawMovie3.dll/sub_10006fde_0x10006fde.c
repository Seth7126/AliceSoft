// 函数: sub_10006fde
// 地址: 0x10006fde
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_24 = edi
int32_t eax = sub_1000305a()
int32_t var_8 = 0

if (data_100221f0 != 0)
label_1000708f:
    int32_t eax_11 = data_100221fc
    
    if (eax_11 == eax || data_10022200 == eax)
    label_100070e7:
        int32_t eax_16 = data_100221f4
        
        if (eax_16 != eax)
            int32_t eax_17 = sub_10003063(eax_16)
            
            if (eax_17 != 0)
                int32_t eax_18 = eax_17()
                var_8 = eax_18
                
                if (eax_18 != 0)
                    int32_t eax_19 = data_100221f8
                    
                    if (eax_19 != eax)
                        int32_t eax_20 = sub_10003063(eax_19)
                        
                        if (eax_20 != 0)
                            var_8 = eax_20(var_8)
    else
        int32_t eax_12 = sub_10003063(eax_11)
        int32_t eax_13 = sub_10003063(data_10022200)
        
        if (eax_12 == 0 || eax_13 == 0)
            goto label_100070e7
        
        int32_t eax_14 = eax_12()
        int32_t eax_15
        void var_18
        void var_c
        
        if (eax_14 != 0)
            eax_15 = eax_13(eax_14, 1, &var_18, 0xc, &var_c)
        char var_10
        
        if (eax_14 != 0 && eax_15 != 0 && (var_10 & 1) != 0)
            goto label_100070e7
        
        arg3 |= 0x200000
    
    int32_t eax_22 = sub_10003063(data_100221f0)
    
    if (eax_22 != 0)
        return eax_22(var_8, arg1, arg2, arg3)
else
    HMODULE hModule = LoadLibraryA("USER32.DLL")
    
    if (hModule != 0)
        int32_t eax_1 = GetProcAddress(hModule, "MessageBoxA")
        
        if (eax_1 != 0)
            data_100221f0 = sub_10002fe8(eax_1)
            data_100221f4 = sub_10002fe8(GetProcAddress(hModule, "GetActiveWindow"))
            data_100221f8 = sub_10002fe8(GetProcAddress(hModule, "GetLastActivePopup"))
            int32_t eax_8 = sub_10002fe8(GetProcAddress(hModule, "GetUserObjectInformationA"))
            data_10022200 = eax_8
            
            if (eax_8 != 0)
                data_100221fc = sub_10002fe8(GetProcAddress(hModule, "GetProcessWindowStation"))
            
            goto label_1000708f

return 0
