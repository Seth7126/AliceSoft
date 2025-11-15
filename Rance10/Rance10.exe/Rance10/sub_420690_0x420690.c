// 函数: sub_420690
// 地址: 0x420690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = (*(**(arg1 + 8) + 4))(arg2)
int32_t result

if (edi != 0 && arg3 s>= 0)
    int32_t eax_2
    int32_t edx_2
    edx_2:eax_2 = sx.q((*(*edi + 0x14))())
    
    if (arg3 s< (eax_2 + (edx_2 & 3)) s>> 2)
        result = (*(*edi + 0x18))()
        
        if (result != 0)
            *(result + (arg3 << 2)) = arg4
            result.b = 1
            return result

result.b = 0
return result
