// 函数: sub_69d4d0
// 地址: 0x69d4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t (* var_4c)[0x4]
int32_t eax_1 = __security_cookie ^ &var_4c
int32_t* edx = *(arg1 + 8)

if (edx != 0)
    (*(*edx + 8))(edx)
    *(arg1 + 8) = 0

int32_t var_18
__builtin_memcpy(&var_18, 
    "\x01\x00\x02\x00\x44\xac\x00\x00\x10\xb1\x02\x00\x04\x00\x10\x00\x00\x00", 0x12)
int128_t var_3c
__builtin_memset(&var_3c, 0, 0x20)
int128_t var_2c
var_2c.d = &var_18
int32_t* eax_3 = *(arg1 + 4)
var_3c.d = 0x24
var_3c:4.d = 0x8088
var_3c:8.d = 0x113a0
var_2c = data_74e6f0

if ((*(*eax_3 + 0xc))(eax_3, &var_3c, arg1 + 8, 0) s>= 0)
    int32_t* eax_5 = *(arg1 + 8)
    void* var_48
    void* var_44
    uint32_t (* var_40)[0x4]
    
    if ((*(*eax_5 + 0x2c))(eax_5, 0, var_3c:8.d, &var_40, &var_44, &var_4c, &var_48, 0) s>= 0)
        _memset(var_40, 0, var_44)
        uint32_t (* edx_1)[0x4] = var_4c
        
        if (edx_1 != 0)
            _memset(edx_1, 0, var_48)
            edx_1 = var_4c
        
        int32_t* eax_6 = *(arg1 + 8)
        int32_t eax_7
        eax_7.b = (*(*eax_6 + 0x4c))(eax_6, var_40, var_44, edx_1, var_48) s>= 0
        @__security_check_cookie@4(eax_1 ^ &var_4c)
        return eax_7

int32_t eax_4
eax_4.b = 0
@__security_check_cookie@4(eax_1 ^ &var_4c)
return eax_4
