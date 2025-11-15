// 函数: sub_685830
// 地址: 0x685830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_54
int32_t eax_1 = __security_cookie ^ &var_54
var_54 = arg1

for (int32_t i = 0; i s<= 1; i += 1)
    int32_t j = 0
    int32_t ebx_1
    ebx_1.b = i != 0
    
    do
        int32_t var_40
        _memset(&var_40, 0, 0x34)
        var_40 = ebx_1
        int32_t var_38_1 = 4
        int32_t var_34_1 = 0
        int128_t var_2c
        __builtin_memcpy(&var_2c, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00\x00\x01\x00\x"
        "00\x00\x01\x00\x00\x00\x08\x00\x00\x00", 
            0x20)
        int32_t eax_2
        eax_2.b = j != 0
        int16_t var_30_1 = 0xffff
        int32_t var_3c_1 = eax_2
        void* eax_3 = var_54
        int32_t var_50 = 0
        int32_t* eax_4 = *(eax_3 + 8)
        
        if ((*(*eax_4 + 0x54))(eax_4, &var_40, &var_50) s< 0)
            int32_t eax_5
            eax_5.b = 0
            @__security_check_cookie@4(eax_1 ^ &var_54)
            return eax_5
        
        void* ecx_1 = var_54
        int32_t var_4c = (i * 2) | j
        void* var_48
        sub_42ebc0(ecx_1 + 0x34, &var_48, &var_4c)
        j += 1
        *(var_48 + 0x14) = var_50
    while (j s<= 1)

void* eax_8
eax_8.b = 1
@__security_check_cookie@4(eax_1 ^ &var_54)
return eax_8
