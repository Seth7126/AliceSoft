// 函数: sub_1000af2a
// 地址: 0x1000af2a
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* var_1c
sub_10004910(&var_1c, arg3)
int32_t ebx = arg1
void* var_14
char var_10
uint32_t eax_3

if (ebx + 1 u> 0x100)
    arg1 = ebx s>> 8
    uint8_t var_c
    uint16_t* ecx_2
    
    if (sub_1000a14b(arg1.b, &var_1c) == 0)
        var_c = ebx.b
        char var_b_2 = 0
        ecx_2 = 1
    else
        int32_t eax_6
        eax_6.b = arg1.b
        var_c = eax_6.b
        char var_b_1 = ebx.b
        char var_a_1 = 0
        ecx_2 = 2
    
    void* eax_7 = var_1c
    int16_t var_8
    int32_t* eax_8 =
        sub_1000aab0(&var_1c, 1, &var_c, ecx_2, &var_8, *(eax_7 + 4), *(eax_7 + 0x14), 1)
    
    if (eax_8 == 0)
        if (var_10 != eax_8.b)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return 0
    
    eax_3 = zx.d(var_8)
else
    eax_3 = zx.d(*(*(var_1c + 0xc8) + (ebx << 1)))

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd

return eax_3 & arg2
