// 函数: sub_5cf2d0
// 地址: 0x5cf2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
*(esi + 0x234) -= 4
int32_t edi = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t ebx = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t edx = **(esi + 0x234)
int32_t eax_5 = (*(esi + 0x178) - *(esi + 0x174)) s>> 2

if (edx u< eax_5)
    eax_5 = *(esi + 0x174)
    arg1 = *(eax_5 + (edx << 2))
    
    if (arg1 != 0)
        uint32_t result
        int32_t ecx
        int32_t edx_1
        result, ecx, edx_1 = sub_5d5100(arg1, ebx, edi)
        
        if (result.b != 0)
            return result
        
        char const* const var_10_1 = "eraseDelegateMethod"
        return sub_5c2400(result, edx_1, ecx, esi, "DG_ERASE")

int32_t var_10_2 = edx
int32_t var_14_1 = 0x6ea474
return sub_5c2400(eax_5, edx, arg1, esi, "DG_ERASE")
