// 函数: sub_5e3f40
// 地址: 0x5e3f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi_2 = (*(arg1 + 0x424) - *(arg1 + 0x420)) s>> 2
int32_t esi_3 = esi_2 - 1

if (esi_2 - 1 s>= 0)
    int32_t temp1_1
    
    do
        HMODULE hLibModule = *(*(arg1 + 0x420) + (esi_3 << 2))
        
        if (hLibModule != 0)
            FreeLibrary(hLibModule)
        
        temp1_1 = esi_3
        esi_3 -= 1
    while (temp1_1 - 1 s>= 0)

*(arg1 + 0x424) = *(arg1 + 0x420)
int32_t* ecx_1 = *(arg1 + 0x44c)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x44c) = 0

return sub_5e0450() __tailcall
