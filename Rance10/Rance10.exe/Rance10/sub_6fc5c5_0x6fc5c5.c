// 函数: sub_6fc5c5
// 地址: 0x6fc5c5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6f09b1()
void* esi

if (eax == 0)
    esi = nullptr
else
    esi = eax - 4

int32_t* ecx = *arg1
int32_t result = sub_6f1a43(*ecx + 0x3c, &ecx[1])
int32_t ecx_3
char ebx_1

if (result.b != 0)
    ebx_1 = 1
    ecx_3 = *(*(esi + 0xa0) + 0x90)

if (result.b == 0 || (*(*(*arg1 + 8) + (ecx_3 u>> 5 << 2)) & 1 << (ecx_3.b & 0x1f)) != 0)
    ebx_1 = 0

result.b = ebx_1
return result
