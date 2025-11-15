// 函数: sub_421ed0
// 地址: 0x421ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = (*(**(arg1 + 8) + 0x3c))()
int32_t esi = 0
int32_t* result

if (ebx s> 0)
    do
        result = (*(**(arg1 + 8) + 0x40))(esi)
        
        if (result != 0xffffffff && sub_421810(arg1, result, arg2).b == 0)
            result.b = 0
            return result
        
        esi += 1
    while (esi s< ebx)

result.b = 1
return result
