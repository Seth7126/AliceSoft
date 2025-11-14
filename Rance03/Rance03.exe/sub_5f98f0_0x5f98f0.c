// 函数: sub_5f98f0
// 地址: 0x5f98f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*arg1 + 0xc4))(0)
(*(*arg1 + 0xc8))(0)
char result = (*(*arg1 + 0xb8))(1, 0, 1, 0, 0, 0xffffffff)

if (result == 0)
    return result

int32_t* ecx_2 = *(arg2 + 4)

if (ecx_2 != 0 && (*(*ecx_2 + 0x24))() != 0)
    int32_t* ecx_3 = *(arg2 + 4)
    
    if (ecx_3 != 0)
        void* esi_1 = *ecx_3
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = muls.dp.d(0x55555556, (*(esi_1 + 0x20))())
        *(arg2 + 4)
        
        if ((*(esi_1 + 0x28))(0, (edx_1 u>> 0x1f) + edx_1) != 0)
            return 1

return 0
