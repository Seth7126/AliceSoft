// 函数: sub_4f46a0
// 地址: 0x4f46a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t* result = sub_4a8880(data_75d4fc + 0x174, arg1)

if (result != 0)
    void* esi_1 = &result[0x2d]
    
    if (result[0x3e] != arg2)
        int32_t var_10_1 = *(esi_1 + 0x4c)
        *(esi_1 + 0x44) = arg2
        result = sub_4aaa40(esi_1)
        int32_t* ecx_3 = *(esi_1 + 0x148)
        
        if (ecx_3 != 0)
            return (**ecx_3)()

return result
