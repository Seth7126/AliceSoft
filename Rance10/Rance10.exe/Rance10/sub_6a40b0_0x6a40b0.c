// 函数: sub_6a40b0
// 地址: 0x6a40b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_84[0x80]
char* var_4 = __security_cookie ^ &var_84
void* edi = arg1
char* eax_1

if (arg2 == 0)
    *(edi + 0x78) |= 0x20000
else
    eax_1 = "1.6.8"
    
    do
        arg1.b = *eax_1
        
        if (*(arg2 - "1.6.8" + eax_1) != arg1.b)
            *(edi + 0x78) |= 0x20000
        
        eax_1 = &eax_1[1]
    while (arg1.b != 0)

if ((*(edi + 0x78) & 0x20000) != 0)
    int32_t ebx
    ebx.b = (*"1.6.8")[0]
    
    if (arg2 == 0)
    label_6a413e:
        int32_t i = 0
        
        if ((*"Application built with libpng-")[0] != 0)
            while (i u< 0x7f)
                arg1.b = (*"Application built with libpng-")[i]
                var_84[i] = arg1.b
                i += 1
                
                if ((*"Application built with libpng-")[i] == 0)
                    break
        
        var_84[i] = 0
        
        if (i u< 0x80)
            if (arg2 != 0 && *arg2 != 0)
                void* edx = arg2 - i
                
                while (i u< 0x7f)
                    arg1.b = *(edx + i)
                    var_84[i] = arg1.b
                    i += 1
                    
                    if (*(edx + i) == 0)
                        break
            
            var_84[i] = 0
            
            if (i u< 0x80)
                if ((*" but running with ")[0] != 0)
                    char* edx_1 = " but running with " - i
                    
                    while (i u< 0x7f)
                        arg1.b = edx_1[i]
                        var_84[i] = arg1.b
                        i += 1
                        
                        if (edx_1[i] == 0)
                            break
                
                var_84[i] = 0
                
                if (i u< 0x80)
                    if (ebx.b != 0)
                        char* edx_2 = "1.6.8" - i
                        
                        while (i u< 0x7f)
                            arg1.b = edx_2[i]
                            var_84[i] = arg1.b
                            i += 1
                            
                            if (edx_2[i] == 0)
                                break
                    
                    var_84[i] = 0
        
        sub_6a7530(edi, &var_84)
        @__security_check_cookie@4(var_4 ^ &var_84)
        return 0
    
    arg1.b = *arg2
    
    if (arg1.b != ebx.b)
        goto label_6a413e
    
    if (arg1.b == 0x31)
        eax_1.b = arg2[2]
        
        if (eax_1.b != (*"6.8")[0])
            goto label_6a413e
        
        eax_1.b = arg2[3]
        
        if (eax_1.b != (*".8")[0])
            goto label_6a413e
        
        goto label_6a412b
    
label_6a412b:
    
    if (arg1.b == 0x30 && arg2[2] s< 0x39)
        goto label_6a413e

@__security_check_cookie@4(var_4 ^ &var_84)
return 1
