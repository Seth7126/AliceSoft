// 函数: sub_4d17b0
// 地址: 0x4d17b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x40)

if (*(result + 0x79) == 0)
    int32_t ebx
    
    if (arg2 u<= 3)
        result = *(result + 0x48c)
        ebx.b = *(result + (arg2 << 2)) == 1
    else
        ebx.b = 0
    
    void* esi_1 = *(arg1 + 0x34)
    
    if (arg2 u<= 3)
        result = sub_510ff0(esi_1, arg2)
        void* result_1 = result
        
        if (*(esi_1 + 0x18) != result_1)
            if (ebx.b != 0)
                result = (*(**(*(esi_1 + 0x28) + (result_1 << 2)) + 0x60))()
            
            *(esi_1 + 0x18) = result_1
            *(esi_1 + 0x14) = 1

return result
