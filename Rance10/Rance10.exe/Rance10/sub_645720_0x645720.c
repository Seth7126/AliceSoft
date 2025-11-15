// 函数: sub_645720
// 地址: 0x645720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
int32_t esi = int.d(arg2 * 255f)

if (esi s< 0)
    esi = 0
else if (esi s> 0xff)
    esi = 0xff

int32_t* ecx = *(arg1 + 0x18)
void* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    result_1 = result
    
    if (result != 0)
        sub_6491b0(result, *(arg1 + 4), &result_1, *(arg1 + 8), *(arg1 + 0xc), *(arg1 + 0x10), 
            esi << 0x18 | 0xffffff)
        int32_t* ecx_2 = *(arg1 + 0x18)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
