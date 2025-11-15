// 函数: _uninitialize_allocated_memory
// 地址: 0x711260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = data_7e1d30
bool cond:0 = *eax_1 != 1
*eax_1
*eax_1 -= 1

if (not(cond:0))
    int32_t eax = data_7e1d30
    
    if (eax != 0x7e1b10)
        __free_base(eax)
        data_7e1d30 = 0x7e1b10

__free_base(data_7fc710)
int32_t var_c = data_7fc714
data_7fc710 = 0
__free_base(var_c)
int32_t var_10 = data_7fcb10
data_7fc714 = 0
__free_base(var_10)
int32_t var_14 = data_7fcb14
data_7fcb10 = 0
__free_base(var_14)
data_7fcb14 = 0
int32_t result
result.b = 1
return result
