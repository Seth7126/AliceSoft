// 函数: sub_518720
// 地址: 0x518720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg4
int32_t ebx_1 = *(arg1 + 0x50) + 0x260
void* edi = *(arg1 + 0x44)

if (*(edi + 0x70) != 0 && (*(**(edi + (esi << 2) + 0x7c) + 0x20))() == 0)
    if (esi != 3)
        esi = 1
    else
        esi = 2
        
        if ((*(**(edi + 0x84) + 0x20))() == 0)
            esi = 1

return (*(**(edi + (esi << 2) + 0x7c) + 0x24))(arg2, arg3, ebx_1, arg5)
