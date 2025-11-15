// 函数: sub_415770
// 地址: 0x415770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1

if (arg1 == 0)
    return 0xffffffff

int32_t eax_2 = (*(*arg1 + 0x28))()
int32_t esi = 0

if (eax_2 s> 0)
    do
        int32_t result = (*(*arg1 + 0x2c))(esi)
        
        if (arg2 == (*(*arg1 + 0x14))(result))
            return result
        
        esi += 1
    while (esi s< eax_2)

return 0xffffffff
