// 函数: sub_486330
// 地址: 0x486330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx
int32_t* result = sub_4625f0(ecx)
void* edi = &result[4]
result[3].w = 0

if (edi != 0)
    int32_t* ecx_2 = *arg1
    *(edi + 0x14) = 0xf
    *(edi + 0x10) = 0
    *edi = 0
    sub_4056a0(edi, ecx_2)
    *(edi + 0x18) = 0
    *(edi + 0x20) = 0

return result
