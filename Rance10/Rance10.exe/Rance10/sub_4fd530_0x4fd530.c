// 函数: sub_4fd530
// 地址: 0x4fd530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg2
char* result = *(*esi + 0x50)
int32_t edx = *(result + 0x1ac)

if (edx != 0)
    if (edx == 2)
        result = *(arg1 + 4)
    
    if (edx != 2 || *result != 0)
        if (edx == 3)
            result = *(arg1 + 4)
        
        if (edx != 3 || *result == 0)
            result = *(arg1 + 8)
            *(result + 0x200) = esi

return result
