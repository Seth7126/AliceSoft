// 函数: sub_45bdc0
// 地址: 0x45bdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_30
int32_t var_c = __security_cookie ^ &var_30

if (arg1 != 0 && arg2 s>= 3)
    int32_t eax_1
    eax_1.b = *arg1
    
    if (eax_1.b == 0x50 && arg1[1] == 0x4d)
        @__security_check_cookie@4(var_c ^ &var_30)
        return 0
    
    if (eax_1.b == 0x42 && arg1[1] == 0x4d)
        @__security_check_cookie@4(var_c ^ &var_30)
        return 1
    
    if (eax_1.b == 0x51 && arg1[1] == 0x4e && arg1[2] == 0x54)
        @__security_check_cookie@4(var_c ^ &var_30)
        return 2
    
    if (eax_1.b == 0x41 && arg1[1] == 0x4a && arg1[2] == 0x50)
        @__security_check_cookie@4(var_c ^ &var_30)
        return 4
    
    if (arg2 s> 0xa && sub_45bfa0(arg1) != 0)
        @__security_check_cookie@4(var_c ^ &var_30)
        return 3
    
    if (arg2 s> 8)
        int32_t var_14 = 0x474e5089
        int32_t var_10_1 = 0xa1a0a0d
        int32_t ecx_11 = 0
        
        while (true)
            int32_t eax_8
            eax_8.b = *(&var_14 + arg1 - &var_14 + ecx_11)
            
            if (eax_8.b != *(&var_14 + ecx_11))
                break
            
            ecx_11 += 1
            
            if (ecx_11 s>= 8)
                @__security_check_cookie@4(var_c ^ &var_30)
                return 5
        
        if (ecx_11 s>= 8)
            @__security_check_cookie@4(var_c ^ &var_30)
            return 5
    
    if (arg1[arg2 - 1] == 0 && arg2 s>= 0x12)
        void var_2c
        sub_403360(&var_2c, &arg1[0xffffffee + arg2])
        char eax_13 = sub_407560(&var_2c, "TRUEVISION-TARGA")
        char eax_14
        
        if (eax_13 == 0)
            eax_14 = sub_407560(&var_2c, "TRUEVISION-XFILE.")
        
        if (eax_13 != 0 || eax_14 != 0)
            sub_403320(&var_2c)
            @__security_check_cookie@4(var_c ^ &var_30)
            return 6
        
        sub_403320(&var_2c)

@__security_check_cookie@4(var_c ^ &var_30)
return 0xffffffff
