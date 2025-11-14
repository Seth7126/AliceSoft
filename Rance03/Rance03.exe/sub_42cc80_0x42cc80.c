// 函数: sub_42cc80
// 地址: 0x42cc80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = (*(**(arg1 + 8) + 4))((*(**(arg1 + 8) + 0x20))())
int32_t result

if (edi != 0 && arg2 s>= 0)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q((*(*edi + 0x14))())
    
    if (arg2 s< (eax_3 + (edx_2 & 3)) s>> 2)
        result = (*(*edi + 0x18))()
        
        if (result != 0)
            *(result + (arg2 << 2)) = arg3
            result.b = 1
            return result

result.b = 0
return result
