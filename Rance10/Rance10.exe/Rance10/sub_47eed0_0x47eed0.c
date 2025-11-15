// 函数: sub_47eed0
// 地址: 0x47eed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb64

if (sub_47d5a0(esi) != 0)
    int32_t* ecx_1 = *(esi + 8)
    
    if (ecx_1 != 0)
        if (*(esi + 0x24) != 0)
            return (*(**(esi + 8) + 0x10))(arg1, arg2)
        
        if ((*(*ecx_1 + 8))() != 0)
            *(esi + 0x24) = 1
            return (*(**(esi + 8) + 0x10))(arg1, arg2)

return 0
