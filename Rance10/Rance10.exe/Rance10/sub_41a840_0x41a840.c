// 函数: sub_41a840
// 地址: 0x41a840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t edx = *(arg1 + 4)

if (edx != 0xa && edx != 2 && edx != 0x12 && edx != 0x5c && edx != 0x5b && edx != 0x5d
        && sub_41a7b0(arg1) == 0)
    if (edx == 0xb || edx == 3 || edx == 0x13)
        int32_t eax_7 = int.d(fconvert.t(*(arg1 + 0x50)))
        @__security_check_cookie@4(eax_1 ^ &var_2c)
        return eax_7
    
    if (edx == 0xc || edx == 4 || edx == 0x14)
        void* ecx = arg1 + 0x54
        int32_t var_28 = 0
        
        if (*(ecx + 0x14) u>= 0x10)
            ecx = *ecx
        
        int32_t* var_24
        sub_403360(&var_24, ecx)
        int32_t* var_34_2 = &var_28
        int32_t* eax_3 = &var_24
        int32_t var_10
        
        if (var_10 u>= 0x10)
            eax_3 = var_24
        
        int32_t ebx
        ebx.b = sub_6ca310(eax_3, 0x7942e0) == 1
        sub_403320(&var_24)
        
        if (ebx.b != 0)
            int32_t eax_5 = var_28
            @__security_check_cookie@4(eax_1 ^ &var_2c)
            return eax_5
    
    @__security_check_cookie@4(eax_1 ^ &var_2c)
    return 0

int32_t eax_8 = *(arg1 + 0x4c)
@__security_check_cookie@4(eax_1 ^ &var_2c)
return eax_8
