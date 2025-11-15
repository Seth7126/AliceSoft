// 函数: sub_421e70
// 地址: 0x421e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = (*(**(arg1 + 8) + 0x28))()
int32_t esi = 0
int32_t* result

if (ebx s> 0)
    do
        result = (*(**(arg1 + 8) + 0x2c))(esi)
        
        if (result != 0xffffffff && sub_421810(arg1, result, arg2).b == 0)
            result.b = 0
            return result
        
        esi += 1
    while (esi s< ebx)

result.b = 1
return result
