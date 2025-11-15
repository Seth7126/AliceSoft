// 函数: sub_4969c0
// 地址: 0x4969c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_2 = (*(arg1 + 8) - *(arg1 + 4)) s>> 2
int32_t esi_3 = esi_2 - 1

if (esi_2 - 1 s>= 0)
    int32_t temp1_1
    
    do
        HMODULE hLibModule = *(*(arg1 + 4) + (esi_3 << 2))
        
        if (hLibModule != 0)
            FreeLibrary(hLibModule)
        
        temp1_1 = esi_3
        esi_3 -= 1
    while (temp1_1 - 1 s>= 0)

int32_t result = *(arg1 + 4)
*(arg1 + 8) = result
return result
