// 函数: sub_6ace40
// 地址: 0x6ace40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_4e8
int32_t eax_1 = __security_cookie ^ &var_4e8
void* i = arg2

while (i != 0)
    void* i_1 = 0x400
    
    if (i u< 0x400)
        i_1 = i
    
    i -= i_1
    
    if (arg1 != 0)
        int32_t eax_2 = *(arg1 + 0x5c)
        
        if (eax_2 == 0)
            sub_6a7500(arg1, "Call to NULL read function")
            noreturn
        
        void var_40c
        sub_6a4030(eax_2(arg1, &var_40c, i_1), &var_40c, arg1, i_1)

if (sub_6acf40(arg1) != 0)
    int32_t eax_5 = *(arg1 + 0x78)
    int32_t eax_8
    
    if ((*(arg1 + 0x11c) & 0x20000000) == 0)
        eax_8 = eax_5 & 0x400
    else
        eax_8 = not.d(eax_5 u>> 9) & 1
    
    if (eax_8 != 0)
        char var_4e4[0xd8]
        sub_6a7650(eax_8, &var_4e4, arg1, "CRC error")
        sub_6a7530(arg1, &var_4e4)
        @__security_check_cookie@4(eax_1 ^ &var_4e8)
        return 1
    
    sub_6a77d0(arg1, "CRC error")

@__security_check_cookie@4(eax_1 ^ &var_4e8)
return 0
